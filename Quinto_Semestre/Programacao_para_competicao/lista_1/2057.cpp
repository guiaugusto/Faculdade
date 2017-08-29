#include <bits/stdc++.h>

using namespace std;

int main(){

	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	int result = a + b;

	if(result > 23){
		result = 0 + (result - 24);
	}

	int resultf = result + c;

	if(resultf < 0){
		resultf = 24 - (resultf*(-1));
	}

	printf("%d\n", resultf);

	return 0;
}