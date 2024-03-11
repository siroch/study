#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int num[500001];
int a(int N);
int b(int N);
int c(int N);
int d(int N);

int main(){
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int N; cin>>N;
  for(int i=0; i<N; i++) cin>>num[i];
  sort(num, num+N);
  cout<<a(N)<<"\n";
  cout<<b(N)<<"\n";
  cout<<c(N)<<"\n";
  cout<<d(N)<<"\n";
  return 0;
}

int a(int N){
  double res=0;
  for(int i=0; i<N; i++) res+=num[i];
  return round(res/(double)N);
}

int b(int N){
  return num[(N-1)/2];
}

int c(int N){
  int cnt=0, ans=0, temp=num[0], res=num[0];
  bool flag=false;
  for(int i=0; i<N;i++){
    if(temp==num[i]) cnt++;
    else{
      if(ans<cnt){
        ans=cnt;
        res=num[i-1];
        flag=false;
      }
      else if(ans==cnt && !flag){
        res=num[i-1];
        flag=true;
      }
      cnt=1;
      temp=num[i];
    }
  }
  if(ans<cnt) res=num[N-1];
  else if(ans==cnt && !flag) res=num[N-1];
  return res;
}

int d(int N){
  return num[N-1]-num[0];
}