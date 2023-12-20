#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    int maisAlto = 0, conseguemVer = 0, pessoa;
    for (int i = 0; i < N; i++){
        cin >> pessoa;
        if (pessoa > maisAlto){
            maisAlto = pessoa;
            conseguemVer++;
        }
    }
    cout << conseguemVer;
    return 0;
}