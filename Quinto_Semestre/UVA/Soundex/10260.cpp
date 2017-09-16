#include <bits/stdc++.h>

using namespace std;

int main (){

	string s;
	int teste = 0;

	while(cin >> s){

		for(int i = 0; i < s.size(); i++){
			if(s[i] == 'B' || s[i] == 'F' || s[i] == 'P' || s[i] == 'V'){
				if(teste != 1){
					printf("1");
					teste = 1;
				}
			}else if(s[i] == 'C' || s[i] == 'G' || s[i] == 'J' || s[i] == 'K' || s[i] == 'Q' || s[i] == 'S' || s[i] == 'X' || s[i] == 'Z'){
				if(teste != 2){
					printf("2");
					teste = 2;
				}
			}else if(s[i] == 'D' || s[i] == 'T'){
				if(teste != 3){
					printf("3");
					teste = 3;
				}
			}else if(s[i] == 'L'){
				if(teste != 4){
					printf("4");
					teste = 4;
				}
			}else if(s[i] == 'M' || s[i] == 'N'){
				if(teste != 5){
					printf("5");
					teste = 5;
				}
			}else if(s[i] == 'R'){
				if(teste != 6){
					printf("6");
					teste = 6;
				}
			}else{
				teste = 0;
			}
		}

		printf("\n");

		s.clear();

		teste = 0;
	}

	return 0;
}