#include<iostream>
#include<deque>
using namespace std;

int main(){
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  int N, num; cin>>N;
  deque<int> d;
  string s;
  while(N--){
    cin>>s;
    if(s=="1"){
      cin>>num;
      d.push_front(num);
    }
    else if(s=="2"){
      cin>>num;
      d.push_back(num);
    }
    else if(s=="3"){
      if(d.empty()) cout<<"-1\n";
      else{
        cout<<d.front()<<"\n";
        d.pop_front();
      }
    }
    else if(s=="4"){
      if(d.empty()) cout<<"-1\n";
      else{
        cout<<d.back()<<"\n";
        d.pop_back();
      }
    }
    else if(s=="5") cout<<d.size()<<"\n";
    else if(s=="6") cout<<d.empty()<<"\n";
    else if(s=="7"){
      if(d.empty()) cout<<"-1\n";
      else cout<<d.front()<<"\n";
    }
    else if(s=="8"){
      if(d.empty()) cout<<"-1\n";
      else cout<<d.back()<<"\n";
    }
  }
  return 0;
}