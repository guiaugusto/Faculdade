#include <bits/stdc++.h>

using namespace std;

int main (){

	int n;
	int i = 1;
	cin >> n;

	n = n+1;

	while(i <= 6){
		printf("%d\n", n);
		i++;
		n += 2;
	}



	return 0;
}