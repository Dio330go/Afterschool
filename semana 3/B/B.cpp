#include <iostream>
using namespace std;

int main(){
    string sequencia;
    cin >> sequencia;
    if (sequencia[0] == '('){
        int aberto = 1, fechado = 0, tamanho = sequencia.size();
        for (int i = 1; i < tamanho; i++){
            if (sequencia[i] == '('){
                aberto++;
            }else{
                fechado++;
            }
        }
        if(aberto == fechado){
            cout << 1;
            return 0;
        }
    }
    cout << 0;
    return 0;
}