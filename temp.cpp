#include <iostream>
using namespace std;

int main()
{
    int t; // number of test cases
    long long int n,m;
    cin >>t;
    while (t--)
    {
    	cin>>n;
    	long long int X[n];
    	long long int score[n]; // x+P
	    long long int a[n];
	    for(long long int i=0; i<n; i++)
	    {
	    	cin>>a[i];
	    }

	    for (long long int i=0; i<n; i++)
        {
            if (n==1)
            {
                cout<<"1";
            }
            else
            {
            long long int j=(i), bwd=0, fwd=0;
            while ((j)>0 && a[j]<a[i])
            {
                bwd++;
                --j;
            }
            j=(i);
            while ((++j)<n && a[j]<a[i])
            {
                fwd++;

            }
            X[i]=(bwd + fwd);
            score[i]=X[i]*(i+1);
            }

            //cout<< score[i]<<"\n";
        }
        long long int largest=score[0], mini;
        for (long long int i=0; i<n; i++)
        {
            if (score[i]>largest)
            {
                largest=score[i];
                mini=i+1;
            }
        }
        cout<<mini<<"\n";


    }

}
