#include <bits/stdc++.h>
#define MAX 20000

using namespace std;

class Block{
    public:
        int l;
        int m;
};

bool operator< (Block blockA, Block blockB){
    if(blockA.l == blockB.l){
        if(blockA.m == blockB.m){
            return false;
        }else{
            if(blockA.m < blockB.m)
                return true;
            else
                return false;
        }
    }else{
        if(blockA.l < blockB.l)
            return true;
        else
            return false;
    }
}

vector<Block> sequence;

int lis_n[MAX];

int lis(int N){

    int max_lis = 0;

    for(int i = 0; i < N; ++i){
        lis_n[i] = 0;

        for(int j = i; j >= 0; --j)
            if(sequence[j].l <= sequence[i].l && sequence[j].m <= sequence[i].m)
                lis_n[i] = max(lis_n[i], lis_n[j] + 1);

        max_lis = max(max_lis, lis_n[i]);

    }

    return max_lis;
}

int main(){

    int v;

    while(scanf("%d", &v), v != 0){

        Block a;

        for(int i = 0; i < v; i++){
            scanf("%d %d", &a.l, &a.m);
            sequence.push_back(a);
        }

        sort(sequence.begin(), sequence.end());

        //printf("\n");

        //for(int i = 0; i < v; i++){
        //    printf("%d %d\n", sequence[i].l, sequence[i].m);
        //}

        printf("%d\n", lis(v));

        sequence.clear();
    }

    printf("*\n");

    return 0;
}
