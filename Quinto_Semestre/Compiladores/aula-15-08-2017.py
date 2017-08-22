import ox
import operator as operator

# \d representa digitos de 0 a 9
lexer = ox.make_lexer([

	('NUMBER', r'\d+(\.\d*)?'),
	('OP_S', r'[-+]'),
	('OP_M', r'[*/]'),
	('OP_P', r'[\^]'),
	('PAR_O', r'\('),
	('PAR_C', r'\)'),

])

tokens_list = ['NUMBER', 'OP_S', 'OP_M', 'OP_P', 'PAR_O', 'PAR_C']
infix = lambda x, op, y: (op, x, y)
atom = lambda x: ('atom', float(x))

parser = ox.make_parser([

	('expr : expr OP_S term', infix),
	('expr : term', lambda x: x),
	('term : term OP_M res', infix),
	('term : res', lambda x: x),
	('res : res OP_P atom', infix),
	('res : atom', lambda x: x),
	('atom : NUMBER', atom),

], tokens_list)

OP_TO_FUNC = {
	'+': lambda x, y: x + y,
	'-': lambda x, y: x - y,
	'*': lambda x, y: x * y,
	'/': lambda x, y: x / y,
	'^': lambda x, y: x**y,
}

def eval(ast):
	head, *tail = ast
	if head == 'atom':
		return tail[0]
	elif head in {'+', '-', '*', '/', '^'}:
		func = OP_TO_FUNC[head]
		x, y = map(eval, tail)
		return func(x, y)
	else:
		raise ValueError('operador invalido: %s' % head)

expr = input('expr: ')
tokens = lexer(expr)
ast = parser(tokens)
print('tokens:', tokens)
print('AST:', ast)
print('eval: ', eval(ast))