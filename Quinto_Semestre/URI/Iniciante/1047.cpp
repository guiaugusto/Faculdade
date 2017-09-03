#include <bits/stdc++.h>

using namespace std;

int main (){

	int a, b, c, d;
	int h, m;

	cin >> a >> b >> c >> d;

	if(a == b && b == c && c == d){
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	}else{
		m = d - b;
		h = c - a;

		if(m < 0 && h > 0){
			if(h > 0){
				h = (c - a)*60;
			}else{
				h = 24*60;
			}

			h = h - abs(m);
			m = h % 60;
			h = h / 60;

		}else{
			h = (c - a);
		}

		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);

	}

	return 0;
}