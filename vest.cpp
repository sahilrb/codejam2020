#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int y=0;y<t;y++)
	{
		set<int>s;
		int n,r=0,c=0,sum=0;
		cin>>n;
		int a[n][n];
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin>>a[i][j];
		for(int i=0;i<n;i++)
		{
			sum+=a[i][i];
			for(int j=0;j<n;j++)
			{
				s.insert(a[i][j]); 	
			}
			if(s.size()<n)
				r++;
			s.clear();
		}
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				s.insert(a[j][i]);
			}
			if(s.size()<n)
				c++;
			s.clear();
		}
		cout<<"Case #"<<y+1<<": ";
		cout<<sum<<" "<<r<<" "<<c<<endl;
		
	}
	
}
