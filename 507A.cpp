#include <iostream>
#include <algorithm>

using namespace std;
pair<int ,int>arr[105];
int main()
{
	int i,n,k,a,sum=0;
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>a;
		arr[i].first=a;
		arr[i].second=i+1;		
	}
	sort(arr,arr+n);
	for(i=0;i<n;i++)
	{
		if(sum+arr[i].first <=k)
			sum+=arr[i].first;
		else 
			break;
	}
	cout<<i<<endl;
	for(int j=0;j<i;j++)
		cout<<arr[j].second<<" ";

}
