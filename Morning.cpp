#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void sol()
{
    string s;

    cin >> s;

    map<int, int> m;

    m[0] = 10;
    for (int i = 1; i < 10; i++)
    {
        m[i] = i;
    }

    int ans=0;

    ans += m[s[0]-'0'] -m[1];

    for(int i=0;i<s.length()-1;i++)
    {
        ans += abs((m[s[i]-'0'])-(m[s[i+1]-'0']))+1;
    }

    cout<<ans+1<<endl;

}
int main()
{
    int t;
    cin >> t;

    while (t--)
        sol();
    return 0;
}