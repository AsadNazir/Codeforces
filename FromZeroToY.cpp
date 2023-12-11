#include "iostream"
#include "fstream"

using namespace std;

int sumOfDigits(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void sol()
{
    int x, y;

    cin >> x >> y;

    int a = y / x;
    int b = y % x;

    // cout << a << " " << b << " " << a * x + b << endl;
    cout << sumOfDigits(a) + b << endl;
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