#include <bits/stdc++.h>

using namespace std;

int main(){

	long int a, limit;
	int cont = 0;

	while(cin >> a >> limit, a > 0 || limit > 0){

		int n = 1;
		int ai = a;

		do{
			if(a % 2 == 0){
				a = a/2;
			}else{
				a = (3 * a)+1;
			}

			if(a > limit){
				break;
			}

			n++;

		}while(a != 1 && a <= limit);

		cont++;
		printf("Case %d: A = %ld, limit = %ld, number of terms = %d\n", cont, ai, limit, n);
	}

	return 0;
}