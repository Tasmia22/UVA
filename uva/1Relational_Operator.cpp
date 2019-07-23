#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,a,b;
    while(scanf("%d",&t)==1)
    {
        for(i=0;i<t;i++)
        {
            cin>>a>>b;
            if(a<b)
                cout<<"<"<<endl;
            else if(a>b)
                cout<<">"<<endl;
            else
                cout<<"="<<endl;
        }
    }
}
