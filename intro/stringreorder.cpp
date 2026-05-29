#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

string s;
cin>>s;

long long n=s.size();

vector<int> frequency(26,0);
for(char c: s)
frequency[c-'A']++;

int maxfreq=*max_element(frequency.begin(),frequency.end());
if(maxfreq>(n+1)/2){
cout<<-1<<"\n";
return 0;
}

string result;
result.reserve(n);

char prev='#';

for(int pos=0;pos<n;pos++){
bool placed = false;

for(int c=0;c<26;c++){

if(frequency[c]==0)
continue;

char ch=char('A'+c);
if(ch==prev)continue;

frequency[c]--;

int futureMax=*max_element(frequency.begin(),frequency.end());

int remaining= n-pos-1;

if(futureMax<=(remaining+1)/2){
result.push_back(ch);
prev=ch;
placed=true;
break;
}

frequency[c]++;

}

if(!placed){
cout<<-1<<"\n";
return 0;
}
}

cout<<result<<"\n";
return 0;
}
