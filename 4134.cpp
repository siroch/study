#include<iostream>
using namespace std;

bool prime(long long int n);

int main(){
  long long int N, n; cin>>N;
  for(int i=0; i<N; i++){
    cin>>n;
    if(n>=0 && n<3) cout<<2<<"\n";
    else if(n==3) cout<<3<<"\n";
    else{
      while(!prime(n)) n++;
      cout<<n<<"\n"; 
    }
  }
  return 0;
}

bool prime(long long int n){
  for(long long int i=2; i*i<=n; i++){
    if(n%i==0) return false;
  }
  return true;
}