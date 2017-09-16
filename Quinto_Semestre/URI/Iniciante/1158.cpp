#include <bits/stdc++.h>

using namespace std;

int main (){

	int x, y;
	int n;

	cin >> n;

	for(int j = 0; j < n; j++){

		cin >> x >> y;

		if(x % 2 == 0){
			x++;
		}

		int sum = x;

		for(int i = 1; i < y; i++){
			x += 2;
			sum += x;
		}

		printf("%d\n", sum);
		sum = 0;
	}

	return 0;
}