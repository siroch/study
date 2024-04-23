#include<bits/stdc++.h>
using namespace std;

vector<int> parent;

void init(int n);
int find(int x);
void merge(int x, int y);
bool isSameSet(int x, int y);

int main(){
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int n, m; cin>>n>>m;
  init(n);
  while(m--){
    int k, a, b; cin>>k>>a>>b;
    if(k==0) merge(a, b);
    else{
      if(isSameSet(a, b)) cout<<"YES\n";
      else cout<<"NO\n";
    }
  }
  
  return 0;
}

void init(int n) {
  parent.resize(n + 1);
  for (int i=0; i<=n; ++i) parent[i] = i;
}

int find(int x){
  if(parent[x] == x) return x;
  return parent[x] = find(parent[x]);
}

void merge(int x, int y){
  x = find(x);
  y = find(y);
  if(x != y) parent[y] = x;
}

bool isSameSet(int x, int y){
  return find(x) == find(y);
}