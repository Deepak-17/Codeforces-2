#include<iostream>

using namespace std;
long long count=0, mini, maxi, mid;
void order(long long a, long long b, long long c)
{
	mini=a<b?((a<c)?a:c):((b<c)?b:c);
	maxi=a>b?((a>c)?a:c):((b>c)?b:c);
	mid=(a+b+c)-(mini+maxi);
}

void func(long long a, long long b, long long c)
{
	if (maxi==1 && mid==1 && mini==1)
		{
			count+=1;
			return ;
		}
	maxi-=2;
	mid-=1;
	if(maxi>=0 && mid>=0)
	{
		count+=1;
		order(maxi, mid, mini);
		// mini=a<b?((a<c)?a:c):((b<c)?b:c);
		// max=a>b?((a>c)?a:c):((b>c)?b:c);
		// mid=(a+b+c)-(mini+max);
		func(maxi,mid,mini);
	}
	else
		return;
}

int main()
{
	long long a,b,c;
	cin>>a>>b>>c;
	order(a,b,c);
	func(maxi,mid,mini);
	cout<<count;
}
