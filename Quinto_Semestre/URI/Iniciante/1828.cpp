#include <bits/stdc++.h>

using namespace std;

int main (){

	int n;

	cin >> n;

	char s1[20];
	char s2[20];

	for(int i = 0; i < n; i++){
		
		cin >> s1;
		cin >> s2;

		if(strcmp(s1,"tesoura") == 0 && strcmp(s2,"papel") == 0 || strcmp(s1,"papel") == 0 && strcmp(s2,"pedra") == 0 
			|| strcmp(s1,"pedra") == 0 && strcmp(s2,"lagarto") == 0 || strcmp(s1,"lagarto") == 0 && strcmp(s2,"Spock") == 0 
			|| strcmp(s1,"Spock") == 0 && strcmp(s2,"tesoura") == 0 || strcmp(s1,"tesoura") == 0 && strcmp(s2,"lagarto") == 0 
			|| strcmp(s1,"lagarto") == 0 && strcmp(s2,"papel") == 0 || strcmp(s1,"Spock") == 0 && strcmp(s2,"pedra") == 0 
			|| strcmp(s1,"pedra") == 0 && strcmp(s2,"tesoura") == 0 || strcmp(s1,"papel") == 0 && strcmp(s2,"Spock") == 0){
			printf("Caso #%d: Bazinga!\n", i+1);
		}else if(strcmp(s1, s2) == 0){
			printf("Caso #%d: De novo!\n", i+1);
		}else{
			printf("Caso #%d: Raj trapaceou!\n", i+1);
		}
	}


	return 0;
} 