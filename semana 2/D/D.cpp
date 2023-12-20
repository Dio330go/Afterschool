#include <iostream>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;

    char sinal;
    int espaço;
    for (int y = 0; y < N; y++){
        espaço = 0;
        for (int x = 0; x < N; x++){
            cin >> sinal;
            if (sinal == '.'){
                espaço++;
                if (espaço == K){
                    cout << 1;
                    return 0;
                }
            }else{
                espaço = 0;
            }
        }
    }
    cout << 0;
    return 0;
}