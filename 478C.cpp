#include<iostream>

using namespace std;
long long mini, max, mid;
void order(long long a, long long b, long long c)
{
	mini=a<b?((a<c)?a:c):((b<c)?b:c);
	max=a>b?((a>c)?a:c):((b>c)?b:c);
	mid=(a+b+c)-(mini+max);
}

// long long func(long long a, long long b, long long c)
// {
// 	if (a==1 && b==1 && c==1)
// 		{
// 			count+=1;
// 			return 0;
// 		}
// 	a-=2;
// 	b-=1;
// 	if(a>=0 && b>=0)
// 	{
// 		count+=1;
// 		// order(max, mid, mini);
// 		mini=a<b?((a<c)?a:c):((b<c)?b:c);
// 		max=a>b?((a>c)?a:c):((b>c)?b:c);
// 		mid=(a+b+c)-(mini+max);
// 		func(max,mid,mini);
// 	}
// 	else 
// 		return 0;
// }

int main()
{
	long long a,b,c, count=0;
	cin>>a>>b>>c;
	order(a,b,c);
	// func(max,mid,mini);
	while(true)
	{
		if (max==1 && mid==1 && mini==1)
 		{
 			count+=1;
 			break;
 		}
 		max-=2;
 		mid-=1;
 		if(max>=0 && mid>=0)
 		{	
 			count+=1;
			order(max, mid, mini);
		}
		else 
			break;
	}
	cout<<count;
}