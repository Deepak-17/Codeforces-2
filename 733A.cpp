#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <ctime>

using namespace std;

int main()
{
    string s;
    int a=-1,maxi=0,i;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='A' || s[i]=='E' ||s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y') break;
    }
    if(i==s.length()) {cout<<s.length()+1;return 0;}
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='A' || s[i]=='E' ||s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y')
        {
            (i-a)>maxi?maxi=(i-a):maxi=maxi;
            a=i;
            // cout<<maxi<<endl;
        }
    }
    // cout<<a;
    (s.length()-a)>maxi?maxi=(s.length()-a):maxi=maxi;
    cout<<maxi<<endl;


}
