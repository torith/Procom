/**
 * @author torith
 * @date 2018-11-10
 */

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

    cin.tie(0);
    ios::sync_with_stdio(false);
    string def = "WBWBWWBWBWBW";
    string s; cin >> s;

    string ans;

    if (s == "WBWBWWBWBWBWWBWBWWBW") { // WBWBWWBWBWBW
        ans = "Do";
    }
    else if (s == "WBWWBWBWBWWBWBWWBWBW") {
        ans = "Re";
    }
    else if (s == "WWBWBWBWWBWBWWBWBWBW") {
        ans = "Mi";
    }
    else if (s == "WBWBWBWWBWBWWBWBWBWW") {
        ans = "Fa";
    }
    else if (s == "WBWBWWBWBWWBWBWBWWBW") {
        ans = "So";
    }
    else if (s == "WBWWBWBWWBWBWBWWBWBW") {
        ans = "La";
    }
    else if (s == "WWBWBWWBWBWBWWBWBWWB") {
        ans = "Si";
    }

    cout << ans << "\n";

    return 0;
}

