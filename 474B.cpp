#include <iostream>
#include <algorithm>
#include <limits.h>
#include <string.h>
#include <stdio.h>
#include <unordered_map>

using namespace std;
unordered_map<int,int>track;
int num;
int main()
{
    int n,a;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        while(a--)
        {
            num++;
            track[num]=i;
        }
    }
    int m,q;
    cin>>m;
    while(m--)
    {
        cin>>q;
        cout<<track[q]<<endl;
    }
}


