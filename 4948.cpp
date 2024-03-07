#include<iostream>
using namespace std;

int main(){
  bool ans[250001] = {false};
  ans[0] = true; ans[1] = true;
  for(int i=2; i*i<=250000; i++){
    if(ans[i]) continue;
    else{
      for(int j=2; j*i<=250000; j++) ans[i*j] = true;
    }
  }
  int n; cin>>n;
  while(n!=0){
    int count=0;
    for(int i=n+1; i<=2*n; i++){
      if(!ans[i]) count++;
    }
    cout<<count<<"\n";
    cin>>n;
  }
  return 0;
}