#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    double F,C,d;
    while(scanf("%d",&T)==1)
    {
        for(int i=1;i<=T;i++){
        cin>>C>>d;
        F=(9*C)/5+32;
        F=F+d;
        C=(5*F-160)/9;
        cout<<"case "<<i<<":"<<fixed<<setprecision(2)<<C<<endl;
        }
    }
}
