#include <iostream>
#include <algorithm>
#include <limits.h>
#include <string.h>
#include <stdio.h>

using namespace std;

bool track[26];

void get_element()
{
    for(int j=0;j<26;j++)
        if(track[j]==0)
        {
            cout<<(char)(j+65);
            track[j]=1;
            break;
        }
}

void reset()
{
    for(int i=0;i<26;i++)
        track[i]=0;
}

int main()
{
   string s;
   int i,j;
   cin>>s;
   if(s.length()<26) {cout<<-1; return 0;}
   for(i=0;i+25<s.length();i++)
   {
        reset();
        for(j=i;j<26+i;j++)
        {
            if(s[j]=='?') continue;
            if(track[(int)s[j]-65])
                break;
            track[(int)s[j]-65]=1;
        }
        if(j==26+i)
            break;
   }
   if(i+25==s.length()) {cout<<-1; return 0;}

   for(j=0;j<s.length();j++)
   {
        if(j<i || j>i+25)
        {
            if(s[j]=='?') cout<<'A';
            else cout<<s[j];
            continue;
        }
        if(s[j]=='?')
            get_element();
        else cout<<s[j];
   }


}