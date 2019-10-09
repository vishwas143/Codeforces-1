#include <cmath> 
#include <iomanip> 
#include <iostream>
using namespace std;
int main()
{
	long long int n;
	int k,w;
	cin>>k>>n>>w;
	int t=(w*(w+1)*k)/2;
	if(n>=t)
	{
		cout<<0;
	}
	else
	{
		cout<<t-n;
	}
}

