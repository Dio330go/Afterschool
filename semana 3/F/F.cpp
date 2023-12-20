#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, K;;
    cin >> N >> K;

    vector<int> jardim;
    jardim.resize(N);
    for (int i = 0; i < N; i++){
        cin >> jardim[i];
    }

    long long int resultado = 0;

    if (N / K < 3){
        for (int elemento : jardim){
            resultado += elemento;
        }
    }else{
        for (int vezes = 0; vezes < 3; vezes++){
            long long int soma = 0;
            for (int i = 0; i < K; i++) {
                soma += jardim[i];
            }

            long long int soma_maxima = soma;
            int bound = 0;

            for (int i = K; i < jardim.size(); i++) {
                soma = soma - jardim[i - K] + jardim[i];
                if (soma > soma_maxima){
                    bound = i - K + 1;
                    soma_maxima = soma;
                }
            }

            for (int i = bound; i < jardim.size() - K; i++){
                jardim[i] = jardim[i + K];
            }
            for (int i = 0; i < K; i++){
                jardim.pop_back();
            }

            resultado += soma_maxima;
        }
    }
    cout << resultado;
    return 0;
}