#include <bits/stdc++.h>

using namespace std;

int main (){

	int q;
	int c = 0;
	cin >> q;
	int letra;
	int n[q];
	string s[q];

	while(c < q){

		cin >> s[c];
		cin >> n[c];

		for(int j = 0; j < s[c].size(); j++){
			if(s[c][j] - n[c] < 'A'){
				letra = 'Z' - 'A';
				s[c][j] = s[c][j] + letra - n[c] + 1;
			}else{
				s[c][j] = s[c][j] - n[c];
			}	
		}

		c++;
	}

	for(int i = 0; i < c; i++){
		cout << s[i] << endl;
	}

	return 0;
}