#include <bits/stdc++.h>
#define MAX_ITENS 1001
#define MAX_W 1000
#define MAX_P 1000

using namespace std;

int P[MAX_ITENS];
int W[MAX_ITENS];

int memo[MAX_W][MAX_P];

int knapsack(int i, int w){

    if(i < 0 || w <= 0)
        return 0;

    if(memo[i][w] != -1)
        return memo[i][w];

    if(W[i] > w)
        return memo[i][w] = knapsack(i - 1, w);

    return memo[i][w] = max(knapsack(i - 1, w),
                                knapsack(i - 1, w - W[i]) + P[i]);

}

int main (){

    // T - test cases (1 <= T <= 1000)
    // N - number of objects (1 <= N <= 1000)
    // P - price (1 <= P <= 100)
    // W - peso (1 <= W <= 30)
    // G - number of people in the group (1 <= G <= 100)
    // MW - Maximal weight (1 <= MW <= 30)
    // i - each person of the family (1 <= i <= G)

    int T, N, G, I;

    scanf("%d", &T);

    while(T--){
        memset(memo, -1, sizeof memo);

        scanf("%d", &N);

        for(int i = 0; i < N; i++){
            scanf("%d %d", &P[i], &W[i]);
        }

        scanf("%d", &G);

        int MW[G+1];
        int sum = 0;

        for(int i = 0; i < G; i++){
            scanf("%d", &MW[i]);
            sum += knapsack(N - 1, MW[i]);
        }

        printf("%d\n", sum);

    }

    return 0;
}
