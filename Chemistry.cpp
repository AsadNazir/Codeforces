#include <iostream>
#include <vector>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <fstream>
#include <unordered_map>
#include <map>
#include <set>
#include <climits>
#include <unordered_set>
#include <stack>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;


bool palindrome(string s)
{
    int n = s.length();
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            return false;
        }
    }
    return true;
}

bool canFormPalindrome(string s, int k)
{
    // Step 1: Count character frequencies
    unordered_map<char, int> charFreq;
    for (char c : s)
    {
        charFreq[c]++;
    }

    // Step 2: Count the number of characters with odd frequencies
    int oddFreqCount = 0;
    for (const auto &entry : charFreq)
    {
        if (entry.second % 2 != 0)
        {
            oddFreqCount++;
        }
    }

    // Step 3: Check if it's possible to form a palindrome
    if (oddFreqCount > k+1)
    {
        return false;
    }

    return true;
}

void sol()
{
    int n, k;

    cin >> n >> k;
    string s;

    cin >> s;

    if(n == 1)
    {
        cout << "YES" << endl;
        return;
    }

    // if(k==0)
    // {
    //     if(palindrome(s))
    //     {
    //         cout << "YES" << endl;
    //     }
    //     else
    //     {
    //         cout << "NO" << endl;
    //     }
    //     return;
    // }

    if (canFormPalindrome(s, k))
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
    int t;
    cin >> t;
    while (t--)
        sol();
    return 0;
}