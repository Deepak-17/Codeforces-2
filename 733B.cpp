#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <ctime>
#include <utility>

using namespace std;
pair<int,int>col[100000];
long long suml,sumr,beauty,temp;
int index=-1;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>col[i].first>>col[i].second;
        suml+=col[i].first;
        sumr+=col[i].second;
    }
    beauty=abs(suml-sumr);
    for(int i=0;i<n;i++)
    {
        temp=abs(suml-sumr +2*(col[i].second-col[i].first));
        if(temp>beauty) beauty=temp,index=i+1;
    }
    if(index==-1) cout<<0<<endl;
    else cout<<index<<endl;
    return 0;


}
