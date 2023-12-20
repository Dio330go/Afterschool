#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    for (int teste = 0; teste < t; teste++){
        int n, m, alteracoes = 0;
        cin >> n >> m;

        char letra;
        for (int y = 0; y < n - 1; y++){
            for (int x = 0; x < m; x++){
                cin >> letra;
            }
            if (letra == 'R')
                alteracoes++;
        }

        for (int x = 0; x < m - 1; x++){
            cin >> letra;
            if (letra == 'D')
                alteracoes++;
        }
        cin >> letra;

        cout << alteracoes << endl;
    }
    return 0;
}