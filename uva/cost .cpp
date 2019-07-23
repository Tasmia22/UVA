#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    long long a,b,c,ans;
    while(scanf("%d",&T)==1)
    {
        for(int i=1; i<=T; i++)
        {
        cin>>a>>b>>c;
        if(a>b && a<c ||a>c&& a<b)
            ans=a;
         else if(b>a&& b<c ||b>c && b<a)
            ans=b;
   else
            ans=c;
        cout<<"case "<<i<<":"<<ans<<endl;
        }
    }
}
