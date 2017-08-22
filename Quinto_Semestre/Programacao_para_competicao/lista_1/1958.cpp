#include <bits/stdc++.h>

using namespace std;

int main (){

	int n = 0;
	double m;
	int teste = 1;

	cin >> m;

	if(m < 0){
		teste = 0;
		m = m * (-1);
	}

	if(m > 0){

		while(m/10 >= 1 || m*10 < 10){
			if(m >= 10){
				n++;
				m = m/10;
			}else{
				n--;
				m = m*10;
			}
		}

	}

	if(teste == 0){
		m = m * (-1);
	}

	printf("%+.4lfE%+03d\n", m, n);


	return 0;
}