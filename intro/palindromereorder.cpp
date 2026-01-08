#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

string s;
cin>>s;

vector<int> cnt(26,0);

for(char c:s) cnt[c-'A']++;

int odd=0;
char mid;

for(int i=0;i<26;i++)
{
if(cnt[i]%2)
{
odd++;
mid=char(i+'A');
}
}

if(odd>1)
{
cout<<"NO SOLUTION";
return 0;
}

string left;
for(int i=0;i<26;i++)
left.append(cnt[i]/2,char(i+'A'));

cout<<left;
if(odd) cout<<mid;
reverse(left.begin(),left.end());
cout<<left<<"\n";

return 0;
}

