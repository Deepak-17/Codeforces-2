#include <iostream>
#include <algorithm>
#include <limits.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    pair<int,int>tower[n];
    pair<int,int>ij[100000];
    for(int i=0;i<n;i++)
    {
        cin>>tower[i].first;
        tower[i].second=i+1;
    }

    sort(tower,tower+n);
    int ans=tower[n-1].first-tower[0].first;
    int i,j=0;
    for(i=0;i<k;i++)
    {
        tower[0].first+=1; 
        tower[n-1].first-=1;
        ij[j].first=tower[n-1].second;
        ij[j].second=tower[0].second;
        sort(tower,tower+n);
        if((tower[n-1].first-tower[0].first)>=ans) break;
        else ans=(tower[n-1].first-tower[0].first);
        
        j++;        
        // cout<<tower[n-1].second<<" ";
        // cout<<tower[0].second<<" "<<ans<<endl;
    }
    cout<<ans<<" "<<i<<endl;
    for(int i=0;i<j;i++)
    {
        cout<<ij[i].first<<" "<<ij[i].second<<endl;
    }
}