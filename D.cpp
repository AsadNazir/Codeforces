#include <iostream>
#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;
void countPrimeDivisors(int x, map<int, int> &divs)
{
    int i = 2;
    while(i * i <= x){
        while (x % i == 0){
            divs[i]++;
            x /= i;
        }
        i++;
    }
    if(x > 1) divs[x]++;

}


void sol()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        countPrimeDivisors(v[i], mp);
    }

    for(auto i:mp)
    {
        if(i.second%n!=0)
        {
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;

    
}
int main()
{

    fastio;
    int t; cin>>t;
    while(t--)
        sol();
return 0;
}