#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long n;
cin>>n;

vector<int> a(n+1);
for(int i=1;i<=n;i++) cin>>a[i];

vector<long long> dp(n+1);
dp[0]=1;

unordered_map<int,int>last;

for(int i=1;i<=n
