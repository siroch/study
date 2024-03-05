#include<iostream>
#include<algorithm>
using namespace std;

int lower_research(int card[], int size, int find_num);
int upper_research(int card[], int size, int find_num);

int main(){
  int N,M; cin>>N;
  int card1[N];
  for(int i=0; i<N; i++) cin>>card1[i];
  cin>>M;
  int card2[M];
  for(int i=0; i<M; i++) cin>>card2[i];
  sort(card1, card1+N);
  int ans[M]={0,};
  for(int i=0; i<M; i++){
    int lower = lower_research(card1, N, card2[i]);
    int upper = upper_research(card1, N, card2[i]);
    if(upper==N-1 && card1[N-1]==card2[i]) upper++;
    ans[i] = upper-lower;
  }
  for(int i=0; i<M; i++) cout<<ans[i]<<" ";
  return 0;
}

int lower_research(int card[], int size, int find_num){
  int Mid, Left=0, Right=size-1;
  while(Left<Right){
    Mid=(Left+Right)/2;
    if(find_num<=card[Mid]) Right=Mid;
    else Left=Mid+1;
  }
  return Right;
}

int upper_research(int card[], int size, int find_num){
  int Mid, Left=0, Right=size-1;
  while(Left<Right){
    Mid=(Left+Right)/2;
    if(find_num<card[Mid]) Right=Mid;
    else Left=Mid+1;
  }
  return Right;
}