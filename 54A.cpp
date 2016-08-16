#include<iostream>

using namespace std;

int main()
{
    string s, x="hello";
    cin>>s;
    int c=0;
    for(int i=0; i<s.size();i++)
    {
        if(s[i]==x[c])
        {
            c++;
        }
    }
    if (c==5)
    {
        cout<<"YES";

    }
    else cout<<"NO";
}


