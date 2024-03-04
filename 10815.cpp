#include<iostream>
#include<algorithm>
using namespace std;

int research(int card[], int size, int find_num);

int main(){
  int N,M; cin>>N;
  int card1[N];
  for(int i=0; i<N; i++) cin>>card1[i];
  cin>>M;
  int card2[M];
  for(int i=0; i<M; i++) cin>>card2[i];
  sort(card1, card1+N);
  int ans[M]={0,};
  for(int i=0; i<M; i++) ans[i] = research(card1, N, card2[i]);
  for(int i=0; i<M; i++) cout<<ans[i]<<" ";
  return 0;
}

int research(int card[], int size, int find_num){
  int Mid, Left=0, Right=size-1;
  while(Left<=Right){
    Mid=(Left+Right)/2;
    if(find_num==card[Mid]) return 1;
    if(find_num<card[Mid]) Right=Mid-1;
    else Left=Mid+1;
  }
  return 0;
}