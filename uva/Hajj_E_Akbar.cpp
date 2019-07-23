#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[6];
    int no=0;
    while(scanf("%s",s))
    {
        if(!strcmp(s,"*"))
            break;
        else if(!strcmp(s,"Hajj")||!strcmp(s,"hajj")||!strcmp(s,"HAJJ"))
            cout<<"Hajj-e-akbar"<<endl;
        else if(!strcmp(s,"Umrah"))
            cout<<"hAJJ-E-Ajgar"<<endl;
    }
}

