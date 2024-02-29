#include<iostream>
using namespace std;

int main(){
  int N,tmp,ans=0; cin>>N;
  for(int i=1; i<N; i++){
    tmp = i+(i%1000000)/100000+(i%100000)/10000+(i%10000)/1000+(i%1000)/100+(i%100)/10+(i%10);
    if(tmp==N){
      ans=i;
      break;
    }
  }
  cout<<ans;
  return 0;
}