#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	for(int q=0;q<t;q++)
	{
		string st;
		int i,n;
		cin>>n;
		vector<pair<int,pair<int,int> > >ve;
		int s[n],e[n];
		for(i=0;i<n;i++)
		{
			cin>>s[i]>>e[i];
			ve.push_back({s[i],{e[i],i}});
			st+='C';
		}
		
			sort(ve.begin(),ve.end());
			
			int c=0,j=0,flag=0;
			for(i=0;i<ve.size();i++)
			{
				if(ve[i].first>=c)
				{
					st[ve[i].second.second]='C';
					c=ve[i].second.first;
				}
		
				else if(ve[i].first>=j)
				{
					st[ve[i].second.second]='J';
					j=ve[i].second.first;
				}
				
				else
				{	
					flag=1;
					break;
				}
		
			}
		if(flag==1)
		{
			cout<<"Case #"<<q+1<<": "<<"IMPOSSIBLE"<<endl;
			continue;
		}
		cout<<"Case #"<<q+1<<": "<<st<<endl;
	}
	return 0;
}
