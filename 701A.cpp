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
	int n,sum=0;
    cin>>n;
    int a[n], temp[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];
    	temp[i] = a[i];
    }

    sort(temp, temp+n); 
    sum = temp[0]+temp[n-1];

    for(int i=0;i<n;i++){
    	if(a[i]==-1) continue;
    	for(int j=0;j<n;j++){
    		if(i==j || a[j]==-1) continue;
    		else if(a[j] == sum-a[i])
    		{
    			cout<<i+1<<" "<<j+1<<endl;
    			a[j]=-1;
    			a[i]=-1;
    			break;
    		}
    	}
    }
}