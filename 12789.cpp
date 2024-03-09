#include<iostream>
#include<stack>
using namespace std;

int main(){
  int N, num, cnt=1; cin>>N;
  stack<int> line;
  while(N--){
    cin>>num;
    if(num==cnt) cnt++;
    else line.push(num);
    while(!line.empty() && line.top()==cnt){
      line.pop(); cnt++;
    }
  }
  if(line.empty()) cout<<"Nice\n";
  else cout<<"Sad\n";

  return 0;
}