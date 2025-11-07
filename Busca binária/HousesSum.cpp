//https://neps.academy/exercise/255

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> casas(n);
    for (int i = 0; i < n; i++) cin >> casas[i];
    long long k;
    cin >> k;
    for (int i = 0; i < n; i++) {
        long long alvo = k - casas[i];
        int l = i + 1, r = n - 1;
        while (l <= r) {
            int m = (l + r) / 2;
            if (casas[m] == alvo) {
                cout << casas[i] << " " << casas[m] << '\n';
                return 0;
            }
            if (casas[m] < alvo) l = mid + 1;
            else r = m - 1;
        }
    }

    return 0;
}
