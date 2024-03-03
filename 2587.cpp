#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int ans[5];
  for(int i=0; i<5; i++) cin>>ans[i];
  int sum=0, mid;
  sort(ans,ans+5);
  for(int i=0; i<5; i++) sum+=ans[i];
  cout<<sum/5<<"\n"<<ans[2];
  return 0;
}