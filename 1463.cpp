#include<iostream>
using namespace std;

int main(){
  int N; 
  cin>>N;
  int ans[N+1]={0,};
  int tmp;
  for(int i=2; i<N+1; i++){
    tmp = ans[i-1]+1;
    if(i%2==0) tmp = tmp>ans[i/2]+1 ? ans[i/2]+1 : tmp;
    if(i%3==0) tmp = tmp>ans[i/3]+1 ? ans[i/3]+1 : tmp;
    ans[i] = tmp;
  }
  cout<<ans[N]<<endl;
  return 0;
}