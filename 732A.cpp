#include <iostream>
#include <math.h>

int ans,cnt;
using namespace std;
int main()
{
    int k,r;
    cin>>k>>r;
    for(int i=1;;i++)
    {
        
        // cout<<k%10<<endl;
        // cout<<k*i<<endl;
        if((((k*i)%10)%r)==0 && (((k*i)%10)/r)<=1) {cout<<i<<endl;return 0;}
    }
}
