/**
 * @author torith
 * @date 2018-10-24
 */

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

    cin.tie(0);
    ios::sync_with_stdio(false);
    int N; cin >> N;
    map<int,int> A;
    for (int i = 0; i < N; ++i) {
        int t;
        cin >> t;
        A[t] = (A[t] + 1)%2;
    }

    int ans = 0;
    for (auto& a: A){
        if (a.second == 1) ans ++;
    }

    cout << ans << "\n";
    return 0;
}

