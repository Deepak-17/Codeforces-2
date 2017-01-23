#include <iostream>
#include <algorithm>
#include <limits.h>

using namespace std;

int freq[26];

int main()
{
    string s;
    getline(cin,s);
    if(s.length()==2) {cout<<0;return 0;}
    for(int i=1;i<s.length()-1;i++)
    {
        if(s[i]==',' || s[i]==' ') continue;
        else  freq[(int)s[i] -97]=1;
    }
    
    int cnt=0;
    for(int i=0;i<26;i++)
    {
        if(freq[i]==1) cnt++;
    }
    cout<<cnt;

}
