#include<iostream>
#include<stdlib.h> //exit
#include<algorithm> // sort
#include<vector>

using namespace std;

int main()
{
    long long int m,n,a[2],b;
    cin>>n>>m;
    long long int cnt=0;
    cin>>a[0];
    cnt+=a[0]-1;
    while(--m)
    {
        cin>>a[1];
        b=(a[1]>=a[0])?(a[1]-a[0]):((n-a[0]+1)+(a[1]-1));
        cnt+=b;
        a[0]=a[1];
    }
cout<<cnt;
}
