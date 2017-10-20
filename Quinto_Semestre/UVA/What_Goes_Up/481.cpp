#include <bits/stdc++.h>
#define MAX 6000

using namespace std;

vector<long long int> sequence;
vector<long long int> lis_seq;
vector<long long int> lis_seq_i;

vector<long long int> lis_parents;

long long int lis_max_i = -1;


int lis(int N){

    long long int lis_size = 0;

    for(int i = 0; i < N; ++i){

        long long int p = lower_bound(lis_seq.begin(), lis_seq.end(), sequence[i]) - lis_seq.begin();

        if(p == lis_seq.size()){
            lis_seq.push_back(sequence[i]);
            lis_seq_i.push_back(i);
        }
        else{
            lis_seq[p] = sequence[i];
            lis_seq_i[p] = i;
        }

        lis_parents.push_back((p? lis_seq_i[p-1] : -1));

        if(p + 1 >= lis_size){
            lis_size = p + 1;
            lis_max_i = i;
        }
    }

    return lis_size;
}

void reconstruct(){

    stack<long long int> s;
    for(int i = lis_max_i; i != -1; i = lis_parents[i])
        s.push(sequence[i]);

    printf("%lld\n", s.top());
    while(s.pop(), !s.empty())
        printf("%lld\n", s.top());
}

int main (){

    long long int n;
    int cont = 0;

    while(scanf("%lld", &n) != EOF){
        sequence.push_back(n);
        cont++;
    }

    printf("%d\n", lis(cont));
    printf("-\n");

    reconstruct();

    return 0;
}
