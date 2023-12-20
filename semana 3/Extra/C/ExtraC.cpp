#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    bool matrix_A[n][m];
    bool n_checked[n] = {0};
    bool m_checked[m] = {0};
    for (int i = 0; i < n; i++){
        n_checked[i] = 1;
    }
    for (int i = 0; i < m; i++){
        m_checked[i] = 1;
    }

    for (int y = 0; y < n; y++){
        for (int x = 0; x < m; x++){
            cin >> matrix_A[y][x];
            if (!matrix_A[y][x]){
                m_checked[x] = 0;
                n_checked[y] = 0;
            }
        }
    }

    
    for (int y = 0; y < n; y++){
        for (int x = 0; x < m; x++){
            if (matrix_A[y][x]){
                if (!m_checked[x] && !n_checked[y]){
                    cout << "NO";
                    return 0;
                }else if (m_checked[x] == 0 || n_checked[y] == 0){
                    matrix_A[y][x] = 0;
                }
            }
        }
    }

    bool m_possible = 0;
    bool n_possible = 0;
    for (int i = 0; i < n; i++){
        if (n_checked[i])
            n_possible = 1;
    }
    for (int i = 0; i < m; i++){
        if (m_checked[i])
            m_possible = 1;
    }

    if ((!m_possible || !n_possible) && !(m_possible == n_possible)){
        cout << "NO";
        return 0;
    }

    cout << "YES";
    for (int y = 0; y < n; y++){
        cout << endl;
        for (int x = 0; x < m; x++){
            cout << matrix_A[y][x] << " ";
        }
    }

    return 0;
}