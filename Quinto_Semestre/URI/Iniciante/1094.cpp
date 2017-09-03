#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	
	int q;
	char t;

	int c = 0, r = 0, s = 0;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> q >> t;
		if(t == 'C')
			c += q;
		if(t == 'R')
			r += q;
		if(t == 'S')
			s += q;
	}

	printf("Total: %d cobaias\n", c+r+s);
	printf("Total de coelhos: %d\n", c);
	printf("Total de ratos: %d\n", r);
	printf("Total de sapos: %d\n", s);
	printf("Percentual de coelhos: %.2lf %%\n", c*100.0/(c+r+s));
	printf("Percentual de ratos: %.2lf %%\n", r*100.0/(c+r+s));
	printf("Percentual de sapos: %.2lf %%\n", s*100.0/(c+r+s));

	return 0;
}