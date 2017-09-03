#include <bits/stdc++.h>

using namespace std;

int main (){

	int n;
	
	cin >> n;

	int k = 0;

	string s[n];

	for(int i = 0; i < n; i++){
		getline(cin, s[i]);
	} 

	char *f[n];

	for(int i = 0; i < n; i++){
		f[i] = (char *) malloc (sizeof(char)*s[i].size());
	}


	for(int i = 0; i < n; i++){
		for(int j = 0; j < s[i].size(); j++){
			if(s[i][j] == ' ' && s[i][j+1] != ' '){
				f[i][k] = s[i][j+1];
				k++;
			}else if(s[i][j] != ' ' && j == 0){
				f[i][k] = s[i][j];
				k++;
			}
		}
		k = 0;
	}

	cout << f << endl;

	return 0;
}