#include <bits/stdc++.h>

using namespace std;

int main (){

	double oitoporcento = 0;
	double desoitoporcento = 0;
	double vinteoitoporcento = 0;

	double n;

	cin >> n;

	oitoporcento = n - 2000;

	if(oitoporcento > 1000){
		desoitoporcento = oitoporcento - 1000;
		oitoporcento = oitoporcento - desoitoporcento;

		if(desoitoporcento > 1500){
			vinteoitoporcento = desoitoporcento - 1500;
			desoitoporcento = desoitoporcento - vinteoitoporcento;
		}

	}

	if(n <= 2000){
		printf("Isento\n");
	}else{
		printf("R$ %.2lf\n", oitoporcento*0.08+desoitoporcento*0.18+vinteoitoporcento*0.28);
	}


	return 0;
}