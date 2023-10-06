#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>

#define ll long long

using namespace std;
#include <iostream>

void sol()
{
    ll n, k, x;
    cin >> n >> k >> x;
    ll min = 0;
    ll max = 0;

    ll suml = k * (k + 1) / 2;

    ll ts= n * (n + 1) / 2;
    ll tmp = (n - k) * (n - k + 1) / 2;
    ll sumr = ts-tmp;


   // cout<<suml<<" "<<sumr<<endl;



    // for (ll i = n; i > n-k; i--)
    //     max += i;


    // for (ll i = 1; i <= k; i++)
    //     min += i;

    // cout << max << endl;
    // cout << min << endl;

    if (x >= suml && x <= sumr)
        cout << "YES\n";

    else
        cout << "NO\n";

    return;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
        sol();

    return 0;
}