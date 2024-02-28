#include<iostream>
using namespace std;

int main(){
  int A,B,C;
  while(true){
    cin>>A>>B>>C;
    if(A==0 && B==0 && C==0) break;
    if(A+B<=C || A+C<=B || B+C<=A) cout<<"Invalid"<<endl;
    else if(A==B && B==C) cout<<"Equilateral"<<endl;
    else if((A!=B && A!=C && B!=C)) cout<<"Scalene"<<endl;
    else if((A==B || B==C || A==C)) cout<<"Isosceles"<<endl;
  }

  return 0;
}