#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
      char ch,c;
      string st = "";
      for(int j=0;j<10;j++)
      st+='0';
      for(int i=1;i<=10;i++)
      {
          cout<<i<<endl;
          cout.flush();
          cin >>ch;
          st[i-1]=ch;
      }
      cout<<st<<endl;
      cout.flush();
      cin >>c;
      if(c=='Y')
          continue;
      else
          return 0;
    }
}
