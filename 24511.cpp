#include <iostream>
#include <deque>
using namespace std;


int main(){
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  deque<int> dq;
  int n,m; cin>>n;
  bool flag[100001];
  for(int i=0; i<n; i++) cin>>flag[i];
  for(int i=0; i<n; i++){
    int x; cin>>x;
    if(flag[i]==0) dq.push_back(x);
  }
  cin>>m;
  for(int i=0; i<m; i++){
    int y; cin>>y;
    dq.push_front(y);
    cout<<dq.back()<<" ";
    dq.pop_back();
      
  }
}