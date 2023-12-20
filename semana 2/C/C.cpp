#include <iostream>
using namespace std;

long long int memo [60] = {};

long long int guimaracci(int N){
    if (N == 1){
        return 1;
    }else if (N == 2){
        return 3;
    }else if (memo[N-1]){
        return memo[N-1];
    }else{
        long long int result = guimaracci(N-1) + guimaracci(N-2);
        memo[N-1] = result;
        return result;
    }
}

int main(){
    int N;   
    cin >> N;
    cout << guimaracci(N);

    return 0;
}