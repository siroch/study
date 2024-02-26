#include<iostream>
using namespace std;

int main(){
  int T; cin>>T;
  for(int i=0; i<T; i++){
    int m; cin>>m;
    int ans[4] = {0,};
    ans[0] = m/25; m %= 25;
    ans[1] = m/10; m %= 10;
    ans[2] = m/5; m %= 5;
    ans[3] = m/1;
    for(int j=0; j<4; j++) cout<<ans[j]<<" ";
    cout<<endl;
  }
  return 0;
}