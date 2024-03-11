#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

vector<string> v;
map<string,int> mm;
bool compare(string a, string b);

int main(){
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int N,M; cin>>N>>M;
  string S;
  while(N--){
    cin>>S;
    if(S.length()<M) continue;
    if(mm.find(S)==mm.end()){
      mm[S]=0; v.push_back(S);
    }
    mm[S]++;
  }
  sort(v.begin(), v.end(), compare);
  for(int i=0; i<v.size(); i++) cout<<v[i]<<"\n";
  return 0;
}

bool compare(string a, string b){
  if(a.size()==b.size() && mm[a]==mm[b]) return a<b;
  else if(mm[a]==mm[b]) return a.size()>b.size();
  return mm[a]>mm[b];
}