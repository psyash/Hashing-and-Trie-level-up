#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  unordered_map<int,int> freq;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    freq[x]++;
  }

  vector<int> ans; 

  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if(freq.find(x) != freq.end() and freq[x]>0){
      freq[x]--;
      ans.push_back(x);
    }
  }
  sort(ans.begin(), ans.end());
  for(auto it:ans){
    cout<< ans[it]<<" ";
  }
    return 0;
}
