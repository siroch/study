#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int ans[3]; cin>>ans[0]>>ans[1]>>ans[2];
  sort(ans,ans+3);
  if(ans[2]>=ans[0]+ans[1]) cout<<(ans[0]+ans[1])*2 -1<<endl;
  else cout<<(ans[0]+ans[1]+ans[2])<<endl;
  return 0;
}