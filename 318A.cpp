#include <iostream>
#include <algorithm>
#include <limits.h>
#include <string.h>
#include <stdio.h>

using namespace std;

// int a[10];

int main()
{
    long long n,k;
    cin>>n>>k;
    (n%2==0)?n/=2:n=(n/2)+1;
    // cout<<n;
    (k<=n) ? cout<<(1+(k-1)*2):cout<<(2+(k-n-1)*2);
}
