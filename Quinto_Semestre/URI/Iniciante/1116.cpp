#include <bits/stdc++.h>

using namespace std;

int main (){

	int n;
	int a, b;
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> a >> b;

		if(b != 0){
			printf("%.1lf\n", a/(b*1.0));
		}else{
			printf("divisao impossivel\n");
		}
	}

	return 0;
}