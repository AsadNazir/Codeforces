#include <iostream>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    long long ans = 0;
    int i=0;
    
    while(i<s.size())
    {
        if (s[i] == 'B')
        {
            ans ++;
            i += k;
        }
        else i++;
    }

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
        solve();
    return 0;
}