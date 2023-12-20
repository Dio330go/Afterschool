#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){
    short int a, b, c;
    cin >> a >> b >> c;

    int cateto1 = min({a, b, c});
    int cateto2 = min({max(a, b), max(a, c), max(b, c)});
    int ladoMaior = max({a, b, c});

    double hipotenusa = pow((pow(cateto1, 2) + pow(cateto2, 2)), 0.5);

if (hipotenusa == ladoMaior){
    cout << "Retangulo";
}else if(hipotenusa > ladoMaior){
    cout << "Agudo";
}else{
    cout << "Obtuso";
}

    return 0;
}