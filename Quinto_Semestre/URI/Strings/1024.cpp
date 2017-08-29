#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int main (){

	int n;
	int a;
	int k;
	int size;
	string result;

	cin >> n;
	getchar();

	string c[n];

	for(int i = 0; i < n; i++){
			
		getline(cin, c[i]);

		size = c[i].length();

		/* first passing */
		for(int j = 0; j < size; j++){
			if(isalpha(c[i][j])){
				a = (int)c[i][j] + 3;
				c[i][j] = (char)a;
			}
		}

		/* second passing */
		k = 0;

		reverse(c[i].begin(), c[i].end());

		/* third passing */

		for(int j = size/2; j < size; j++){
			a = (int)c[i][j] - 1;
			c[i][j] = (char)a;
		}
	}

	for(int i = 0; i < n; i++){
		cout << c[i] << "\n";
	}

	return 0;
}