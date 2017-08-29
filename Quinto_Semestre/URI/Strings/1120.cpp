#include <bits/stdc++.h>

using namespace std;

int main (){

	char n;
	string s;
	string f;
	int teste = 0;

	while(cin >> n >> s, n != 0 && s[0] != '0'){

		if(s.find(n) >= 0){
			
			for(int i = 0; i < s.size(); i++){
				if(s[i] != n){
					if(s[i] != '0' || s[i] == '0' && teste == 1){
						f.append(1, s[i]);
						teste = 1;
					}
				}
			}

			if(f.size() == 0){
				cout << '0' << endl;
			}else{
				cout << f << endl;
			}

		}else{
			cout << s << endl;
		}

		f.clear();
		teste = 0;
	}

	return 0;
}