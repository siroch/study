#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<map>
using namespace std;

int main(){
  int N,M; cin>>N>>M;
  map <string, string> book;
  vector <string> name, ans;
  string tmp;
  int count=1;
  while(N--){
    cin>>tmp;
    name.push_back(tmp);
    book[tmp]=to_string(count++);
  }
  while(M--){
    cin>>tmp;
    if(tmp[0]>47 && tmp[0]<58) ans.push_back(name[stoi(tmp)-1]);
    else ans.push_back(book[tmp]);
  }
  for(auto T:ans) cout<<T<<"\n";
  return 0;
}