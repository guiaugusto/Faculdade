#include <bits/stdc++.h>

using namespace std;

int main (){

	int n, q;
	vector<int> marble;
	int m;
	int cont = 1;

	while(cin >> n >> q, n != 0 && q != 0){

		int teste = 1;

		for(int i = 0; i < n; i++){
			cin >> m; 
			marble.push_back(m);
		}

		sort(marble.begin(), marble.end());

		cout << "CASE# " << cont << ":" << endl;

		for(int i = 0; i < q; i++){
			cin >> m;
			for(int j = 0; j < n; j++){
				if(m == marble[j]){
					cout << m << " found at " << j+1 << endl;
					teste = 0;
					j = n;
				}
			}

			if(teste == 1){
				cout << m << " not found" << endl;
			}
			teste = 1;
		}

		cont++;
		marble.clear();
	}

	return 0;
}