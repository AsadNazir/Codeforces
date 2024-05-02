// #include <iostream>
// #include <bits/stdc++.h>
// #define fastio                        \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);                    \
//     cout.tie(NULL);

// using namespace std;

// void solA()
// {
//     int n;
//     cin >> n;

//     if (n == 1)
//     {
//         cout << "First" << endl;
//         return;
//     }

//     else if ((n - 1) % 3 == 0 || (n + 1) % 3 == 0)
//     {
//         cout << "First" << endl;
//         return;
//     }

//     void solB()
//     {

//     }

//     else
//     {
//         cout << "Second" << endl;
//         return;
//     }
// }
// int main()
// {

//     fastio;
//     int t;
//     cin >> t;
//     while (t--)
//         // solA();
//         solB();
//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int max_alternating_sum(int n, vector<int> &arr)
{
    int g_max = INT_MIN;
    int sum = arr[0];

    for (int i = 1; i < n; ++i)
    {
        if (arr[i] % 2 == 0 && arr[i - 1] % 2 == 0)
        {
            g_max = max(g_max, sum);
            sum = arr[i];
        }
        else if (arr[i] % 2 != 0 && arr[i - 1] % 2 != 0)
        {
            g_max = max(g_max, sum);
            sum = arr[i];
        }
        // handle negative numbers
        else if (arr[i] < 0)
        {
            g_max = max(g_max, sum);
            sum += arr[i];
        }

        else if (sum<0 && arr[i]>0)
        {
            g_max = max(g_max, sum);
            sum = arr[i];
        }
        else
        {

            sum += arr[i];
        }
    }

    return max(g_max, sum);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        int result = max_alternating_sum(n, arr);
        cout << result << endl;
    }

    return 0;
}
