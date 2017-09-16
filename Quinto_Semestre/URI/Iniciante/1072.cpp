#include <bits/stdc++.h>

using namespace std;

int main (){

	int n;
	int t;

	cin >> n;

	int in = 0;
	int out = 0;

	for(int i = 0; i < n; i++){
		cin >> t;

		if(t > 20 || t < 10){
			out++;
		}else{
			in++;
		}
	}

	printf("%d in\n", in);
	printf("%d out\n", out);

	return 0;
}