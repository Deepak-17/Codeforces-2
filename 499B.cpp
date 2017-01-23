#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
// #include <bits/stdc++.h>

using namespace std;

int main()
{
	unordered_map <string,string> lang;

	int n,m;
	string a,b,lecture;
	cin>>n>>m;
	while(m--)
	{
		cin>>a>>b;
		lang[a]=b;
	}

	while(n--)
	{
		cin>>lecture;
		if(lecture.length()<=lang[lecture].length()) cout<<lecture<<" ";
		else cout<<lang[lecture]<<" ";
	}

}