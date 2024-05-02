#include <iostream>
#include <vector>

#define file_io                       \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout)
using namespace std;

void sol()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    if (n % 2 == 0)
    {
        cout << "2\n";
        cout << 1 << " " << n << endl;
        cout << 1 << " " << n << endl;
    }
    else
    {
        cout << "4" << endl;
        cout << 1 << " " << n - 1 << endl;
        cout << 1 << " " << n - 1 << endl;
        cout << n - 1 << " " << n << endl;
        cout << n - 1 << " " << n << endl;
    }
}

int main()
{

    file_io;
    int t;
    cin >> t;

    while (t--)
        sol();
}