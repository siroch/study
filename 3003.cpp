#include<iostream>
using namespace std;

int main(){
  int ans[6] = {1,1,2,2,2,8};
  int input[6];
  for(int i=0; i<6; i++){
    cin>>input[i];
    ans[i] -= input[i];
  }
  for(int i=0; i<6; i++){
    cout<<ans[i]<<" ";
  }
  return 0;
}