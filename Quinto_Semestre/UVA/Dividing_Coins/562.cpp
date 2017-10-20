#include <bits/stdc++.h>
#define MAX_W 10000
#define MAX_V 10000
#define MAX_ITENS 1000

using namespace std;

int W[MAX_ITENS];
int V[MAX_ITENS];

int memo[MAX_W][MAX_V];

int knapsack(int i, int w) {

    if (i < 0 || w <= 0) return 0;

    if (memo[i][w] != -1) return memo[i][w];

    if (W[i] > w) return memo[i][w] = knapsack(i - 1, w);

    return memo[i][w] = max(knapsack(i - 1, w),
                            knapsack(i - 1, w - W[i]) + V[i]);
}

int main() {

    int n;
    scanf("%d", &n);

    while(n--){

        memset(memo, -1, sizeof memo);
        memset(W, 0, sizeof W);
        memset(V, 0, sizeof V);

        int q;
        scanf("%d", &q);
        int sum = 0;

        for(int i = 0; i < q; i++){
            scanf("%d", &V[i]);
            W[i] = V[i];
            sum += V[i];
        }

        printf("%d\n", sum - knapsack(q-1, sum/2)*2);

    }

    return 0;
}
