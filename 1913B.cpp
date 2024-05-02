#include <iostream>
#include <cmath>
#include <vector>
#include <stack>
#include <map>
#include <set>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define fileio                        \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

using namespace std;

void sol()
{
    string s;
    cin >> s;

    map<char, int> mp;

    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }

    if (mp.size() == 1)
    {
        cout << s.size() << endl;
        return;
    }

    if (mp['0'] == mp['1'])
    {
        cout << 0 << endl;
        return;
    }

    string t;

    for (int i = 0; i < s.size(); i++)
    {
        if (mp['1'] && s[i] == '0')
        {
            mp['1']--;
            t.push_back('1');
        }
        else if (mp['0'] && s[i] == '1')
        {
            mp['0']--;
            t.push_back('0');
        }
        else
            break;
    }

    cout << s.size() - t.size() << endl;
}
int main()
{

    fastio;
    // fileio;
    int t;
    cin >> t;
    while (t--)
        sol();
}
