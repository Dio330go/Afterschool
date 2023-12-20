#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, aluno, forcaA = 0, forcaB = 0;    
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> aluno;

        if(i % 2 == 0){
            forcaA += aluno;
        }else{
            forcaB += aluno;
        }
    }

    if(forcaA > forcaB){
        cout << "A";
    }else if(forcaA < forcaB){
        cout << "B";
    }else{
        cout << "E";
    }

    return 0;
}