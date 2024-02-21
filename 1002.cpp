#include<stdio.h>
#include<math.h>

int main(){
    int Tc, x1, y1, r1, x2, y2, r2;
    double dist, sub;
    scanf("%d", &Tc);
    int result[Tc];
    
    for(int i=0; i<Tc; i++){
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        dist = sqrt(pow(x1>x2 ? x1-x2 : x2-x1, 2) + pow(y1>y2 ? y1-y2 : y2-y1, 2));
        sub = r1>r2 ? r1-r2 : r2-r1;
        
        if(dist == 0 && r1 == r2) result[i] = -1;
        else if(dist < r1 + r2 && (sub < dist)) result[i] = 2;
        else if(dist == r1 + r2 || dist == sub) result[i] = 1;
        else result[i] = 0;
    }
    for(int i=0; i<Tc; i++){
      printf("%d\n",result[i]);
    }
  return 0;
}

