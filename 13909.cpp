#include<iostream>
using namespace std;

int main(){
  long long int N, count=0; cin>>N;
  for(int i=1; i*i<=N; i++) count++;
  cout<<count;
  return 0;
}