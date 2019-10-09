#include <cmath> 
#include <iomanip> 
#include <iostream>
using namespace std;
int main()
{
	int n,m,flag,s;
	s=0;
	flag=1;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=1;i<n-1;i++)
	{
		for(int j=1;j<m-1;j++)
		{
			if(a[i][j]==0)
			{
				if(a[i-1][j]>=a[i][j-1])
				{
					a[i][j]=a[i-1][j]+1;
				}
				else
				{
					a[i][j]=a[i][j-1]+1;
				}
			}
		}
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]>=a[i][j+1])
			{
				flag=0;
			}
		}
	}
	//try to do single loop
	for(int j=0;j<m-1;j++)
	{
		for(int i=0;i<n;i++)
		{
			if(a[i][j]>=a[i+1][j])
			{
				flag=0;
			}
		}
	}
	ssif(flag==1)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				s=s+a[i][j];
			}
		}
		cout<<s;
	}
	if(flag==0)
	{
		cout<<"-1";
	}
}
