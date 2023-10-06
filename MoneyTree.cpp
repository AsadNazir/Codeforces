#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>

using namespace std;
void sol()
{
    int n, k;

    cin >> n >> k;

    vector<int> v;
    vector<int> fruits;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        fruits.push_back(t);
    }

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        v.push_back(t);
    }

   int maxLength = 0;  
    int len=0;
    int f=0;

    for (int i = 0; i < n-1; ++i) {
       
       if(v[i]%v[i+1]==0)
       {
            f+=fruits[i];
            if(f>k)
            {
                f=0;
                maxLength = max(maxLength, len);
                len=0;  // Update the maximum length
                continue;
            }
            len++;
       }

        if(maxLength<len) 
        {
            maxLength = len;
            len=0;
        } // Update the maximum length
    }

    if(maxLength==0)
        cout<<maxLength<<endl;
    else
    cout<< maxLength+1<<endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
        sol();

    return 0;
}