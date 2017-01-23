#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	int i,n,start=1,end;
	cin>>n;
	int a[100001];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}	
	for(int i=1;i<n;i++)
		if(a[i]>a[i+1]) { start=i; break;} 

	for(i=start;i<n;i++)
		if(a[i]<a[i+1])	{ end=i; break;}

	if (i==n) end=n;

	reverse(a+start,a+end+1);
	// sort(a+start,a+end+1);
	// for(i=1;i<n;i++) cout<<a[i];

	for(i=1;i<n;i++)
		if (a[i]>a[i+1]) break;
	if(i!=n) cout<<"no";
	else 
	{
		cout<<"yes"<<endl<<start<<" "<<end;
	}
}