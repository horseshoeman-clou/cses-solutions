#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

string s;
cin>>s;

long long int curr=1;
long long int best=1;
long long int x=s.size();

for(int i=0;i<x;i++)
{

if(s[i+1]==s[i])
curr++;
else 
curr=1;

if(curr>best)
best=curr;

}


cout<<best;
return 0;
}
