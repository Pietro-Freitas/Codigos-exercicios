// https://neps.academy/exercise/236

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int mat[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> mat[i][j];
        }
    }
    int expected = 0;

    for(int i = 0; i < n; i++){
        int lineSum = 0;
        for(int j = 0; j < n; j++){
            lineSum += mat[i][j];
            if(i == 0)expected += mat[0][j];
        }
        if(lineSum != expected){
            cout << "-1\n";
            return 0;
        }
    }

    for(int i = 0; i < n; i++){
        int colSum = 0;
        for(int j = 0; j < n; j++){
            colSum += mat[j][i];
        }
        if(colSum != expected){
            cout << "-1\n";
            return 0;
        }
    }

    int diagSum = 0;
    for(int j = 0; j < n; j++){
        diagSum += mat[j][j];
    }
    if(diagSum != expected){
        cout << "-1\n";
        return 0;
    }

     int diag2 = 0;
    for(int i = 0; i < n; i++){
        diag2 += mat[i][n - 1 - i];
    }
    if(diag2 != expected){
        cout << -1 << '\n';
        return 0;
    }
    cout << expected << '\n';

    return 0;
}
