#include <bits/stdc++.h>

using namespace std;

int main (){

    int N;
    int teste = 0;

    while(scanf("%d", &N), N != 0){

        int count = 0;

        if(teste >= 1)
            printf("\n");

        for(int A = 1234; A <= 98765; A++){
        	int B = A * N;
        	int bits = 0;
        	int tmp = A;
        	for(int i = 0; i < 5; i++){
        		bits |= (1<< tmp % 10);
        		tmp /= 10;
        	}
        	tmp = B;
        	for(int i = 0; i < 5; i++){
        		bits |= (1 << tmp % 10);
        		tmp /= 10;
        	}

        	if(bits == (1 << 10) - 1 && B <= 98765){
                printf("%05d / %05d = %d\n", B, A, N);
                count++;
            }
        }

        if(count == 0)
            cout << "There are no solutions for " << N  << "."<< endl;

        teste++;

    }

    return 0;
}
