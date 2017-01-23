#include <iostream>
#include <math.h>
#include <map> // Can't store multiple values with the same key
#include <utility>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
	int s,n,x,y,flag=0;
	cin>>s>>n;
	pair<int,int>xy[n];
	for(int i=0;i<n;i++)
		cin>>xy[i].first>>xy[i].second;
	sort(xy,xy+n);
	for(int i=0;i<n;i++)
	{
		if(s>(xy[i].first)) s+=(xy[i].second);
		else 
			{cout<<"NO";return 0;}
	}
	cout<<"YES";
}