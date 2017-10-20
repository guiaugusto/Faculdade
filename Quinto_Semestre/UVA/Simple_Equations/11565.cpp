#include <bits/stdc++.h>

using namespace std;

int main (){

    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){

        int A, B, C;
        int teste = 0;

        scanf("%d %d %d", &A, &B, &C);

        for(int a1 = -100; a1 < 100; a1++){
            for(int a2 = -100; a2 < 100; a2++){
                for(int a3 = -100; a3 < 100; a3++){
                    if(a1!=a2 && a1!=a3 && a2!=a3 && a1+a2+a3 == A && a1*a2*a3 == B && (a1*a1 + a2*a2 + a3*a3) == C){
                            teste = 1;
                            printf("%d %d %d\n", a1, a2, a3);
                            a1 = 100;
                            a2 = 100;
                            a3 = 100;
                    }
                }
            }
        }

        if(teste == 0)
            printf("No solution.\n");

    }

    return 0;
}
