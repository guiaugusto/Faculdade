import ox

lexer = ox.make_lexer([
    ('NUMBER', r'[0-9]+(\.[0-9]+?'),
    ('OP_PRI', r'[*/]')
    ('OP_SEC', r'[-+]')    
])

OPERATORS = {
    '+': lambda x, y: x + y,
    '-': lambda x, y: x - y,
    '*': lambda x, y: x * y,
    '/': lambda x, y: x / y,
}
    
tokens = ['NUMBER', 'OP']
parser = ox.make_parser([

    ('term : term OP atom', lambda a, op, b: OPERATORS[op](a, b)),
    ('term : atom', lambda x: x),
    ('atom : NUMBER', float)

], tokens)

st = input('expr: ')
tokens = lexer(st)
print(lexer(st))

res = parser(tokens)
print(res)
