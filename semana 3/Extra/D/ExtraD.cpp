#include <iostream>
using namespace std;

int main(){
    while (true){
    int n;
    cin >> n;

    int setes = n / 28 * 4;
    n %= 28;
    int quatros = n / 4;
    n %= 4;

    int q = quatros;
    for (int i = 0; i < q && n != 0; i++){
        n += 4;
        quatros--;
        if (n >= 7){
            n -= 7;
            setes++;
        }
    }

    if (n != 0)
        cout << -1;
    else{
        for (int i = 0; i < quatros; i++){
            cout << 4;
        }
        for (int i = 0; i < setes; i++){
            cout << 7;
        }
    }
    cout << endl;
}
    return 0;
}