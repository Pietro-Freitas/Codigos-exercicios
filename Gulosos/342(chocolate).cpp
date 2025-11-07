// https://neps.academy/exercise/975

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int > chocolate(n);
    for(int i = 0; i < n; i++) cin >> chocolate[i];
    sort(chocolate.begin(), chocolate.end(), greater<>());

    long long soma=0;
    for(int i = 0; i < n; i++) if(i % 3 != 2) soma += chocolate[i];

    cout << soma << '\n';

    return 0;
}
