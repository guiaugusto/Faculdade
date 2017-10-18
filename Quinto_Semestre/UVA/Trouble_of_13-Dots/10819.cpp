#include <bits/stdc++.h>

#define MAX_W 10000
#define MAX_V 10000
#define MAX_ITENS 100

using namespace std;

int W[MAX_ITENS];
int V[MAX_ITENS];

int memo[MAX_W][MAX_V];

int m = 0;
int n = 0;

int knapsack(int i, int w) {

    if(w > m && m < 1800)
        return -1000;
    if(w > m + 200)
        return -1000;
    if(i == n) {
        if(w > m && w <= 2000)
            return -1000;
        return 0;
    }
    if(memo[i][w] != -1)
        return memo[i][w];

    return memo[i][w] = max(knapsack(i + 1, w), \
        V[i] + knapsack(i + 1, w + W[i]));

}

int main(){

    while(scanf("%d %d", &m, &n) != EOF){
        memset(memo, -1, sizeof memo);

        for(int i = 0; i < n; i++){
            scanf("%d", &W[i]);
            scanf("%d", &V[i]);
        }

        printf("%d\n", knapsack(0, 0));

    }

    return 0;
}
