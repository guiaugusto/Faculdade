#include <bits/stdc++.h>

using namespace std;

int main (){

	int n;

	cin >> n;
	getchar();

	for(int i = 0; i < n; i++){
		char s1[100], s2[100], *s3;
		char aux[2];
		cin >> s1 >> s2;

		s3 = (char *) malloc (sizeof(char)*100);

		int a = strlen(s1);
		int b = strlen(s2);

		int size = a+b;
		int k = 0;

		for(int j = 0; j < size; j++){
			if(j < a){
				s3[k] = s1[j];
				k++;
			}

			if(j < b){
				s3[k] = s2[j];
				k++;
			}
		}
		
		printf("%s\n", s3);

	}


	return 0;
}
