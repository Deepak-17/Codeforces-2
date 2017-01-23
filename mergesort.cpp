#include<iostream>

using namespace std;

void merge(int a[], int l, int m, int r)
{
	int n1=m-l+1;  // number of elements in the first subarray
	int n2=r-m;  // number of elements in the second subarray

	// creation of temp arrays to store sub arrays from original array
	int L[n1], R[n2];

	// copy data from original array to these empty sub arrays
	for(int i=0;i<n1;i++)
		L[i]=a[l+i];
	for(int j=0;j<n2;j++)
		R[j]=a[m+1+j];

	// merging these two sub arrays into the original one
	int i=0,j=0;
	int k=l;
	while (i<n1 && j<n2)
	{
		L[i]<R[j]?(a[k]=L[i],i++):(a[k]=R[j],j++);
		k++;
	}

	// Copying the remaining elements of L[] , if any
	while(i<n1)
	{
		a[k]=L[i];
		i++; k++;	
	}	

	// Copying the remaining elements of R[] , if any 
	while(j<n2)
	{
		a[k]=R[j];
		j++; k++;
	}	

}

void  mergesort(int a[], int l, int r)
{
	if(l<r) //if l==r , that means there is only one element left in the sub array, so it should stop there
	{
		int m=l+((r-l)/2);
		mergesort(a,l,m);
		mergesort(a,m+1,r);
		merge(a,l,m,r);
	}

}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	mergesort(a,0, n-1);
	for(int i=0;i<n;i++) cout<<a[i];

}