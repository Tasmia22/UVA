#include<bits/stdc++.h>
using namespace std;
int a(int p)
{
    return p|!p; //pv~q
}
int b(int p)
{
    return p&!p; //pv~q
}
int main()
{
    int p;
    cout<<"......TRUTH TABLE......."<<endl;
    cout<<"\n\n";
    cout<<"p\t"<<"~p\t"<<"pv~p"<<endl;
    cout<<"\n";

    for(p=0;p<=1;p++)

        {
            cout<<p<<"\t"<<!p<<"\t"<<a(p)<<endl;
        }
        cout<<"\n";
            cout<<"p\t"<<"~p\t"<<"p^~p"<<endl;
    cout<<"\n";

          for(p=0;p<=1;p++)

        {
            cout<<p<<"\t"<<!p<<"\t"<<b(p)<<endl;
        }

}
