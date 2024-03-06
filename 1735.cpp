#include<iostream>
using namespace std;

int gcd(int a, int b);
int lcm(int a, int b);

int main(){
  int a, b;
  int c, d;
  cin>>a>>b>>c>>d;
  int i = a*d+c*b, j = b*d;
  int tmp = gcd(i,j);
  cout<<(i/tmp)<<" "<<(j/tmp)<<"\n";
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