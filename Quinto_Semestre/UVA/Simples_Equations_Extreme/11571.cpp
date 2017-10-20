#include <bits/stdc++.h>

using namespace std;

int main (){

    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){

        long long int A, B, C;
        int teste = 0;

        scanf("%lld %lld %lld", &A, &B, &C);

        for(long long int a1 = -1817121; a1 < 1817121; a1++){
            if(a1 * a1 <= C){
                for(long long int a2 = -2449489743; a2 < 2449489743; a2++){
                    if(a1!=a2 && a1*a1 + a2*a2 <= C){
                        for(long long int a3 = -2449489743; a3 < 2449489743; a3++){
                            if(a1!=a3 && a2!=a3 && a1+a2+a3 == A && a1*a2*a3 == B && (a1*a1 + a2*a2 + a3*a3) == C){
                                    teste = 1;
                                    printf("%lld %lld %lld\n", a1, a2, a3);
                                    a1 = 100;
                                    a2 = 100;
                                    a3 = 100;
                            }
                        }
                    }
                }
            }
        }

        if(teste == 0)
            printf("No solution.\n");

    }

    return 0;
}
