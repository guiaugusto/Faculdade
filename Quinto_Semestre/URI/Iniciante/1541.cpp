#include <bits/stdc++.h>

using namespace std;

int main (){

    int a, b, c;

    while(1){
        cin >> a;

        if(a == 0){
            break;
        }

        cin >> b;

        if(b == 0){
            break;
        }

        cin >> c;

        if(c == 0){
            break;
        }

        int x;

        x = (a*b)*100.0/c;
        x = sqrt(x*1.0);

        printf("%d\n", x);

    }

    return 0;
}