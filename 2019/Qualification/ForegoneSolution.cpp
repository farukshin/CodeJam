//https://codingcompetitions.withgoogle.com/codejam/round/0000000000051705/0000000000088231
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

void solve()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        string s, s1 = "", s2 = "";
        cin >> s;
        bool fl = false;
        for (auto ch : s)
            if (ch == '4')
            {
                s1 += '3';
                s2 += '1';
                fl = true;
            }
            else
            {
                s1 += ch;
                s2 += (fl ? "0" : "");
            }
        cout << "Case #" << i << ": " << s1 << " " << (s2 == "" ? "0" : s2) << endl;
    }
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif
    solve();
    return 0;
}
