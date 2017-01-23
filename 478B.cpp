#include<iostream>

using namespace std;


int main()
{
	long long n,m,small,large;
	cin>>n>>m;
	if (m==1)
	{
		small=large=n*(n-1)/2;
		cout<<small<<" "<<large;
		return 0;
	}
	large=(n-(m-1))*(n-(m-1)-1)/2;
	small=(n%m)*((n/m)+1)*(n/m)/2 + (m-(n%m))*(n/m)*((n/m)-1)/2;
	cout<<small<<" "<<large;

}