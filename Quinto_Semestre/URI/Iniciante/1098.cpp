#include <bits/stdc++.h>

using namespace std;

int main (){

	double j = 1;

	for(int i = 0; i <= 20; i += 2){
		
		if(i/10.0 == 0 || i/10.0 == 1 || i/10.0 == 2){
			printf("I=%.0lf J=%.0lf\n", i/10.0, j);
			printf("I=%.0lf J=%.0lf\n", i/10.0, j+1);
			printf("I=%.0lf J=%.0lf\n", i/10.0, j+2);
		}else{
			printf("I=%.1lf J=%.1lf\n", i/10.0, j);
			printf("I=%.1lf J=%.1lf\n", i/10.0, j+1);
			printf("I=%.1lf J=%.1lf\n", i/10.0, j+2);
		}

		j += 0.2;
	}

	return 0;
}
