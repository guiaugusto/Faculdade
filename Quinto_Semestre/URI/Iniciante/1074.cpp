#include <bits/stdc++.h>

using namespace std;

int main (){

	int n;

	scanf("%d", &n);

	int num[n];

	for(int i = 0; i < n; i++){
		scanf("%d", &num[i]);
	}


	for(int i = 0; i < n; i++){
		if(num[i] == 0){
			printf("NULL\n");
		}else if(num[i] < 0 && abs(num[i]) % 2 == 1){
			printf("ODD NEGATIVE\n");
		}else if(num[i] < 0 && abs(num[i]) % 2 == 0){
			printf("EVEN NEGATIVE\n");
		}else if(num[i] > 0 && abs(num[i]) % 2 == 1){
			printf("ODD POSITIVE\n");
		}else if(num[i] > 0 && abs(num[i]) % 2 == 0){
			printf("EVEN POSITIVE\n");
		}
	}

	return 0;
}