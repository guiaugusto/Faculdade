#include <bits/stdc++.h>

using namespace std;

int main (){

	int n;
	int i = 0;
	
	cin >> n;
	
	string s = "6255456376";
	int led[n];

	string f[n];

	for(int j = 0; j < n; j++){
		cin >> f[j];
		led[j] = 0;
	}

	for(int j = 0; j < n; j++){
		for(int k = 0; k < f[j].size(); k++){
			int a = f[j][k] - '0';
			led[j] += s[a] - '0';
		}
	}

	for(i = 0; i < n; i++){
		printf("%d leds\n", led[i]);
	}

	return 0;
}