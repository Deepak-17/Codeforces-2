#include <iostream>

using namespace std;

int main()
{
	int n,m,s=0;
	cin>>n>>m;
	int a[105];
	for(int i=1;i<=2*n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<2*n;i++)
	{
		if(i%2!=0) s+=(a[i+1]-a[i]+1);
		else s+=((a[i+1]-a[i]-1)%m);
	}
	s+=((a[1]-1)%m);
	cout<<s;

}