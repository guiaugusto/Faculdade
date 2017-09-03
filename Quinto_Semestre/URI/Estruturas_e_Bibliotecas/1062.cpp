#include <bits/stdc++.h>

using namespace std;

int main (){

	int n, teste, m;

	while(cin >> n, n > 0){
		
		int a[n];

		stack<int> estacao;
		stack<int> ini;
		stack<int> fim;

		m = n;

		teste = 1;

		while(teste == 1){

			for(int i = 0; i < n; i++){

				cin >> a[i];

				if(a[i] == 0 && i == 0){
					teste = 0;
					break;
				}
				ini.push(a[i]);
			}

			if(teste == 0){
				printf("\n");
				break;
			}

			while(!ini.empty()){
				if(ini.top() == m && estacao.size() == 0){
					estacao.push(ini.top());
					ini.pop();
					fim.push(estacao.top());
					estacao.pop();
					m--;
				}else if(ini.top() != m && estacao.size() == 0){
					estacao.push(ini.top());
					ini.pop();
				}else if(ini.top() != m && estacao.size() != 0){
					estacao.push(ini.top());
					ini.pop();
				}else if(ini.top() == m && estacao.size() != 0){
					estacao.push(ini.top());
					ini.pop();
					fim.push(estacao.top());
					estacao.pop();
					m--;
					while(!estacao.empty()){
						if(estacao.top() == m){
							fim.push(estacao.top());
							estacao.pop();
							m--;
						}else{
							break;
						}
					}
				}
			}
				if(fim.size() == n){
					printf("Yes\n");
				}else{
					printf("No\n");
				}

				while(!estacao.empty()){
					estacao.pop();
				}

				while(!fim.empty()){
					fim.pop();
				}

				while(!ini.empty()){
					ini.pop();
				}

				m = n;
		}	
	}

	return 0;
}
