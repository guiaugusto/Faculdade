#include <bits/stdc++.h>

using namespace std;

int main (){

	int N;
	char c[12];

	scanf("%d", &N);

	while(N != 0){

		if(N - 900 < 100 && N - 900 >= 0){
			printf("CM");
			N = N - 900;
		}else if(N - 400 < 100 && N - 400 >= 0){
			printf("CD");
			N = N - 400;
		}else if(N - 90 < 10 && N - 90 >= 0){
			printf("XC");
			N = N - 90;
		}else if(N - 40 < 10 && N - 40 >= 0){
			printf("XL");
			N = N - 40;
		}else if(N - 9 == 0){
			printf("IX");
			N = N - 9;
		}else if(N - 4 == 0){
			printf("IV");
			N = N - 4;
		}else{

			if(N - 500 >= 0){
				printf("D");
				N = N - 500;
			}else if(N - 100 >= 0){
				printf("C");
				N = N - 100;
			}else if(N - 50 >= 0){
				printf("L");
				N = N - 50;
			}else if(N - 10 >= 0){
				printf("X");
				N = N - 10;
			}else if(N - 5 >= 0){
				printf("V");
				N = N - 5;
			}else if(N - 1 >= 0){
				printf("I");
				N = N - 1;
			}
		}
	}

	printf("\n");

	return 0;
}