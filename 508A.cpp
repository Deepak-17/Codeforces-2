#include <iostream>
using namespace std;

int main()
{
	int n,m,k,i,j, a[1005][1005],r=0;
	cin>>n>>m>>k;
	while(k--)
	{
		r+=1;
		cin>>i>>j;
		a[i][j]=1;
		if(a[i-1][j-1] && a[i-1][j] && a[i][j-1] || a[i-1][j] && a[i-1][j+1] && a[i][j+1] || a[i][j+1] && a[i+1][j+1] && a[i+1][j] || a[i+1][j] && a[i+1][j-1] && a[i][j-1])
			{ cout<<r; return 0;}			
	}
	cout<<0;
	return 0;

}

