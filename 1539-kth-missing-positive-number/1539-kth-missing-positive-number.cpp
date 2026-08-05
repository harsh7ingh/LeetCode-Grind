class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
    int n=arr.size();
    int low=0;int high=n-1;
  while(low<=high){
    int mid=low+(high-low)/2;int cnt=arr[mid]-mid-1;
    if(cnt>=k){
        high=mid-1;
    }
    else{
        low=mid+1;
    }
  }
  int result=low+k;
  return result;}
};