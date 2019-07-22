/********************
=====================
**Code By-hardikdua**
=====================
*********************/
#include<bits/stdc++.h>
#define inf 9999999999999999
#define speed(); ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long int ll;
int n;
string s;
int main()
{
	speed();
	cin>>s;
    n=s.size();
    int k=(n/2);
    string l="";
    int i;
    for(i=0;i+1<k;i+=2)
    {
        char x=s[n-i-1];
        char y=s[n-i-2];
        if(s[i]==x)
            l+=x;
        else if(s[i+1]==x)
            l+=x;
        else if(s[i]==y)
            l+=y;
        else if(s[i+1]==y)
            l+=y;
    }
    string ans=l;
    if (i<k)
        ans+=s[i];
    reverse(l.begin(),l.end());
    ans+=l;
    cout<<ans;
    return 0;
}
