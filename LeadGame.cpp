#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rounds;
    cin>>rounds;
    int lead1 =0,lead2 =0,k;
    int a,b,ans=0,sum1 =0,sum2 =0;
    while(rounds--){
        cin>>a>>b;
        sum1+=a;
        sum2+=b;
        if(sum1 > sum2)
            lead1 = sum1 - sum2;
        if(sum1 < sum2)
            lead2 = sum2 - sum1;
        if (lead1 > ans)
        {
            ans = lead1;
            k = 1;
        }
        else if(lead2 > ans){
            ans = lead2;
            k = 2;
        }
        
    }
    cout<<k<<" "<<ans;
    return 0;
}
