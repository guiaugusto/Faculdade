#include <bits/stdc++.h>

using namespace std;

int main (){

    int k;
    int cont = 0;

    while(scanf("%d", &k), k != 0){

        if(cont > 0)
            printf("\n");

        int values[k];

        for(int i = 0; i < k; i++){
            scanf("%d", &values[i]);
        }

        for(int a = 0; a <= k-6; a++)
            for(int b = a+1; b <= k-5; b++)
                for(int c = b+1; c <= k-4; c++)
                    for(int d = c+1; d <= k-3; d++)
                        for(int e = d+1; e <= k-2; e++)
                            for(int f = e+1; f <= k-1; f++)
                                printf("%d %d %d %d %d %d\n", values[a], values[b], values[c], values[d], values[e], values[f]);

        cont++;

    }

    return 0;
}
