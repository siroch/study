#include<iostream>
#include<string>
using namespace std;

int main(){
  int sum=0;
  int N; cin>>N;
  string a; cin>>a;
  for(int i=0; i<N; i++) sum += a[i] - '0';
  cout<<sum<<endl;
  return 0;
}