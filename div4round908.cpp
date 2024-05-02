#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <stack>
#include <algorithm>
#include <unordered_map>
#define ll long long

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define file_io                       \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout)

using namespace std;

string ans;
void recursion(vector<string> &v, int x, int y, vector<vector<bool>> &visited)
{
    // Lexicographically smallest string ABC BCA CCC

    if (x < 0 || y < 0 || x >= v.size() || y >= v[0].size() || visited[x][y] == true)
    {
        return;
    }
    if (ans.size() == 3)
    {
        cout << ans << endl;
        return;
    }
    visited[x][y] = true;

    int moves[8][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}, {1, 1}, {-1, -1}, {-1, 1}, {1, -1}}; // 8 directions

    for (int i = 0; i < 8; i++)
    {
        int x1 = x + moves[i][0];
        int y1 = y + moves[i][1];

        if (v[x1][y1] >= v[x][y])
        {

            ans.push_back(v[x1][y1]);
            recursion(v, x1, y1, visited);
            ans.pop_back();
        }
    }
    visited[x][y] = false;
}

void solA()
{
    map<int, int> mp;
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    mp[n1]++;
    mp[n2]++;
    mp[n3]++;

    for (auto i : mp)
    {
        if (i.second == 1)
        {
            cout << i.first << endl;
            return;
        }
    }
}
void solC()
{
    ll n;
    cin >> n;
    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        ll tmp;
        cin >> tmp;
        ans += tmp;
    }

    if (ceil(sqrt(ans)) == floor(sqrt(ans)))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

void solB()
{
    // Latin Square
    vector<string> v(3);

    for (auto &i : v)
    {
        cin >> i;
    }

    for (int i = 0; i < 3; i++)
    {
        set<char> s;
        for (int j = 0; j < 3; j++)
        {
            s.insert(v[i][j]);
        }

        if (s.find('A') == s.end())
        {
            cout << "A" << endl;
        }
        else if (s.find('B') == s.end())
        {
            cout << "B" << endl;
        }
        else if (s.find('C') == s.end())
        {
            cout << "C" << endl;
        }

        s.clear();
    }
}

bool isVowel(char a)
{
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
    {
        return true;
    }
    return false;
}

void solD()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    string tmp = "";
    string ans = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (isVowel(s[i]))
        {

            ans.push_back(s[i]);
            int j = i + 1;
            if (j == s.size() - 1)
            {
            }
            else if (j + 1 <= s.size() - 1)
            {
                if (!isVowel(s[j]) && !isVowel(s[j + 1]))
                {
                    ans.push_back(s[j]);
                    ans.push_back('.');
                    i = j;
                }
                else
                {
                    ans.push_back('.');
                }
            }
            else
            {
                ans.push_back(s[i]);
            }
        }
    }

    cout << ans << endl;
}

bool isConsonant(char ch)
{
    return ch == 'b' || ch == 'c' || ch == 'd';
}

bool canEqualize(const std::vector<ll> &glasses)
{
    int n = glasses.size();

    // Initialize prefix sums for odd and even indices
    long long prefixSumOdd = 0;
    long long prefixSumEven = 0;

    // Map to store the last index where a prefix sum was seen
    std::unordered_map<long long, int> prefixSumIndex;

    // Initialize the map with the prefix sum 0 at index -1
    prefixSumIndex[0] = -1;

    for (int i = 0; i < n; ++i)
    {
        if (i % 2 == 0)
        {
            prefixSumOdd += glasses[i];
        }
        else
        {
            prefixSumEven += glasses[i];
        }

        long long diff = prefixSumOdd - prefixSumEven;

        // If the same difference was seen before, and the subarray length is greater than 1
        if (prefixSumIndex.find(diff) != prefixSumIndex.end() && i - prefixSumIndex[diff] > 1)
        {
            return true;
        }

        // Update the last index for the current difference
        prefixSumIndex[diff] = i;
    }

    return false;
}

void solE()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }

    if (canEqualize(v))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    //file_io;
     fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans = "";

        for (int i = 0; i < n; i++)
        {
            int count = 0;
            while (count++ < 2 && i < n)
            {
                ans.push_back(s[i++]);
            }

            if (i < n - 1 && (s[i] >= 'a' && s[i] <= 'e') && (s[i + 1] >= 'a' && s[i + 1] <= 'e'))
            {
                ans.push_back(s[i++]);
            }
            ans.push_back('.');
        }

        if (ans.back() == '.')
        {
            ans.pop_back();
        }
        cout << ans << endl;
    }
    return 0;
}
