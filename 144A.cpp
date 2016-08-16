#include<iostream>
#include<stdlib.h> //exit
#include<cmath>//abs
#include<math.h>//pow

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    int index_min=0, index_max=0, mini=a[0], maxi=a[0];
    for(int i=0;i<n;i++)
    {
        if (a[i]<=mini)
        {
            mini=a[i];
            index_min=i;
        }
         if(a[i]>maxi)
        {
            maxi=a[i];
            index_max=i;
        }

    }
    int ans;
    //cout<<index_max<<endl<<index_min;
    ans=(index_max>index_min)?(index_max-1+(n-index_min-1)):(index_max+(n-index_min-1));
    cout<<ans;

}


