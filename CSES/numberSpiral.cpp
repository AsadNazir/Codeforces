#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

#define li long long int
using namespace std;

void sol()
{
    li x, y;
    cin >> x >> y;
    if (x < y)
    {
        if (y % 2 == 1)
        {
            li i = y * y;
            cout << i - x + 1 << endl;
        }
        else
        {
            li i = (y - 1) * (y - 1) + 1;
            cout << i + x - 1 << endl;
        }
    }
    else
    {
        if (x % 2 == 0)
        {
            li i = x * x;
            cout << i - y + 1 << endl;
        }
        else
        {
            li i = (x - 1) * (x - 1) + 1;
            cout << i + y - 1 << endl;
        }
    }
}

void Repetitions()
{
    string s;
    cin >> s;

    if (s.size() == 1)
    {
        cout << "1\n";
        return;
    }

    int g_max = INT_MIN;
    int l_max = 1;

    for (int i = 1; i < s.size(); i++)
    {

        if (s[i] == s[i - 1])
            l_max++;

        else
        {
            l_max = 1;
        }
        g_max = max(g_max, l_max);
    }

    cout << g_max << endl;
}

int ans = 0;
int n = 7;

void tarvel(int i, int j, int &steps, string s, vector<vector<int>> &vis)
{
    if (i == 6 && j == 0)
    {
        cout << steps << endl;
        if (steps == 48)
            ans++;

        return;
    }

    cout << i << " " << j << endl;

    // if (i == 6 && j == 0 && steps < 48)
    //     return;

    // if you hit a wall oi a path (can only go left oi right); return
    if (((i + 1 == n || (vis[i - 1][j] && vis[i + 1][j])) && j - 1 >= 0 && j + 1 < n && !vis[i][j - 1] && !vis[i][j + 1]) ||
        ((j + 1 == n || (vis[i][j - 1] && vis[i][j + 1])) && i - 1 >= 0 && i + 1 < n && !vis[i - 1][j] && !vis[i + 1][j]) ||
        ((i == 0 || (vis[i + 1][j] && vis[i - 1][j])) && j - 1 >= 0 && j + 1 < n && !vis[i][j - 1] && !vis[i][j + 1]) ||
        ((j == 0 || (vis[i][j + 1] && vis[i][j - 1])) && i - 1 >= 0 && i + 1 < n && !vis[i - 1][j] && !vis[i + 1][j]))
    {

        cout << "returning" << endl;

        return;
    }

    vis[i][j] = 1;

    if (s[steps] == '?')
    {
        if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
            return;

        if (i + 1 < n && !vis[i + 1][j])
        {
            steps++;
            tarvel(i + 1, j, steps, s, vis);
            steps--;
        }
        if (i - 1 >= 0 && !vis[i - 1][j])
        {
            steps++;
            tarvel(i - 1, j, steps, s, vis);
            steps--;
        }
        if (j + 1 < n && !vis[i][j + 1])

        {
            steps++;
            tarvel(i, j + 1, steps, s, vis);
            steps--;
        }
        if (j - 1 >= 0 && !vis[i][j - 1])
        {
            steps++;
            tarvel(i, j - 1, steps, s, vis);
            steps--;
        }
    }
    else if (s[steps] == 'U')
    {
        if (i == 0 || vis[i - 1][j])
            return;

        steps++;
        tarvel(i - 1, j, steps, s, vis);
        steps--;
    }
    else if (s[steps] == 'D')
    {
        if (i == n - 1 || vis[i + 1][j])
            return;

        steps++;
        tarvel(i + 1, j, steps, s, vis);
        steps--;
    }
    else if (s[steps] == 'L')
    {
        if (j == 0 || vis[i][j - 1])
            return;
        steps++;
        tarvel(i, j - 1, steps, s, vis);
        steps--;
    }
    else if (s[steps] == 'R')
    {
        if (j == n - 1 || vis[i][j + 1])
            return;

        steps++;
        tarvel(i, j + 1, steps, s, vis);
        steps--;
    }

    vis[i][j] = 0;
}

void GridPaths()
{
    string s;

    cin >> s;

    vector<vector<int>> dp(7, vector<int>(7, 0));
    int steps = 0;

    tarvel(0, 0, steps, s, dp);

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    GridPaths();

    return 0;
}

// #include <bits/stdc++.h>

// #define lli long long int
// #define li long int
// #define ld long double
// using namespace std;
// const lli mod = 1e9 + 7;
// const int n = 7;
// bool visited[n][n];
// int reserved[49];

// void move(int r, int c, int &ans, int &steps)
// {
//     if (r == n - 1 && c == 0)
//     {

//         if (steps == 48)
//             ans++;
//         return;
//     }

//     // cout<<r<<" "<<c<<endl;

//     // if you hit a wall or a path (can only go left or right); return
//     if (((r + 1 == n || (visited[r - 1][c] && visited[r + 1][c])) && c - 1 >= 0 && c + 1 < n && !visited[r][c - 1] && !visited[r][c + 1]) ||
//         ((c + 1 == n || (visited[r][c - 1] && visited[r][c + 1])) && r - 1 >= 0 && r + 1 < n && !visited[r - 1][c] && !visited[r + 1][c]) ||
//         ((r == 0 || (visited[r + 1][c] && visited[r - 1][c])) && c - 1 >= 0 && c + 1 < n && !visited[r][c - 1] && !visited[r][c + 1]) ||
//         ((c == 0 || (visited[r][c + 1] && visited[r][c - 1])) && r - 1 >= 0 && r + 1 < n && !visited[r - 1][c] && !visited[r + 1][c]))
//         return;

//     visited[r][c] = true;

//     if (reserved[steps] != -1)
//     {
//         switch (reserved[steps])
//         {
//         case 0:
//             if (r - 1 >= 0)
//             {
//                 if (!visited[r - 1][c])
//                 {
//                     steps++;
//                     move(r - 1, c, ans, steps);
//                     steps--;
//                 }
//             }
//             break;

//         case 1:
//             if (c + 1 < n)
//             {
//                 if (!visited[r][c + 1])
//                 {
//                     steps++;
//                     move(r, c + 1, ans, steps);
//                     steps--;
//                 }
//             }
//             break;

//         case 2:
//             if (r + 1 < n)
//             {
//                 if (!visited[r + 1][c])
//                 {
//                     steps++;
//                     move(r + 1, c, ans, steps);
//                     steps--;
//                 }
//             }
//             break;

//         case 3:
//             if (c - 1 >= 0)
//             {
//                 if (!visited[r][c - 1])
//                 {
//                     steps++;
//                     move(r, c - 1, ans, steps);
//                     steps--;
//                 }
//             }
//             break;
//         }
//         visited[r][c] = false;
//         return;
//     }

//     // move down
//     if (r + 1 < n)
//     {
//         if (!visited[r + 1][c])
//         {
//             steps++;
//             move(r + 1, c, ans, steps);
//             steps--;
//         }
//     }

//     // move right
//     if (c + 1 < n)
//     {
//         if (!visited[r][c + 1])
//         {
//             steps++;
//             move(r, c + 1, ans, steps);
//             steps--;
//         }
//     }

//     // move up
//     if (r - 1 >= 0)
//     {
//         if (!visited[r - 1][c])
//         {
//             steps++;
//             move(r - 1, c, ans, steps);
//             steps--;
//         }
//     }

//     // move left
//     if (c - 1 >= 0)
//     {
//         if (!visited[r][c - 1])
//         {
//             steps++;
//             move(r, c - 1, ans, steps);
//             steps--;
//         }
//     }
//     visited[r][c] = false;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     string path;
//     cin >> path;
//     for (int i = 0; i < path.length(); i++)
//     {
//         if (path[i] == '?')
//             reserved[i] = -1;
//         else if (path[i] == 'U')
//             reserved[i] = 0;
//         else if (path[i] == 'R')
//             reserved[i] = 1;
//         else if (path[i] == 'D')
//             reserved[i] = 2;
//         else if (path[i] == 'L')
//             reserved[i] = 3;
//     }
//     int ans = 0, steps = 0;
//     move(0, 0, ans, steps);
//     cout << ans;
//     return 0;
// }