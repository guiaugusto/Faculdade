#include <bits/stdc++.h>

using namespace std;

int main (){

	int a = 0, b = 0, e = 0, t = 0;
	int o = 0;
	int g1, g2;
	int i, g;

	while(o != 2){
		cin >> g1 >> g2;
	
		if(g1 > g2){
			a++;
		}else if(g1 < g2){
			b++;
		}else{
			e++;
		}

		t++;

		printf("Novo grenal (1-sim 2-nao)\n");
		cin >> o;
	}

	printf("%d grenais\n", t);
	printf("Inter:%d\n", a);
	printf("Gremio:%d\n", b);
	printf("Empates:%d\n", e);
	
	if(a > b){
		printf("Inter venceu mais\n");
	}else if(a < b){
		printf("Gremio venceu mais\n");
	}else{
		printf("Nao houve vencedor\n");
	}

	return 0;
}
