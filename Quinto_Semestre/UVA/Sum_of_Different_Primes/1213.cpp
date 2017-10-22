#include <bits/stdc++.h>
#define MAX_W 1150
#define MAX_K 20
#define MAX_I 200
#define MAX_ITENS 1000

using namespace std;

int memo[MAX_W][MAX_K][MAX_I];
int W[MAX_ITENS];

int n, k;

int knapsack(int w, int t, int i){

    if (w > 0 && t == 0)
        return 0;

    if (t == 0 && w == 0)
        return 1;

    if (w < 0 || t < 0)
        return 0;

    if (W[i] > n)
        return 0;

    if (memo[w][t][i] != -1)
        return memo[w][t][i];

    return memo[w][t][i] = knapsack(w - W[i], t-1, i+1) + knapsack(w, t, i+1);

}

void verifiesPrime(){

    int counter = 0;
    int c = 0;

    for(int i = 2; i <= 1130; i++){
        for(int j = 2; j <= 1130; j++){
            if(i % j == 0){
                counter++;
            }
        }

        if(counter <= 1){
            W[c] = i;
            c++;
        }

        counter = 0;
    }

}

int main (){

    verifiesPrime();

    while(scanf("%d %d", &n, &k), n != 0 && k != 0){
        memset(memo, -1, sizeof memo);

        int value = knapsack(n, k, 0);

        printf("%d\n", value);
    }

    return 0;
}
