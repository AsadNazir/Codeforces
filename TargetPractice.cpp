#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>

using namespace std;
void sol()
{
    vector<string> v(10);

    for (int i = 0; i < 10; i++)
    {
        cin >> v[i];
    }

    int n = v.size();
    int one, two, three, four, five;

    one = two = three = four = five = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (v[i][j] == 'X' || v[i][j] == 'x')
            {
                if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                    one++;

                else if (i == 1  || i == n - 2 || j == 1 || j == n - 2)
                    two++;

                else if (i == 2 || i == n - 3 || j == 2 || j == n - 3)
                    three++;

                else if (i == 3 || i == n - 4 || j == 3 || j == n - 4)
                    four++;

                else
                    five++;
            }
        }
    }

    int ans = one + two * 2 + three * 3 + four * 4 + five * 5;
    //cout<<one<<" "<<two<<" "<<three<<" "<<four<<" "<<five<<"\n";

    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
        sol();

    return 0;
}