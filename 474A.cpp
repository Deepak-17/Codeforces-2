#include <iostream>
#include <algorithm>
#include <limits.h>
#include <string.h>
#include <stdio.h>
#include <unordered_map>

using namespace std;
unordered_map<char,int>track;

string str;
char input;

string row1="qwertyuiop";
string row2="asdfghjkl;";
string row3="zxcvbnm,./";


void correct(char s,char input, string row)
{
    if(input=='R')
    {
        for(int i=0;i<row.length();i++)
        {
            if(s==row[i]) cout<<row[i-1];
        }
    }
    else 
    {
        for(int i=0;i<row.length();i++)
        {
            if(s==row[i]) cout<<row[i+1];
        }
    }
}

int main()
{
    for(int i=0;i<row1.length();i++)
    track[row1[i]]=1;
    for(int i=0;i<row2.length();i++)
        track[row2[i]]=2;
    for(int i=0;i<row3.length();i++)
        track[row3[i]]=3;

    cin>>input;
    cin>>str;

    for(int i=0;i<str.length();i++)
    {
        if(track[str[i]]==1) correct(str[i],input,row1);
        else if(track[str[i]]==2) {correct(str[i],input,row2);}
        else if(track[str[i]]==3) correct(str[i],input,row3);
    } 
       
}
