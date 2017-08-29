#include <bits/stdc++.h>

using namespace std;

int main (){

	int N, L, C;

	while(cin >> N >> L >> C){

		string s[N];

		for(int i = 0; i < N; i++){
			cin >> s[i];
		}

		int quantC = 0;
		int linha = 0;
		int resto;
		int total = 0;

		for(int i = 0; i < N; i++){
			quantC += s[i].size();
			if(quantC > C){
				resto = quantC - C;
				quantC = resto;
				linha++;
				if(linha == L){
					total++;
				}
			}
		}

		printf("%d\n", total);

	}

	return 0;
}