class Solution {
public:
int firstoccurence(vector<int> &nums,int low,int high,int target){int ans1=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target){
            ans1=mid;
            high=mid-1;
        }
          else if(nums[mid]>target){
            high=mid-1;}
        else{
           low=mid+1;
        }
          }
return ans1;}
int secondoccurence(vector<int> &nums,int low,int high,int target){int ans2=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target){
            ans2=mid;
            low=mid+1;
        }
          else if(nums[mid]>target){
            high=mid-1;}
        else{
           low=mid+1;
        }
          }
return ans2;}
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;int n=nums.size();
        int  fo=firstoccurence(nums,0, n-1, target);
        if(fo==-1){return{-1,-1};}
        int so=secondoccurence(nums,0,n-1, target);

    return{fo,so};}
};