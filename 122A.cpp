#include<iostream>
#include<stdlib.h> //exit

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        int flag=0;
        int num=i;
        while(num!=0)
        {
            if((num%10)==4 || (num%10)==7)
            {
                num=num/10;
            }
            else
            {flag=1;
            num=num/10;}

        }
        if(flag==0 && (n%i)==0)
            {cout<<"YES";
            exit(0);}

    }
    cout<<"NO";
}


