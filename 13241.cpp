#include<iostream>
using namespace std;

long long int gcd(long long int a, long long int b);
long long int lcm(long long int a, long long int b);

int main(){
  long long int a,b; cin>>a>>b;
  cout<<lcm(a,b);
  return 0;
}

long long int gcd(long long int a, long long int b){
  long long int c;
  while(b!=0){
    c = a%b;
    a = b; b = c;
  }
  return a;
}

long long int lcm(long long int a, long long int b){
  return a*b / gcd(a, b);
}