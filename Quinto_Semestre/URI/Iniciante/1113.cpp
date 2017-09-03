#include <bits/stdc++.h>

using namespace std;

int main (){

	int a, b;

	while(cin >> a >> b, a != b){

		if(a > b){
			printf("Decrescente\n");
		}else{
			printf("Crescente\n");
		}

	}

	return 0;
}