#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <ctime>
#include <utility>
#include <vector>
#include <set>

using namespace std;
set<long long> row, col;

long long findUnderAttack(long long n, long long numOfRows, long long numOfCols){
	long long cellsUnderAttack = (numOfRows * n) + (numOfCols * (n - numOfRows)); 
	long long cellsSafe = n*n - cellsUnderAttack;
	return cellsSafe;
}

int main()
{
	long long n,m,i,j;
	cin>>n>>m;
	while(m--){
		cin>>i>>j;
		row.insert(i), col.insert(j);
		cout<<findUnderAttack(n, row.size(), col.size())<<" ";
	}
}