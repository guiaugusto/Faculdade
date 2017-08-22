#include <bits/stdc++.h>
#include <cstring>

using namespace std;

char hex(int r){

	char c;

	switch (r){
		case 0: c = '0';
				break;
		case 1: c = '1';
				break;
		case 2: c = '2';
				break;
		case 3: c = '3';
				break;
		case 4: c = '4';
				break;
		case 5: c = '5';
				break;
		case 6: c = '6';
				break;
		case 7: c = '7';
				break;
		case 8: c = '8';
				break;
		case 9: c = '9';
				break;
		case 10: c = 'A';
				break;
		case 11: c = 'B';
				break;
		case 12: c = 'C';
				break;
		case 13: c = 'D';
				break;
		case 14: c = 'E';
				break;
		case 15: c = 'F';
				break;

	}

	return c;
}

int main(){

	string value;
	int i = 0;

	cin >> value;

	int size = value.length();

	char hexV[size];
	int v = stoi(value);

	while(v/16.0 > 0){
		hexV[i] = hex(v % 16);
		v = v/16.0;
		i++;
	}

	hexV[i] = '\0';

	for(int j = i; i >= 0; i--){
		printf("%c", hexV[i]);
	}

	printf("\n");

	return 0;
}