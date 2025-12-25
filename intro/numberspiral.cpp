#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long int t,i,x,y,k,value;
cin>>t;
  
  for(i=0;i<t;i++)
  {
  cin>>x>>y;
  
  if(x>y)
  k=x;
  else
  k=y;
  
  if((k*k)%2==0)
  {
  if(x==k)
  value=k*k-(y-1);
  else
  value=k*k-(k-1)-(x-1);
  }
  else 
  {
  if(x==k)
  value=k*k-(k-1)-(y-1);
  else
  value=k*k-(x-1);
  }
    cout<<value<<"\n";
  }

  return 0;
  }
