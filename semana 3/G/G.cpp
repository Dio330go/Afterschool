#include <iostream>
#include <queue>
using namespace std;

int main(){
    int t;
    cin >> t;

    for (int caso = 0; caso < t; caso++){
        int n, m;
        cin >> n >> m;
        
        int num;
        queue<int> cabecas;
        for (int i = 0; i < n; i++){
            cin >> num;
            cabecas.push(num);
        }

        int moedas = 0;
        for (int i = 0; i < m; i++){
            cin >> num;
            if (!cabecas.empty() && num >= cabecas.front()){
                cabecas.pop();
                moedas += num;
            }
        }
        if (!cabecas.empty())
            moedas = -1;

        cout << moedas << endl;
    }

    return 0;
}