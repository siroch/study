#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(){
  while(true){
    string S; getline(cin, S);
    if(S==".") break;
    stack<char> stack;
    bool flag=0;
    for(int i=0; i<S.length(); i++){
      char c=S[i];
      if((c=='(') || (c=='[')) stack.push(c);
      else if(c==')'){
        if(!stack.empty() && stack.top()=='(') stack.pop();
        else{
          flag=1; break;
        }
      }
      else if(c==']'){
        if(!stack.empty() && stack.top() == '[') stack.pop();
        else{
          flag=1; break;
        }
      }
    }
    if(flag==0 && stack.empty()) cout<<"yes\n";
    else cout<<"no\n";
  }
  return 0;
}