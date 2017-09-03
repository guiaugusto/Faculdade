#include <bits/stdc++.h>

using namespace std;

int main (){

	int a, b, temp;

	cin >> a >> b;

	if(a > b){
		temp = a;
		a = b;
		b = temp;
	}

	for(int i = a+1; i < b; i++){
		if(i % 5 == 2 || i % 5 == 3){
			printf("%d\n", i);
		}
	}

	return 0;
}