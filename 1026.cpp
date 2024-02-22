#include<stdio.h>

int main(){
  int N;
  scanf("%d\n",&N);
  int A[N],B[N];
  for(int i=0; i<N; i++) scanf("%d",&A[i]);
  for(int i=0; i<N; i++) scanf("%d",&B[i]);
  
  for(int i=1; i<N; i++){
    int j = i;
    while(j>0 && A[j-1]>A[j]){
      int tmp = A[j]; A[j] = A[j-1]; A[j-1] = tmp;
      j--;
    }
    j = i;
    while(j>0 && B[j-1]<B[j]){
      int tmp = B[j]; B[j] = B[j-1]; B[j-1] = tmp;
      j--;
    }    
  }
  int result = 0;
  for(int i=0; i<N; i++) result += A[i]*B[i];
  printf("%d\n",result);
  return 0;
}

//0 0 3 5 15 26 31 39 100
//13 12 11 9 5 4 3 2 1