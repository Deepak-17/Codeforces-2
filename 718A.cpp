#include<iostream>
#include<iomanip>
#include<algorithm>
#include<math.h>

using namespace std;

double digits(int n)
{
	int i=0;
	while(n>0)
	{
		i++;
		n/=10;
	}
	return i;
}

int main()
{
	double n,n2,num_digits;long long t;double num;
	cin>>n>>t;
	cin>>num;
	num_digits=digits(floor(num));
	//cout<<num_digits;
	n2=pow(10,n-1-num_digits)*(num-floor(num));
	cout<<n2;

	while(t>0 && (n2%10.0)>=5.0)
	{
		cout<<"hi";
		n2=(n2/10)+(n2%10);
		t--;
	}
	// cout<<n2;
	// cout<<"hi";


}
