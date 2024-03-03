#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> v(N);
  for(int i=0; i<N; ++i) cin>>v[i];
  
  vector<int> ans(v);
  sort(ans.begin(), ans.end());
  ans.erase(unique(ans.begin(), ans.end()), ans.end());

  for(int i=0; i<N; i++) cout<<lower_bound(ans.begin(), ans.end(), v[i]) - ans.begin()<<" "; 
}