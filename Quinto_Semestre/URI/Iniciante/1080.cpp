#include <bits/stdc++.h>

using namespace std;

int main(){

	int maior = -1;
	int pos = 0;
	int n;

	for(int i = 0; i < 100; i++){
		cin >> n;
		if(n > maior){
			maior = n;
			pos = i;
		}
	}

	printf("%d\n%d\n", maior, pos);

	return 0;
}