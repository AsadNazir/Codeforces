#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b,c;

    cin>>a>>b>>c;

    if(c%2==0)
    {
        if(a>b) cout<<"First\n";
        else cout<<"Second\n";
    }
    else
    {
        if(a<b) cout<<"Second\n";
        else cout<<"First\n";
    }
}

int main()
{
    int t; cin>>t;

    while(t--) solve();
    
return 0;
}