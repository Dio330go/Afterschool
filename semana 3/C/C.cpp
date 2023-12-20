#include <iostream>
#include <queue>
using namespace std;

int main(){
    int T, n, num, i, j, pI, pJ;
    bool isPossible;;
    queue<int> permuta;
    cin >> T;
    
    for(int z = 0; z < T; z++){
        permuta = {};
        cin >> n;
        for(int a = 0; a < n; a++){
            cin >> num;
            permuta.push(num);
        }
        i = 0, j = 0, pI = 1, pJ = 1, isPossible = false;

        i = permuta.front();
        permuta.pop();

        while (!permuta.empty())
        {
            if(permuta.front() < j){
                isPossible = true;
                break;
            }else if(permuta.front() < i){
                i = permuta.front();
                pI++;
            }else
                j = permuta.front();
            pJ++;
            permuta.pop();
        }
        
        if(isPossible)
            cout << "YES\n" << pI << " " << pJ << " " << pJ + 1 << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}