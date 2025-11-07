// https://neps.academy/exercise/244

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> S={1,5,10,25,50,100};
    int coin =0;
    for(int i = 5; i >= 0; i--){
        while(n >= S[i]){
            n -= S[i];
            coin++;
        }
    }
    cout << coin << '\n';

    return 0;
}
