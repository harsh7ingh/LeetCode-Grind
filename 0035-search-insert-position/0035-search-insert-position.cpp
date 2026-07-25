class Solution {
public:
int binarysearch(vector<int> &nums,int low,int high,int target){
    if(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]>target){
            return binarysearch(nums,low,mid-1,target);
        }
        else if(nums[mid]<target){
            return binarysearch(nums,mid+1,high,target);
        }
        else{
            return mid;
        }
}
  return low;}
    int searchInsert(vector<int>& nums, int target) {
             int n=nums.size();

    return binarysearch(nums,0,n-1,target);
    }
};