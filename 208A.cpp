#include<iostream>

using namespace std;

string window( string s, int i)
{
    string a="";
    return (a+s[i]+s[i+1]+s[i+2]);
    }


int main()
{
    string s, wub="WUB",ans="";
    int index;
    cin>>s;
    for(int i=0; i<=s.length()-1;)
    {
        if(wub==window(s,i)) {
            if(ans.back()!=' ') ans+=" ";
            i+=3;}
        else{
            ans=ans+s[i];
            i++;
        }
    }
    cout<<ans;

return 0;
}
