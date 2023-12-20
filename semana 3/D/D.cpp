#include <iostream>
using namespace std;

int main(){
    int count = 0;
    bool bonus = false;
    string s;
    cin >> s;
    int tamanho = s.size();

    for (int i = 0; i < tamanho - 1; i++){
        if (s[i] == s[i+1]){
            if(s[i] == 'V' && s[i+2] != 'K'){
                s[i+1] = 'K';
                break;
            }else if(s[i] == 'K' && (i == 0 || s[i-1] == 'K')){
                s[i] = 'V';
                break;
            }
        }
            
    }

    for (int i = 0; i < tamanho - 1; i++){
        if(s[i] == 'V' && s[i+1] == 'K')
            count++;
    }   
    cout << count << endl;
    return 0;
}