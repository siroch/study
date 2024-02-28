#include<iostream>
using namespace std;

int main(){
  int A,B,C; cin>>A>>B>>C;
  if(A==B && B==C && A+B+C==180) cout<<"Equilateral";
  else if(A+B+C==180 && A!=B && A!=C && B!=C) cout<<"Scalene";
  else if(A+B+C==180 && (A==B || B==C || A==C)) cout<<"Isosceles";
  else cout<<"Error";
  return 0;
}