#include <iostream>
#include <algorithm>
#include <limits.h>
#include <string.h>
#include <stdio.h>

using namespace std;

int p,q,l,r,s,e,t;
bool x[2002],y[2002];
int main()
{
    cin>>p>>q>>l>>r;
    while(p--)
    {
        cin>>s>>e;
        while(e>=s)
            x[e]=1,e--;
    }
    while(q--){
        cin>>s>>e;
        while(e>=s)
            y[e]=1,e--;
    }
    while(r>=l)
    {
        for(int j=0;j<=1000;j++)
        if(y[j] && x[j+r])
            {t++; break;}
        r--;
    }
    cout<<t;

}