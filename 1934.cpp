#include<iostream>
using namespace std;

int gcd(int a, int b);
int lcm(int a, int b);

int main(){
  int N; cin>>N;
  int a, b;
  while(N--){
    cin>>a>>b;
    cout<<lcm(a,b)<<"\n";
  }
  return 0;
}

int gcd(int a, int b){
  int c;
  while(b!=0){
    c = a%b;
    a = b; b = c;
  }
  return a;
}

int lcm(int a, int b){
  return a*b / gcd(a, b);
}