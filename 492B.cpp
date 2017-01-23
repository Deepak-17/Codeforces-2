#include<iostream>
#include<iomanip>
#include<algorithm>

using namespace std;


int main()
{
	int n,i; long long l; long double largest=0;
	cin>>n>>l;
	long long a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n-1;i++) 
	{	
		if((a[i+1]-a[i])>largest) largest=(a[i+1]-a[i]);
	}
	largest=(largest/2.0);
	if(a[0]!=0)
	{
		if((a[0]-0)>largest)
			largest=(a[0]-0);
	}
	if(a[n-1]!=l)
	{
		if((l-a[n-1])>largest)
			largest=(l-a[n-1]);
	}
	cout.setf(ios::fixed);
	cout<<setprecision(9)<<largest;			
}