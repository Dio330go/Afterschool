#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    long long int a = 0;

    int num, tamanhoStr = s.length();
    for (int i = 0; i < tamanhoStr; i++){
        num = s[i] - '0';
        if (num % 4 == 0){
            a++;
        }
        if(i-1 >= 0){
            num += (s[i-1] - '0')*10;
            if (num % 4 == 0){
                a += i;
            }
        }
    }
    
    cout << a;
    return 0;
}