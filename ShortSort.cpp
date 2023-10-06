#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>

using namespace std;
void sol()
{
    string s;
    cin >> s;

    int c = 0;

    if (s[0] != 'a')
        c++;
    if (s[1] != 'b')
        c++;
    if(s[2]!='c')
        c++;

    if (c <= 2)
    {
        cout << "YES\n";
    }

    else
    {
        cout << "NO\n";
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