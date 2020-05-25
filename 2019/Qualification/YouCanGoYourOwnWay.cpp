//https://codingcompetitions.withgoogle.com/codejam/round/0000000000051705/00000000000881da
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
        int n;
        string s;
        cin >> n >> s;
        cout << "Case #" << i << ": ";
        for (auto ch : s)
            if (ch == 'E')
                cout << 'S';
            else
                cout << 'E';
        cout << endl;
    }
}

int main()
{
    ios_b;
    solve();
    return 0;
}
