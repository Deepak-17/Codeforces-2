#include <iostream>
#include <algorithm>
#include <limits.h>
#include <string.h>
#include <stdio.h>

using namespace std;
int ans;
int main()
{
    int k;
    string s; 
    cin>>s>>k;
    ans=2*k;int n=s.length();
    if(k>=n)
    {
        (k+n)%2==0?cout<<(k+n):cout<<(k+n-1);
        return 0;
    }
    for(int i=1;2*(i+k)<=(n+k);i++)
    {
        for(int j=n-2*i-k; j<n-i-k;j++)
        {
            if(s[j]!=s[n-i-j])
            {
                cout<<ans;
                return 0;
            }
        }
        ans+=2;
    }
    // int n=s.length();
    // string s1,s2;
    // // s="abcdefg";
    // for(int i=k+1;i<(n/2);i++)
    // {
    //     // cout<<"hi";
    //     for(int j=0;j+2*k<=n;j++)
    //     {
    //         s1=string(s.begin()+j,s.begin()+j+i);
    //         s2=string(s.begin()+j+i,s.begin()+j+2*i);
    //         cout<<s1<<" "<<s2<<endl;
    //         if(s1==s2)
    //             { if(2*i>ans) ans=2*i;break;}
    //     }
    // }
    // // cout<<string(s.begin()+3,s.begin()+5);
    cout<<ans ;

}
