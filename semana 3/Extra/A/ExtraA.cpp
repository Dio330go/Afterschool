#include <iostream>
using namespace std;

int main(){
   int t;
   cin >> t;

   for (int teste = 0; teste < t; teste++){
        int n;
        cin >> n;

        int abecedario[26] = {};

        for (int linha = 0; linha < n; linha++){
            string palavra;
            cin >> palavra;
            for (int i = 0; i < palavra.size(); i++){
                abecedario[palavra[i] - 'a'] += 1;
            }
        }
        
        string sim_nao = "YES";
        for(int i = 0; i < 26; i++){
            if (abecedario[i] % n != 0)
                sim_nao = "NO";
        }

        cout << sim_nao << endl;
    }    

    return 0;
}