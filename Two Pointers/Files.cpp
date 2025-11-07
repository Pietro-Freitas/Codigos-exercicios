// https://neps.academy/exercise/64

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, b, folders = 0; 
    cin >> n >> b;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    int l=0, r = n -1;
    while(l <= r){
        if(l == r){
            folders++;
            break;
        }else{
            if(v[l] + v[r] <= b){
                r--; l ++;folders++;
            }else{
                folders++; r--;
            }
        }
    }
    cout << folders << '\n';

    return 0;
}
