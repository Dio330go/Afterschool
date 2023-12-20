#include <iostream>
using namespace std;

int main(){
    short int A, L, C;
    cin >> A >> L >> C;
    
    if ((A*L*C >= 50) && (A >= 3))
    {
        cout << 1 << endl;
    }
    else{
        cout << 0 << endl;
    }
}