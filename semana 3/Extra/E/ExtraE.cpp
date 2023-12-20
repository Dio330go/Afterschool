#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    char bracket;
    int aberto = 0, fechado = 0;
    if (n % 2 != 0){
        cout << "No";
        return 0;
    }
    for (int i = 0; i < n; i++){
        cin >> bracket;
        if (bracket == '(')
            aberto++;
        else
            fechado++;
        if (fechado == aberto +2){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}