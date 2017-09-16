#include <bits/stdc++.h>

using namespace std;

int main (){

	char **phrases;
	int cont = 0;
	int maior = 0;

	phrases = (char **) malloc (sizeof(char *)*105);

	for(int i = 0; i < 105; i++){
		phrases[i] = (char *) malloc (sizeof(char)*105);
	}

	while(scanf("%[^\n]", phrases[cont]) != EOF){
		getchar();

		if(strlen(phrases[cont]) > maior){
			maior = strlen(phrases[cont]);
		}

		cont++;
	}

	cont--;

	for(int i = 0; i < maior; i++){
		for(int j = cont; j >= 0; j--){
			if(phrases[j][i] == '\0'){
				printf(" ");
			}else{
				printf("%c", phrases[j][i]);
			}
		}
		printf("\n");
	}

	return 0;
}