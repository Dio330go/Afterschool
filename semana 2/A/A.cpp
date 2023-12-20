#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K, numero;
    
    cin >> N >> K;

    for(int i = 0; i < N; i++){
        cin >> numero;
        
        if(numero >= K){
            cout << numero << " ";
        }
    }

    return 0;
}