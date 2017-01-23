#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
using namespace std;


int main()
{
    float n,m,a;
    cin>>n>>m>>a;
    cout<<fixed<<setprecision(0)<<(ceil(n/a)*ceil(m/a));

}