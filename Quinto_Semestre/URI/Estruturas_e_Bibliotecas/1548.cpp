#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	cin >> n;

	while(n > 0){

		int m;

		cin >> m;

		int a[m];
		vector<int> vecDes;
		vector<int> vecOrd;
		int contP = 0;

		for(int i = 0; i < m; i++){
			cin >> a[i];
			vecDes.push_back(a[i]);
		}

		sort(vecDes.begin(), vecDes.end());

		for(int i = m-1; i >= 0; i--){
			vecOrd.push_back(a[i]);
		}

		for(int i = 0; i < m; i++){
			if(vecDes[i] == vecOrd[i]){
				contP++;
			}
		}

		cout << contP++ << endl;

		n--;
	}


	return 0;
}