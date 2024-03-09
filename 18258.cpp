#include<iostream>
#include<queue>
using namespace std;

int main(){
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  int N, num; cin>>N;
  queue<int> q;
  string s;
  while(N--){
    cin>>s;
    if(s=="push"){
      cin>>num;
      q.push(num);
    }
    else if(s=="front"){
      if(q.empty()) cout<<"-1\n";
      else cout<<q.front()<<"\n";
    }
    else if(s=="back"){
      if(q.empty()) cout<<"-1\n";
      else cout<<q.back()<<"\n";
    }
    else if(s=="pop"){
      if(q.empty()) cout<<"-1\n";
      else{
        cout<<q.front()<<"\n";
        q.pop();
      }
    }
    else if(s=="size") cout<<q.size()<<"\n";
    else if(s=="empty") cout<<q.empty()<<"\n";
  }

  return 0;
}