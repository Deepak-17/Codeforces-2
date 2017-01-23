#include<iostream>
using  namespace std;

int bitcount(int n)
{   int count = 0;
    while (n > 0)
        {
        	count = count + 1;
        	n = n & (n-1);
    	}
    return count;
}

int main()
{
	int n,m,k, player, num_friends=0;
	cin>>n>>m>>k;
	int players[m+1];
	for(int i=0;i<=m;i++)
	{
		cin>>players[i];
	}
	
	for(int i=0;i<m;i++)
	{
		int differ=(bitcount(players[m] ^ players[i]));
		if (differ <= k) num_friends++;
	}

	cout<<num_friends<<endl;

}