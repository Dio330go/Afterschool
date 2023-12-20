#include <iostream>
using namespace std;

int main(){
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    if (b > c)
        swap(b, c);
    if (a > b){
        swap(a, b);
        if (b > c)
            swap(b, c);
    }

    int maximo = 0;
    for (int i = 0; i <= n / a; i++) {
        for (int j = 0; j <= (n - i * a) / b; j++) {
            int k = (n - i * a - j * b) / c;
            int remaining = n - i * a - j * b - k * c;
            if (remaining == 0) {
                maximo = max(maximo, i + j + k);
            }
        }
    }

    cout << maximo;
    return 0;
}