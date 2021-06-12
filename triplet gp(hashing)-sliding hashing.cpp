#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int countTripletinGP(vector<int> arr, int r){
  unordered_map<int,int> left,right;
  int n = arr.size();
  for(auto i:arr){
    left[i]=0;
    right[i]++;
  }
  int ans = 0;
  for(int i=0;i<n;i++){
    right[arr[i]]--;

    if(arr[i]%r == 0){
      int b = arr[i];
      int a = arr[i]/r;
      int c = arr[i]*r;

      ans += left[a]*right[c];
    }
    left[ans]++;
  }
  return ans;

}

int main(){
  int n,r;
  cin>>n>>r;
  vector<int> arr(n,0);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  countTripletinGP(arr,n);
  return 0;
}