#include <iostream>
#include <vector>

using namespace std;


int main()
{
    int n,m;
    char col;
    cin>>n>>m;
    while(n--)
    {
        for(int i=0;i<m;i++)
        {
            cin>>col;
            if(col=='C' || col=='M' || col=='Y') {cout<<"#Color";return 0;}   
        }
    }
    cout<<"#Black&White";
    return 0;

}