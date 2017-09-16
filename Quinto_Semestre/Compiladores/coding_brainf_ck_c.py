from types import SimpleNamespace
from getch import getche

ctx = SimpleNamespace(tokens=[], indent=0)

# Creates for looping with the format for(it condition init; it condition interval; increment){}

def forLooping(it, init, condition, interval, increment, content):
	forLoop = SimpleNamespace(tokens=[], indent=0)

	return ''.join(forLoop.tokens)

# Creates while looping with the format while(condition){}

whileLoop = SimpleNamespace(tokens=[], indent=0)

def whileLooping(condition, content, it_append, indent):

	if not whileLoop.tokens:
		whileLoop.tokens.append(indent + 'while')
		return whileLooping(condition, content, it_append, indent)
	else:
		if whileLoop.tokens[it_append-1] == indent + 'while':
			whileLoop.tokens.append('(')	
		elif whileLoop.tokens[it_append-1] == '(':
			whileLoop.tokens.append(condition + ')')
		elif whileLoop.tokens[it_append-1] == condition + ')':
			whileLoop.tokens.append('{\n')
		elif whileLoop.tokens[it_append-1] == content:
			return ''.join(whileLoop.tokens)
		else:
			whileLoop.tokens.append(content)

		return whileLooping(condition, content, it_append, indent)

# Creates indent to blocks

def indentSpace(indent_count):
	return '    ' * indent_count

# Build the content of the file

# -------------------------- INSTRUCTIONS --------------------------
#
# . imprime o caracter atual da tabela ASCII
# + aumenta 1 e depois imprime o caracter atual da tabela ASCII
# , pega um caracter do usuario e grava na posição atual (getchar())
# > pointer move to left.
# < pointer move to right.
# - diminuir na posição atual less actual position
# [] repete as instruções até que a cabeça tenha a posição igual a 0
#
# ------------------------------------------------------------------


source = '''
8: ++++++++++++++++++++++++++++++++++++++++++++++++++++++++.
><
5: ---.


ahaaa!
'''

# source: [->+<]

contentFileMade = SimpleNamespace(tokens=[], indent=0)

def buildFileContent(source, indent):
	
	data = [0]
	data_pointer = 0
	it_source = 0

	while it_source < len(source):
		cmd = source[it_source]

		if cmd == '+':
			data[data_pointer] = (data[data_pointer] + 1) % 256

		elif cmd == '-':
			data[data_pointer] = (data[data_pointer] - 1) % 256
		
		elif cmd == '.':
			print(indent + 'printf("' + chr(data[data_pointer]) + '\\n");')

		elif cmd == ',':
			...
		elif cmd == '>':
			data_pointer += 1
			if data_pointer > len(data):
				data.append(0)
			
		elif cmd == '<':
			data_pointer -= 1

		elif cmd == '[':
			whileContent = SimpleNamespace(tokens=[], indent=0)


		elif cmd == ']':
			...


		it_source += 1


	return ''.join(contentFileMade.tokens)


# Build the libraries used in code

librariesMade = SimpleNamespace(tokens=[], indent=0)

def buildLibraries():
	librariesMade.tokens.append('#include <stdio.h>' + '\n')
	librariesMade.tokens.append('#include <stdlib.h>' + '\n')

	return ''.join(librariesMade.tokens)

# Build method main to initializate the C code

is_main = 0

def buildMain(is_main, indent):
	if is_main == 0:
		print('int main (){\n')
	else:
		print(indent + 'return 0;\n' + '}\n')








# Start to do the translate of brainfuck code to C code

print(buildLibraries())

buildMain(is_main, indentSpace(ctx.indent))

content = SimpleNamespace(tokens=[], indent=0)

content = buildFileContent(source, indentSpace(ctx.indent+1))

ctx.indent += 1

# When the program wants to do a infinite looping
## condition = '1'
# When the program wants to sum two numbers
condition = 'data[data_pointer] != 0'


is_main = 1
buildMain(is_main, indentSpace(ctx.indent))