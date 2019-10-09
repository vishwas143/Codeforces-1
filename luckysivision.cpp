#include <cmath> 
#include <iomanip> 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,s,p,k;
	s=0;
	cin>>n;
	k=n;
	while(n>=1)
	{
		p=n%10;
		if(p!=4&p!=7)
		{
			s=1;
			n=0;
		}
		n=n/10;
	}
	if(k%4==0||k%7==0||k%74==0||k%47==0)
	{
		s=0;
	}
	if(s==1)
	{
		cout<<"NO";
	}
	else
	{
		cout<<"YES";
	}

}
