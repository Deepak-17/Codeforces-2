#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <ctime>
#include <utility>
#include <vector>

using namespace std;

int b[100001];


int main()
{
	// cout<<vec.size();
	// return 0;
    int n,a;
    cin>>n;
    int t=n;
    while(n--){
    	cin>>a;
    	b[a]=1;
    	while(b[t]){
    		cout<<t<<" ";
    		t--;
    	}
    	cout<<""<<endl;
    }
}