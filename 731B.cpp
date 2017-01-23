#include <iostream>
#include <math.h>

int ans,cnt;
using namespace std;
int main()
{
    int n,a,rem=0;
    cin>>n;
    while(n--)
    {
        cin>>a;
        a-=rem;
        if(a<0) {cout<<"NO"<<endl;return 0;}
        rem=(a%2==0)?0:1;
    }
    // cout<<rem;
    if(rem==1) 
        cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
