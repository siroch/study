#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int N, count=0; cin>>N;
  string name;
  vector<string> list;
  cin>>name; N--;
  while(N--){
    cin>>name;
    if(name=="ENTER"){
      sort(list.begin(), list.end());
      list.erase(unique(list.begin(), list.end()), list.end());
      count += list.size();
      list.clear();
    }
    else list.push_back(name);
  }
  sort(list.begin(), list.end());
  list.erase(unique(list.begin(), list.end()), list.end());
  count += list.size();
  cout<<count;
  return 0;
}
