
int subarrayWithDistinctEle(int *arr, int n){
  unordered_set<int> s;
  int j=0;
  int ans = 0;
  for(int i=0;i<n;i++){
    while(j<n and s.find(arr[j]) == s.end()){
      s.insert(arr[j]);
      j++;
    }
    ans += ((j-i)*(j-i+1))/2;
    s.erase(arr[i]);
  }
  return ans;
}