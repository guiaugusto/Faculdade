# Paradigmas de solução de problemas

[1. Busca Completa - Força Bruta](#1-busca-completa---força-bruta)
> [1.1 BC Iterativa - UVA 725](#11-bc-iterativa---uva-725)
> [1.2 BC Vários loops - UVA 441](#12-bc-vários-loops---uva-441)
> [1.3 BC com poda - UVA 11565](#13-bc-com-poda---uva-11565)
> [1.4 BC subconjuntos - UVA 12455](#14-bc-subconjuntos---uva-12455)
> [1.5 BC Recursivo - UVA 750](#15-bc-recursivo---uva-750)
[2. Dividir e Conquistar](#2-dividir-e-conquistar)
> [2.1 Busca binária](#21-busca-binária)
> [2.2 Método da Bisseção](#22-método-da-bisseção)
[3. Algoritmos Gulosos](#3-algoritmos-gulosos)
> [3.1 Coin change - versão gulosa](#31-coin-change---versão-gulosa)
> [3.2 Balança de carga - UVA 410](#32-balança-de-carga---uva-410)
[4. Programação dinâmica](#4-programação-dinâmica)

## 1. Busca Completa

Técnica: percorrer todo o conjunto de possíveis soluções para encontrar a solução correta. Durante a busca é possível escolher não explorar partes específicas de conjunto.

OBS: tais soluções constumam não receber WA, apenas TLE, por terem um custo computacional muito elevado.

### 1.1 BC Iterativa - UVA 725

Encontre e imprima todos os pares de número A, B, tal que A e B tenham apenas 5 digitos cada, A/B = N, para um N inteiro e A e B juntos tenham todos os dígitos de 0 à 9.

```cpp

for(int A = 1234; A <= 98765; A++){
	int B = A * N;
	int bits = 0;
	int tmp = A;
	for(int i = 0; i < 5; i++){
		bits |= (1<< tmp % 10);
		tmp /= 10;
	}
	tmp = B;
	for(int i = 0; i < 5; i++){
		bits |= (1 << tmp % 10);
		tmp /= 10;
	}
	if(bits == (1 << 10) - 1)
		cout <, B << "/" << A << endl;
}

```

### 1.2 BC vários loops - UVA 441

Dado 6 < K < 13 inteiros ordenados, encontre todos os subconjuntos de tamanho 6 deste conjunto.

V = 1, 2, 3, 4, 5, 6, 7

```cpp

for(int a = 0; a < k-5; a++)
for(int b = a+1; b < k-4; b++)
for(int c = b+1; c < k-3; c++)
for(int d = c+1; d < k-2; d++)
for(int e = d+1; e < k-1; e++)
for(int f = e+1; f < k; f++)
	printf("%d %d %d %d %d %d\n", V[a], V[b], V[c], V[d], V[e], V[f]);

```

### 1.3 BC com "poda" - UVA 11565

Dados 3 números 1 <= A, B, C <= 10⁴, encontre x, y, z, tal que:

x + y + z = A
x * y * z = B
x² + y² + z² = C

```cpp

for(int x = -100, x <= 100; x++)
for(int y = -100, y <= 100; y++)
for(int z = -100, z <= 100; z++)
	if(x != y && x != z && y != z && x+y+z == A && x*y*z  == B && x*x + y*y + z*z == C)
		printf("%d %d %d\n", x, y, z);

```

### 1.4 BC subconjuntos - UVA 12455

Dada uma lista de até 20(original: 12) inteiros, imprima todos os subconjuntos desta lista, tal que sua soma seja igual a um inteiro X.

```cpp

for(int i = 0; i < (1 << 20); i++){
	int sum = 0;
	for(int j = 0; j < 20; j++){
		if(i & (1 << j)){
			sum += V[j];
		}
	}
	if(sum == X){
		for... (print)
	}
}

```

### 1.5 BC Recursivo - UVA 750

Em um tabuleiro de xadrez, são dispostas 8 rainhas. Imprima todas as formas de colocar todas as rainhas, tal que, uma não consiga atacar a outra.

```cpp

int r[8] = {}

bool is_solution(int col, int row){
	for(int i = 0; i < col; i++){
		if(r[i] == row)
			return false;
		if(abs(col-i) == abs(r[i]-row))
			return false;
	}
	return true;
}

void backtracking(int col){
	if(col == 8) {
		for(int i = 0; i < 8; i++){
			cout << i << "," << r[i] << " ";
		}
		cout << endl;
	}

	for(int i = 0; i < 8; i++){
		if(is_solution(col, i)){
			r[col] = i;
			backtracking(col+1);
		}
	}
}

```

## 2. Dividir e Conquistar

Técnica: Dividir o problema em sub-problemas, encontrar as soluções de cada sub-problema e, se necessário, combinar as sub-soluções para encontrar a solução final.

### 2.1 Busca binária

Dado um vetor ordenado, determine se um inteiro X  está presente no vetor.

* Estudar: lower_bound

### 2.2 Método da Bisseção

Dada uma função f(x) definida em um intervalo [A, B], encontre Xo pertencente [A, B], tal que f(Xo) = 0.

## 3. Algitmos Gulosos

Técnica: faça a melhor escolha local a cada passo, até que (com sorte) seja encontrada a solução.
Em vários casos, algoritmos gulosos não funcionam (problemas de programação dinâmica), mas quando funcionam, o código será pequeno e eficiente.

### 3.1 Coin change - versão gulosa

Dado um montante M e uma lista de moedas disponíveis, determine a menor quantidade de moedas para representar M.

### 3.2 Balanço de carga - UVA 410

Dada uma balança com dois pratos e uma lista de pesos, encontre o menor desequilíbrio possível, ao colocarmos todos os pesos nas balanças.
