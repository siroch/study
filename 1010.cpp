#include<stdio.h>

int main(){
  int T, N, M, result;
  scanf("%d", &T);
  for(int i=0; i<T; i++){
    result = 1;
    scanf("%d %d", &N, &M);
    for(int j=0; j<N; j++){
      result *= M-j;
      result /= j+1;
    }
    printf("%d\n",result);
  }
  return 0;
}
