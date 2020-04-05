#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int t;
	    cin >> t;
	for(int y=0;y<t;y++)
	{
	   string st,ans;
	   cin >> st;
	   int co=0;
	   int x=st.length()+1;
	   char a[x];
	   strcpy(a,st.c_str());
	   for(int i=0;i<st.length();i++)
	   {
	      if(co<((int)(a[i])-48))
		  {
	          for(int j=0;j<(((int)(a[i])-48)-co);j++)
	              ans+='(';
	    
	          co+=(((int)(a[i])-48)-co);
	        	ans+=a[i];
	      }
	      else if(co>((int)(a[i])-48))
		  {
	          for(int j=0;j<(co-((int)(a[i])-48));j++)
	              ans+=')';
	              
	          co-=(co-((int)(a[i])-48));
	          ans+=a[i];
	      }
	      else
	          ans+=a[i];
	          
	   }
	   for(int i=0;i<co;i++)
	       ans+=')';
	       
	   cout << "Case #" << (y+1) << ": "<< ans <<endl;
	}
}
