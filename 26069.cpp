#include<iostream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;

int main(){
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int N, count=0; cin>>N;
  map<string, bool> m;
  string name1, name2;
  while(N--){
    cin>>name1>>name2;
    if(name1=="ChongChong") m.insert({name1,true});
    else if(name2=="ChongChong") m.insert({name2,true});
    if(m[name1]) m[name2]=true;
    if(m[name2]) m[name1]=true;
  }
  for(auto T:m){
    if(T.second) count++;
  }
  cout<<count;
  return 0;
}
