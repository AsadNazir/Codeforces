#include <iostream>
using namespace std;

bool good(int n, int x, int y, int t)
{
    if (t < min(x, y))
    {
        return false;
    }
    int count = 1;

    t -= min(x, y);
    count += t / x + t / y;

    return count >= n;
}
void sol()
{
    int n, x, y;

    cin >> n >> x >> y;

    int l = 0, r = max(x, y) * n;
    while (l + 1 < r)
    {
        int mid = l + (r - l) / 2;
        if (good(n, x, y, mid))
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }

    cout << r << endl;
}
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    sol();

    return 0;
}