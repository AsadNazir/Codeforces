#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>

using namespace std;
void sol()
{
    int n;
    cin>>n;
    
    vector<int> v;

    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        v.push_back(t);
    }

    int min = 0;
    for (int  i = 0; i < v.size(); i++)
    {
        if(v[i]<v[min])
            min = i;
    }
    
    int product = 1;
    for (int i = 0; i < v.size(); i++)
    {
        if(i==min)
            product *= v[i]+1;
        else
            product *= v[i];
    }
    

    cout<<product<<"\n";


}

int main()
{
    int t;
    cin >> t;

    while (t--)
        sol();

    return 0;
}