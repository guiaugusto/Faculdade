#include <bits/stdc++.h>
#define MAX_W 1000
#define MAX_V 1000

using namespace std;

int memo[MAX_V][MAX_W];
vector<int> W;
vector<int> V;

int knapsack(int i, int w){

    if(i < 0 || w <= 0)
        return 0;

    if(memo[i][w] != -1)
        return memo[i][w];

    if(W[i] > w)
        return memo[i][w] = knapsack(i - 1, w);

    return memo[i][w] = max(knapsack(i - 1, w),
                            knapsack(i - 1, w - W[i]) + V[i]);

}

int main (){

    int q;
    char c;
    int v;
    int sum;

    scanf("%d", &q);
    getchar();

    while(q--){
        memset(memo, -1, sizeof memo);

        sum = 0;

        while(scanf("%d%c", &v, &c)){
            W.push_back(v);
            V.push_back(v);
            sum += v;

            if(c == '\n')
                break;

        }

        int value = sum - knapsack((int) W.size() - 1, sum/2)*2;

        if(value == 0)
            printf("YES\n");
        else
            printf("NO\n");

        W.clear();
        V.clear();

    }

    return 0;
}
