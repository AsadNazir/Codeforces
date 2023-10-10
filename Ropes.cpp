#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

#define ll long long
using namespace std;
vector<double> v;
int n, k;
bool good(double x)
{
    int sum = 0;
    for (auto i : v)
    {
        sum += floor(i / x);
    }

    return sum >= k;
}

int main()
{
    ios::sync_with_stdio(false);
    
    cin >> n >> k;

    double r = 1e8 /*Bad value*/, l = 0.0; // good value;

    for (int i = 0; i < n; i++)
    {
        double t;
        cin >> t;
        v.push_back(t);
    }

    for (int i = 0; i < 100; i++)
    {
        double mid = (l + r) / 2.0;

        if (good(mid))
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }

    cout << setprecision(20)<< l << "\n";
    return 0;
}