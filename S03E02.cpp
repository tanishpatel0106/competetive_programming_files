#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define pii pair<int, int>
#define f first
#define s second

#define vi vector<int>
#define all(x) x.begin(), x.end()
#define size(x) (int)((x).size())
#define pb push_back
#define ins insert
#define cls clear

#define ll long long
#define ld long double

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

void solve() {
    int n, kConst;
    cin >> n >> kConst;
    string b;
    cin >> b;
    if (kConst == 0) {
        set<char> se;
        for (char i : b) se.ins(i);
        if (size(se) >= 2) cout << -1;
        else cout << n;
        cout << '\n';
        return;
    }
    int res = 0;
    for (char i = 'A'; i <= 'Z'; i++) {
        vi ac;
        for (char j : b) {
            if (j != i) {
                if (ac.empty() || ac.back() != -1) {
                    ac.pb(-1);
                }
            }
            else {
                if (ac.empty() || ac.back() == -1) ac.pb(0);
                ac.back()++;
            }
        }
        if (size(ac) == 1) {
            if (ac[0] == -1) continue;
            else {
                res = n;
                break;
            }
        }
        int lres = 0;
        if (ac.back() != -1) {
            lres += ac.back();
            ac.pop_back();
        }
        if (ac.front() != -1) {
            lres += ac[0];
            ac.erase(ac.begin());
        }
        int undo = -kConst;
        vi sorted;
        for (int j : ac) {
            if (j == -1) {
                undo++;
            }
            else {
                sorted.pb(j);
            }
        }
        for (int j : sorted) {
            lres += j;
        }
        sort(all(sorted));
        for (int j = 0; j < undo; j++) {
            lres -= sorted[j];
        }
        res = max(res, lres);
    }
    cout << res;
    cout << '\n';
}

signed main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    while (n--) solve();

    cout.flush();
    int d = 0;
    d++;
}