import sys

from datetime import date

for line in sys.stdin:
	line = line.split()

	m = int(line[0])
	d = int(line[1])

	a = date(2016,m,d)
	b = date(2016,12,25)

	r = int((b-a).days)

	if r == 1:
		print('E vespera de natal!')
	elif r < 0:
		print('Ja passou!')
	elif r > 1: 
		print('Faltam {} dias para o natal!'.format(r))
	else:
		print('E natal!')
