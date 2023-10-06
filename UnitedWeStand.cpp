#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define endl "\n"




int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        vector<int> a_arr;

        cin>>a;

        for (int i = 0; i < a; i++)
        {
            int temp;
            cin>>temp;
            a_arr.push_back(temp);   
        }

        sort(a_arr.begin(), a_arr.end());


        //if arr has same number
        if(a_arr.back() == a_arr[0]){
           cout<<-1<<endl;
        }

        else{
            int it=0;

            while(a_arr[it]==a_arr[0]) it++;

            cout<<it<<" "<<a-it<<endl;
            for (int i = 0; i <it; i++)cout<<a_arr[i]<<" ";
            for (int i = it; i < a; i++)cout<<a_arr[i]<<" ";
           
        }
        
        

    }
    

    
return 0;
}