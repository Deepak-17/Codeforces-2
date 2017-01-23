#include <iostream>
#include <algorithm>
using namespace std;

int a[305]; //All the values are automatically initialized to 0
int main()
{
	int i,p,n;long long x;
	cin>>p>>n;
	// int a[p];
	// for(int j=0;j<p;j++)
	// {
	// 	a[j]=0;
	// }
	for(i=0;i<n;i++)
	{
		cin>>x;
		if(a[x%p]==1) { cout<<(i+1); return 0;}
		else a[x%p]=1;
	}
	cout<<-1 ; 
	return 0;
	// cout<<b[8];	
}

