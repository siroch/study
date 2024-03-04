#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
  int N,M; cin>>N>>M;
  vector<string> first;
  string find_str;
  int count_same_string=0;
  for(int i=0; i<N; i++){
    cin>>find_str;
    first.push_back(find_str);
  }
  sort(first.begin(), first.end());
  for(int i=0; i<M; i++){
    cin>>find_str;
    if(binary_search(first.begin(), first.end(), find_str)) count_same_string++;
  }
  cout<<count_same_string;
  return 0;
}
