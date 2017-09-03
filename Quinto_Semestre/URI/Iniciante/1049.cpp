#include <bits/stdc++.h>

using namespace std;

int main (){

	int i = 0;
	string s[3];

	while(i < 3){
		cin >> s[i];
		i++;
	}

	if(s[0] == "vertebrado"){
		if(s[1] == "ave"){

			if(s[2] == "carnivoro"){
				printf("aguia\n");
			}else{
				printf("pomba\n");
			}

		}else{

			if(s[2] == "onivoro"){
				printf("homem\n");
			}else{
				printf("vaca\n");
			}

		}
	}else{
		if(s[1] == "inseto"){

			if(s[2] == "hematofago"){
				printf("pulga\n");
			}else{
				printf("lagarta\n");
			}

		}else{

			if(s[2] == "hematofago"){
				printf("sanguessuga\n");
			}else{
				printf("minhoca\n");
			}

		}
	}


	return 0;
}