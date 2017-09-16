#include <bits/stdc++.h>

using namespace std;

int main (){

	string a;
	int cont = 0;
	int q;

	cin >> q;

	while(cont < q){

		cin >> a;

		int aux = stoull(a);
		long long unsigned soma = 0;
		
		do{	

			soma = 0;
			int v;

			for(long long unsigned i = 0; i < a.length(); i++){
				v = a[i] - '0';
				soma += pow(v*1.0, 2);
			}

			if(soma == 4){
				break;
			}

			a = to_string(soma);

		}while(soma != aux && soma != 1);

		cont++;

		if(soma == 1){
			printf("Case #%d: %llu is a Happy number.\n", cont, aux);
		}else{	
			printf("Case #%d: %llu is an Unhappy number.\n", cont, aux);
		}
	}

	return 0;
}