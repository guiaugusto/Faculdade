#include <bits/stdc++.h>
#include <string>

using namespace std;

int main (){

	string cases1 = "`1234567890-=";
	string cases2 = "QWERTYUIOP[]\\";
	string cases3 = "ASDFGHJKL;'";
	string cases4 = "ZXCVBNM,./";
	
	char phrase[10000];
	string c;
	int i = 0;
	int locate = 0;

	while(getline(cin, c)){

		while(i < c.size()){

			if(cases1.find(c[i]) != -1 && cases1.find(c[i]) != 0){
				locate = cases1.find(c[i]); 	
				phrase[i] = cases1[locate-1];
			}else if(cases2.find(c[i]) != -1 && cases2.find(c[i]) != 0){
				locate = cases2.find(c[i]);
				phrase[i] = cases2[locate-1];
			}else if(cases3.find(c[i]) != -1 && cases3.find(c[i]) != 0){
				locate = cases3.find(c[i]);
				phrase[i] = cases3[locate-1];
			}else if(cases4.find(c[i]) != -1 && cases4.find(c[i]) != 0){
				locate = cases4.find(c[i]);
				phrase[i] = cases4[locate-1];
			}else{
				phrase[i] = ' ';
			}

			i++;
		}	

		i = 0;

		printf("%s\n", phrase);

		for(int j = 0; j < c.size(); j++){
			phrase[j] = '\0';
		}

	}

	return 0;
}