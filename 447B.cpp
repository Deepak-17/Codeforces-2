#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	string s;
	int i,k, w[26], value=0;
	cin>>s>>k;
	for(int i=0;i<26;i++)
	{
		cin>>w[i];
	}
	for(i=0;i<s.length();i++)
		value+=((i+1)*w[(int)s[i]-97]);
	sort(w,w+27);
	int k1=k;
	for(;i<s.length()+k1;i++,k--)
	{
		value+=((i+1))*w[25];
	}
	cout<<value<<endl;
}

