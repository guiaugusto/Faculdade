#include <bits/stdc++.h>

using namespace std;

unsigned long long fat[1000001];

void fator(int n){
    if(n == 0){
        fat[n] = 0;
    }else if(n == 1){
        fat[n] = 1;
    }else if(n == 2){
        fat[n] = 2;
    }else{
        fat[n] = n * fat[n-1];
    }
}

int main (){

    int n;
    scanf("%d", &n);

    for(int i = 1; i < n+1; i++){
        fator(i);
    }

    printf("%llu\n", fat[n]);

    return 0;
}
