#include <bits/stdc++.h>
#define MAX 10000

using namespace std;

int sequence[MAX];

int lis_n[MAX];

int lis(int N){

    int max_lis = 0;

    for(int i = 0; i < N; ++i){
        lis_n[i] = 1;

        for(int j = i - 1; j >= 0; --j){
            if(sequence[j] > sequence[i])
                lis_n[i] = max(lis_n[i], lis_n[j] + 1);
        }

        max_lis = max(max_lis, lis_n[i]);
    }

    return max_lis;
}

int main (){

    int tc;
    int cont = 0;
    int size_lis = 0;
    int j = 0;
    int i = 1;

    while(scanf("%d", &tc), cont < 2){
        if(tc == -1){
            cont++;
        }

        if(tc == -1 && cont == 1){
            if(i > 1)
                printf("\n");
            printf("Test #%d:\n", i);
            printf("  maximum possible interceptions: %d\n", lis(j));
            size_lis = 0;
            j = 0;
            i++;
        }

        if(cont == 2)
            break;

        if(tc != -1){
            cont = 0;
            sequence[j] = tc;
            j++;
        }
    }

    return 0;
}
