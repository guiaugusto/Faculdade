#include <bits/stdc++.h>

using namespace std;

int main(){

	long int n;
	int contPar = 0;
	int contImpar = 0;

	cin >> n;

	long int a[n];
	vector<long int> vecPar;
	vector<long int> vecImpar;

	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i] % 2 == 0){
			vecPar.push_back(a[i]);
			contPar++;
		}else{
			vecImpar.push_back(a[i]);
			contImpar++;
		}
	}

	sort(vecPar.begin(), vecPar.end());
	sort(vecImpar.begin(), vecImpar.end());

	for(int i = 0; i < contPar; i++){
		cout << vecPar[i] << endl;
	}

	for(int i = contImpar-1; i >= 0; i--){
		cout << vecImpar[i] << endl;
	}

	return 0;
}