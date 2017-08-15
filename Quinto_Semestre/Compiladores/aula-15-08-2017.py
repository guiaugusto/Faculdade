import ox
import operator as operator

# \d representa digitos de 0 a 9
lexer = ox.make_lexer([

	('NUMBER', r'\d+(\.\d*)?'),
	('OP_S', r'[-+]'),
	('OP_M', r'[*/]'),

])

tokens_list = ['NUMBER', 'OP_S', 'OP_M']
infix = lambda x, op, y: (op, x, y)
atom = lambda x: ('atom', float(x))

parser = ox.make_parser([

	('expr : atom OP_S term', infix),
	('expr : expr OP_S term', infix),
	('term : term OP_M atom', infix),
	('term : atom', lambda x: x),
	('atom : NUMBER', atom),

], tokens_list)

OP_TO_FUNC = {
	'+': lambda x, y: x + y,
	'-': lambda x, y: x - y,
	'*': lambda x, y: x * y,
	'/': lambda x, y: x / y
}

def eval(ast):
	head, *tail = ast
	if head == 'atom':
		return tail[0]
	elif head in {'+', '-', '*', '/'}:
		func = OP_TO_FUNC[head]
		x, y = map(eval, tail)
		return func(x, y)
	# else:
	# 	raise ValueError('operador invalido: %s', % head)

expr = input('expr: ')
tokens = lexer(expr)
ast = parser(tokens)
print('tokens:', tokens)
print('AST:', ast)
print('eval: ', eval(ast))