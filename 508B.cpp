#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	string s; int num,index=-1;
	cin>>s;
	int last=(int)s.back()-48;
	for(int i=0;i<s.length();i++)
	{
		num=(int)s[i]-48;
		if(num%2==0)
		{
			index=i;
			if(last>num) 
			{ 
				swap(s[i],s.back());
			  	cout<<s;
			  	return 0;
			}
		}
	}
	if(index==-1) {cout<<-1;return 0;}
	else {swap(s[index],s.back()); cout<<s;return 0;}


}

