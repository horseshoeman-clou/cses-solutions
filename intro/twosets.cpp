#include<bits/stdc++.h>
using namespace std;
using ll= long long ;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long n,i;
cin>>n;

long long int totsum=(n*(n+1))/2;

if(totsum%2!=0)
{
cout<<"NO";
exit(0);
}

cout<<"YES\n";

vector<long long > A;
vector<long long > B;

if(n%4==0)
{
for(i=1;i<=n;i+=4)
{
A.push_back(i);
A.push_back(i+3);
B.push_back(i+1);
B.push_back(i+2);
}
}
else if (n%4==3)
{
A.push_back(1);
A.push_back(2);
B.push_back(3);
for(i=4;i<=n;i+=4)
{
A.push_back(i);
A.push_back(i+3);
B.push_back(i+1);
B.push_back(i+2);
}
}

cout<<A.size()<<"\n";
for(ll x: A)
cout<<x<< " ";
cout<<"\n";

cout<<B.size()<<"\n";
for(ll x:B)
cout<<x<<" ";
cout<<"\n";
 
 return 0;
 }
