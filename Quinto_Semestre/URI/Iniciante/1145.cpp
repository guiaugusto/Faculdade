#include <bits/stdc++.h>

using namespace std;

int main (){

	int n;
	int m;
	int teste = 0;
	cin >> m >> n;

	for(int i = 1; i <= n; i++){
		teste = 0;
		if(i % m == 0){
			printf("%d\n", i);
		}else{
			printf("%d ", i);
		}
	}

	return 0;
}