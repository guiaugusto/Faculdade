#include <bits/stdc++.h>

using namespace std;

int main(){

	int a, b;

	while(cin >> a >> b, a != 0 || b != 0){

		set<int> alice, beatriz;

		int temp;
		int cont = 0;

		if(b > a){
			
			temp = a;
			a = b;
			b = temp;
		}

		if(b > a){

			int ali[a], bia[b];


			for(int i = 0; i < a; i++){
				cin >> ali[i];
				alice.insert(ali[i]);
			}	

			for(int i = 0; i < b; i++){
				cin >> bia[i];
				beatriz.insert(bia[i]);
			}	

			for(auto it1 : alice){
				for(auto it2 : beatriz){
					if(it1 == it2){
						beatriz.erase(it2);
						break;
					}
				}
			}


		}else{

			int ali[b], bia[a];

			for(int i = 0; i < b; i++){
				cin >> ali[i];
				alice.insert(ali[i]);
			}	

			for(int i = 0; i < a; i++){
				cin >> bia[i];
				beatriz.insert(bia[i]);
			}	

			for(auto it1 : beatriz){
				for(auto it2 : alice){
					if(it1 == it2){
						alice.erase(it2);
						break;
					}
				}
			}

		}


		cont = beatriz.size();

		cout << cont << endl;

		cont = 0;
		alice.clear();
		beatriz.clear();

	}

	return 0;
}