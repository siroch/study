#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
  string S; cin>>S;
  int B; cin>>B;
  int sum=0;
  for(int i=0; i<S.length(); i++){
    int tmp = S[S.length()-(i+1)];
    if('0'<=tmp && tmp<='9') sum += (tmp-'0')*(int)pow(B,i);
    else sum += (tmp+10-'A')*(int)pow(B,i);
  }
  cout<<sum;
  return 0;
}