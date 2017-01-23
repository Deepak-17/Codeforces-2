#include <iostream>
#include <algorithm>
#include <limits.h>
#include <string.h>
#include <stdio.h>

using namespace std;

int pass[101];

int main()
{
    int n,p=2;
    cin>>n;
    while(p--)
    {
        int p1,a;
        cin>>p1;
        while(p1--) {cin>>a;pass[a]=1;}
    }  
    for(int i=1;i<=n;i++)
        if(pass[i]!=1) {cout<<"Oh, my keyboard!"; return 0;}
    cout<<"I become the guy.";
    return 0;

}