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
#define N 2000005
#define M 1000000007
long long a[N];



long long sumOfDigits(long long n)
{
    long long sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

void sol()
{
    long long n;
    cin >> n;
    int k;
    cin>>k;
    

    while(true)
    {
        if(sumOfDigits(n) % k == 0)
        {
            cout << n << endl;
            return;
        }
        n++;
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