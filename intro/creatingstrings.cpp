#include<bits/stdc++.h>
using namespace std;

string s;
vector<int> cnt(26);
string cur;
long long int k=1;

void backtrack(int n)
{
if((int)cur.size()==n)
{
cout<<cur<<"\n";
return;
}

for(int i=0;i<26;i++)
{
if(cnt[i]>0)
{
cnt[i]--;
cur.push_back(char('a'+i));

backtrack(n);

cur.pop_back();
cnt[i]++;
}
}
}

int main()
{
cin>>s;

int n=s.size();

for(char c : s)
cnt[c-'a']++;

for(int i=1;i<=n;i++)
k*=i;

for(int i=0;i<26;i++)
{
for(int j=1;j<=cnt[i];j++)
{
k/=j;
}
}

cout<<k<<"\n";

backtrack(n);

return 0;
}
