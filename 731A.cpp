#include <iostream>
#include <math.h>

int ans,cnt;
using namespace std;
int main()
{
    string s;
    cin>>s;
    ans+=(s[0]-'a')<('z'-s[0]+1)?(s[0]-'a'):('z'-s[0]+1);
    for(int i=1;i<s.length();i++)
    {
        if(s[i]>=s[i-1])
        {
            cnt=(s[i]-s[i-1])<('z'-s[i]+1 + s[i-1]-'a')?(s[i]-s[i-1]):('z'-s[i] +1+ s[i-1]-'a');
            ans+=cnt;
        }
        else 
        {
            cnt=(s[i-1]-s[i])<('z'-s[i-1] +1+ s[i]-'a')?(s[i-1]-s[i]):('z'-s[i-1] +1+ s[i]-'a');
            ans+=cnt;
        }

    }
    cout<<ans<<endl;
}
