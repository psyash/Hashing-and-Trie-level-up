#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
    int l;
    cin>>l;
    unordered_set<int> s;
    for(int i=0;i<l;i++){
      int x;
      cin>>x;
      s.insert(x);
    }
    
    int q;
    cin>>q;
    while(q--){
      int query;
      cin>>query;
      cout<< (s.find(query) != s.end() ? "yes":"no")<<endl;

    }
    }
    return 0;
}
