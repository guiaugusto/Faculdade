#include <bits/stdc++.h>
#define MAX 10000

using namespace std;

class Medidas{
    public:
        int x;
        int y;
        int z;
};

vector<Medidas> sequence;

int lis_n[MAX];

bool operator< (Medidas medidasA, Medidas medidasB){
    if(medidasA.x == medidasB.x){
        if(medidasA.y == medidasB.y){
            if(medidasA.z == medidasB.z){
                return false;
            }else{
                if(medidasA.z < medidasB.z)
                    return true;
                else
                    return false;
            }
        }else{
            if(medidasA.y < medidasB.y)
                return true;
            else
                return false;
        }
    }else{
        if(medidasA.x < medidasB.x)
            return true;
        else
            return false;
    }
}

int lis(int N){

    int max_lis = 0;

    for(int i = 0; i < N; ++i){
        int lis_size = 0;

        lis_n[i] = sequence[i].z;

        for(int j = i; j >= 0; --j){
            if(sequence[j].x < sequence[i].x && sequence[j].y < sequence[i].y){
                lis_n[i] = max(lis_n[i], lis_n[j] + sequence[i].z);
            }
        }

        max_lis = max(max_lis, lis_n[i]);

    }

    return max_lis;
}

int main (){

    int q;
    int c = 0;

    while(scanf("%d", &q), q > 0){
        int x, y, z;
        vector<Medidas> value(6);
        c++;

        for(int i = 0; i < q; i++){
            scanf("%d %d %d", &x, &y, &z);


            value[5].x = x;
            value[5].y = y;
            value[5].z = z;

            value[4].x = x;
            value[4].y = z;
            value[4].z = y;

            value[3].x = y;
            value[3].y = x;
            value[3].z = z;

            value[2].x = y;
            value[2].y = z;
            value[2].z = x;

            value[1].x = z;
            value[1].y = y;
            value[1].z = x;

            value[0].x = z;
            value[0].y = x;
            value[0].z = y;

            for(int j = 5; j >= 0; j--){
                sequence.push_back(value[j]);
            }

            value.clear();

        }

        sort(sequence.begin(), sequence.end());

        printf("Case %d: maximum height = %d\n", c, lis(q*6));

        sequence.clear();

    }

    return 0;
}
