#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define str string
#define pb push_back
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll sum_a=0,sum_b=0,chck=0;
        priority_queue<ll,std::vector<ll>,greater<int>>a;
        priority_queue<ll>b;
        
        for(ll i=0;i<n;i++)
        {
            ll x;cin>>x;
            sum_a+=x;
            a.push(x);
        }
        for(ll i=0;i<m;i++)
        {
            ll x;cin>>x;
            sum_b+=x;
            b.push(x);
        }
        if(sum_a>sum_b){chck=1;cout<<"0";}
        else
        {
            for(ll i=0;i<n;i++)
            {
                ll x=a.top();
                ll y=b.top();
                sum_a-=x;sum_a+=y;
                sum_b-=y;sum_b+=x;
                a.pop();b.pop();
                a.push(y);b.push(x);
                if(sum_a>sum_b)
                {
                    chck=1;
                    cout<<i+1;break;
                }
            }
            if(chck==0){cout<<"-1";}
        }
        cout<<endl;
    }
}
