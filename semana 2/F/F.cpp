#include <iostream>
using namespace std;

int main(){
    int N, Q;
    cin >> N >> Q;

    int campos[N], campo;
    for (int i = 0; i < N; i++){
        cin >> campo;
        campos[i] = campo;
    }

    int tipoPergunta, x, fy;
    for (int i = 0; i < Q; i++){
        cin >> tipoPergunta >> x >> fy;
        if (tipoPergunta == 1){
            campos[x-1] = fy;
        }else{
            int soma = 0;
            for (int a = x - 1; a < fy; a++){
                soma += campos[a];
            }
            cout << soma << endl;
        }
    }
    return 0;
}