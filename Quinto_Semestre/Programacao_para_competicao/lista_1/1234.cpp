#include <bits/stdc++.h>

using namespace std;

int main (){

	char s[50];

	int i = 0;
	int t = 0;
	int k = 0;

	while(scanf("%[^\n]", s) != EOF){

		getchar();

		t = strlen(s);

		while(i < t){
			if(s[i] != ' '){
				if(k % 2 == 0){
					s[i] = toupper(s[i]);
				}else{
					s[i] = tolower(s[i]);
				}
				k++;
			}
			i++;

		}

		i = 0;
		k = 0;

		printf("%s\n", s);

	}

	return 0;
}