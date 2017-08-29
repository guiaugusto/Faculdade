#include <bits/stdc++.h>

using namespace std;

int main (){

	double s, newsal, reajuste;
	int percent;

	cin >> s;

	if(s >= 0 && s <= 400){
		percent = 15;
		newsal = s*1.15;
	}else if(s > 400 && s <= 800){
		percent = 12;
		newsal = s*1.12;
	}else if(s > 800 && s <= 1200){
		percent = 10;
		newsal = s*1.1;
	}else if(s > 1200 && s <= 2000){
		percent = 7;
		newsal = s*1.07;
	}else{
		percent = 4;
		newsal = s*1.04;
	}

	reajuste = newsal - s;

	printf("Novo salario: %.2lf\n", newsal);
	printf("Reajuste ganho: %.2lf\n", reajuste);
	printf("Em percentual: %d %%\n", percent);

	return 0;
}