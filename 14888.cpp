#include <iostream>
using namespace std;

int N;
int num[11];
int oper[4];
int min_n=1000000001;
int max_n=-1000000001;

void getanswer(int R, int M);

int main(){
    cin>>N;
    for(int i=0; i<N; i++) cin>>num[i];
    for(int i=0; i<4; i++) cin>>oper[i];
    getanswer(num[0],1);
    cout<<max_n<<"\n"<<min_n;
}

void getanswer(int R, int M){
  if(M==N){
    if(R>max_n) max_n=R;
    if(R<min_n) min_n=R;
    return;
  }
  for(int i=0; i<4; i++){
    if(oper[i]>0){
        oper[i]--;
        if(i==0) getanswer(R+num[M], M+1);
        else if(i==1) getanswer(R-num[M], M+1);
        else if(i==2) getanswer(R*num[M], M+1);
        else getanswer(R/num[M], M+1);
        oper[i]++;
    }
  }
  return;
}