#include<iostream>
#include<stdlib.h> //exit
#include<algorithm> // sort


using namespace std;

int main()
{
    int len,t;
    string que;
    cin>>len>>t;
    cin>>que;
    //cout<<len<<t;
    for(int i=0; i<t;i++)
    {
        for(int j=0; j<len;j++)
        {
            if(que[j]=='B'&&que[j+1]=='G')
            {
                swap(que[j],que[j+1]);
                j++;
            }
        }
    }
cout<<que;
}
