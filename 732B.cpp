#include <iostream>
#include <math.h>

int ans,cnt;
using namespace std;
int main()
{
    int n,k,a1,a,total=0;
    cin>>n>>k;
    int arr[n];

    if(n==1)
    {   
        cin>>a;
        if(a>=k)
        {
            cout<<0<<endl;
            cout<<a<<endl; return 0;
        }
        else
        {
            cout<<(k-a)<<endl;
            cout<<k<<endl; return 0;
        }
    }
    cin>>a;
    arr[0]=a;
    for(int i=1;i<n;i++)
    {
        cin>>a1;
        ((a1+a)>=k)?arr[i]=a1,a=a1:(total+=(k-(a1+a)),arr[i]=k-a,a=k-a);
    }
    cout<<total<<endl;
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}
