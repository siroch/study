#include<stdio.h>

int main(){
  int T, fib_s;
  scanf("%d", &T);
  int fib_arr_zero[41];
  int fib_arr_one[41];
  fib_arr_zero[0] = 1;
  fib_arr_zero[1] = 0;
  fib_arr_one[0] = 0;
  fib_arr_one[1] = 1;
  for(int i=2; i<41; i++){
    fib_arr_zero[i] = fib_arr_zero[i-1]+fib_arr_zero[i-2];
    fib_arr_one[i] = fib_arr_one[i-1]+fib_arr_one[i-2];
  }

  for(int i=0; i<T; i++){
    scanf("%d", &fib_s);
    printf("%d %d\n", fib_arr_zero[fib_s], fib_arr_one[fib_s]);
  }

  return 0;
}