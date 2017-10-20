#include <bits/stdc++.h>
#define MAX_W 1000
#define MAX_V 1000
#define MAX_ITENS 1000

using namespace std;

int W[MAX_ITENS];
int V[MAX_ITENS];

int unboundedKnapsack(int n, int w) {
    int dp[w + 1];
    memset(dp, 1000000, sizeof dp);
    dp[0] = 0;
    for(int i=0; i<n; i++) {
        for(int j=W[i]; j<=w; j++) {
            if(j - W[i] >= 0)
                dp[j] = min(dp[j], dp[j - W[i]] + 1);
        }
    }
    return dp[w];
}


int main (){
    int n;
    scanf("%d", &n);

    for(int tc = 1; tc <= n; tc++){
        int q;
        scanf("%d", &q);
        int sum = 0;

        int comp;
        scanf("%d", &comp);

        for(int i = 0; i < q; i++){
            scanf("%d", &W[i]);
        }

        printf("%d\n", unboundedKnapsack(q, comp));

    }


    return 0;
}
