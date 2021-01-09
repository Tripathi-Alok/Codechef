#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        //ll a[16]={0000,0001,0010,0011,0100,0101,0110,0111,1000,1001,1010,1011,1100,1101,1110,1111};
        for(ll i=0;i<s.length();i+=4)
        {
            if(s[i]=='0'&&s[i+1]=='0'&&s[i+2]=='0'&&s[i+3]=='0'){cout<<'a';}
            else if(s[i]=='0'&&s[i+1]=='0'&&s[i+2]=='0'&&s[i+3]=='1'){cout<<'b';}
            else if(s[i]=='0'&&s[i+1]=='0'&&s[i+2]=='1'&&s[i+3]=='0'){cout<<'c';}
            else if(s[i]=='0'&&s[i+1]=='0'&&s[i+2]=='1'&&s[i+3]=='1'){cout<<'d';}
            else if(s[i]=='0'&&s[i+1]=='1'&&s[i+2]=='0'&&s[i+3]=='0'){cout<<'e';}
            else if(s[i]=='0'&&s[i+1]=='1'&&s[i+2]=='0'&&s[i+3]=='1'){cout<<'f';}
            else if(s[i]=='0'&&s[i+1]=='1'&&s[i+2]=='1'&&s[i+3]=='0'){cout<<'g';}
            else if(s[i]=='0'&&s[i+1]=='1'&&s[i+2]=='1'&&s[i+3]=='1'){cout<<'h';}
            else if(s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='0'&&s[i+3]=='0'){cout<<'i';}
            else if(s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='0'&&s[i+3]=='1'){cout<<'j';}
            else if(s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='1'&&s[i+3]=='0'){cout<<'k';}
            else if(s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='1'&&s[i+3]=='1'){cout<<'l';}
            else if(s[i]=='1'&&s[i+1]=='1'&&s[i+2]=='0'&&s[i+3]=='0'){cout<<'m';}
            else if(s[i]=='1'&&s[i+1]=='1'&&s[i+2]=='0'&&s[i+3]=='1'){cout<<'n';}
            else if(s[i]=='1'&&s[i+1]=='1'&&s[i+2]=='1'&&s[i+3]=='0'){cout<<'o';}
            else if(s[i]=='1'&&s[i+1]=='1'&&s[i+2]=='1'&&s[i+3]=='1'){cout<<'p';}
        }
        cout<<endl;
    }
}
