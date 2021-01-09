#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,d;
        cin>>n>>k>>d;
        ll a[n],sum=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if((sum/k)<=d){cout<<sum/k<<endl;}
        else{cout<<d<<endl;}
    }
}
