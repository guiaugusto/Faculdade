#include <bits/stdc++.h>
#define MAX_W 1000
#define MAX_V 1000
#define MAX_T 1000

using namespace std;

int memo[MAX_W][MAX_V];
bool taken[MAX_W][MAX_V];

int W[MAX_T];
int C[MAX_T];

int d;

int knapsack(int i, int w){

    if (i < 0 || w <= 0)
        return 0;

    if (memo[i][w] != -1)
        return memo[i][w];

    if(W[i]*3*d > w)
        return memo[i][w] = knapsack(i - 1, w);

    auto not_take = knapsack(i - 1, w);
    auto take = knapsack(i - 1, w - W[i]*3*d) + C[i];

    if(take > not_take){
        taken[i][w] = true;
        return memo[i][w] = take;
    }
    else return memo[i][w] = not_take;

}

void reconstruct(int i, int w){
    stack<int> itens;
    int size = 0;

    do{
        if(taken[i][w]){
            w -= W[i]*3*d;
            itens.push(i);
            size++;
        }
    }while(i--);

    printf("%d\n", size);

    while(!itens.empty()){
        printf("%d %d\n", W[itens.top()], C[itens.top()]);
        itens.pop();
    }
}

int main (){

    int total;
    int c = 0;

    while(scanf("%d %d", &total, &d) != EOF){

        if(c > 0)
            printf("\n");

        memset(memo, -1, sizeof memo);
        memset(taken, false, sizeof taken);

        int qt;
        scanf("%d", &qt);

        for(int i = 0; i < qt; i++){
            scanf("%d %d", &W[i], &C[i]);
        }

        printf("%d\n", knapsack(qt - 1, total));
        reconstruct(qt, total);

        c++;
    }

    return 0;
}
