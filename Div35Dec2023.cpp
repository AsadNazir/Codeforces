
// Div 3 (5 Dec 2023 - Tuesday)

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <deque>
#include <string>
#include <cstring>
#include <iomanip>
#include <numeric>

#define li long long int
#define fileio                        \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
// void rook_moves(int t, vector<pair<char, char>> &test_cases) {
//     for (int i = 0; i < t; ++i) {
//         char col = test_cases[i].first;
//         char row = test_cases[i].second;

//         // Output all possible horizontal moves
//         for (char c = 'a'; c <= 'h'; ++c) {
//             if (c != col) {
//                 cout << c << row << endl;
//             }
//         }

//         // Output all possible vertical moves
//         for (char r = '1'; r <= '8'; ++r) {
//             if (r != row) {
//                 cout << col << r << endl;
//             }
//         }
//     }
// }

// int main() {

//     fastio;
//     //fileio;
//     int t;
//     cin >> t;

//     vector<pair<char, char>> test_cases(t);

//     for (int i = 0; i < t; ++i) {
//         cin >> test_cases[i].first >> test_cases[i].second;
//     }

//     // Output rook moves
//     rook_moves(t, test_cases);

//     return 0;
// }

void YetAnotherBrokenKeyboard()
{
    string s;
    cin >> s;

    string ans;
    string uppercase, lowercase;

    vector<pair<char, int>> cap, small, res;

    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
        {
            if (s[i] == 'B' && !cap.empty())
                cap.pop_back();
            else if(s[i]!='B')
                cap.emplace_back(make_pair(s[i], i));
        }
        else
        {
            if (s[i] == 'b' && !small.empty())
                small.pop_back();
            else if(s[i]!='b')
                small.emplace_back(make_pair(s[i], i));
        }

//        cout << i << " " << s[i] << endl;
    }

    for (auto i : cap)
    {
        res.push_back(i);
    }

    for (auto i : small)
    {
        res.push_back(i);
    }

    sort(res.begin(), res.end(), [](const auto &a, const auto &b)
         { return a.second < b.second; });

    for (auto i : res)
    {
        cout << i.first;
    }
    cout << "\n";
}

int main()
{
    fastio;
    //fileio;
    int t;
    cin >> t;

    while (t--)
    {
        YetAnotherBrokenKeyboard();
    }

    return 0;
}
// int minimumLengthAfterDeletion(string &s)
// {
//     stack<char> st;

//     for (char c : s)
//     {
//         if (!st.empty() && st.top() == c)
//         {
//             // If the current character is the same as the top of the stack, pop it
//             st.pop();
//         }
//         else
//         {
//             // Otherwise, push the current character onto the stack
//             st.push(c);
//         }
//     }

//     // The length of the stack is the minimum length after deletion
//     return st.size();
// }

// int main()
// {
//     fastio;
//     fileio;
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;

//         string s;
//         cin >> s;

//         int result = minimumLengthAfterDeletion(s);
//         cout << result << endl;
//     }

//     return 0;
// }