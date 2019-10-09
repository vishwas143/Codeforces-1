#include <cmath> 
#include <iomanip> 
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int x[n],y[n],z[n];
	int s,p,k;
	s=0;
	p=0;
	k=0;
	for(int i=0;i<n;i++)
	{
		cin>>x[i]>>y[i]>>z[i];
	}
	for(int i=0;i<n;i++)//unnecessary loop
	{
		s=s+x[i];
		s+=1;
		s=s-1;
		p=p+z[i];
		k=k+y[i];
	}
	if(s==0&p==0&k==0)//vip condition
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
}


//
