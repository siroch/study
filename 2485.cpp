#include<iostream>
#include<algorithm>
using namespace std;

int gcd(int a, int b);
int lcm(int a, int b);

int main(){
  int N; cin>>N;
  int wood[N], tmp[N-1];
  cin>>wood[0];
  for(int i=1; i<N; i++){
    cin>>wood[i];
    tmp[i-1] = wood[i]-wood[i-1];
  }
  sort(tmp, tmp+N-1);
  int gcd_n = tmp[0];
  for(int i=1; i<N-1; i++) gcd_n = gcd(gcd_n, tmp[i]);
  int sum=0;
  for(auto T:tmp) sum += (T/gcd_n) - 1;
  cout<<sum<<"\n";
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