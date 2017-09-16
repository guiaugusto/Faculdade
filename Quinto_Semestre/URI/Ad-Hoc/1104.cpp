#include <bits/stdc++.h>

using namespace std;

int main (){

	int a, b;

	while(cin >> a >> b, a != 0 && b != 0){

		long int ai[a];
		long int bi[b];

		set<long int> aa;
		set<long int> bb;

		for(long int i = 0; i < a; i++){
			cin >> ai[i];
			aa.insert(ai[i]);
		}

		for(long int i = 0; i < b; i++){
			cin >> bi[i];
			bb.insert(bi[i]);
		}

		long int cont = 0;

		if(aa.size() <= bb.size()){
			for(auto it: aa){
				if(bb.count(it) == 0){
					cont++;
				}
			}
		}else{
			for(auto it: bb){
				if(aa.count(it) == 0){
					cont++;
				}
			}
		}

		printf("%ld\n", cont);

	}


	return 0;
}