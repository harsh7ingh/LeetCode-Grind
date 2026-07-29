class Solution {
public:
    int findKRotation(vector<int>& nums) {
        int n=nums.size();
        int low=0;int high=n-1;
        while(low<high){
            int mid=low+(high-low)/2;
            if(nums[low]<nums[high]){
                return low;
            }
            if(nums[low]<=nums[mid]){
                low=mid+1;
            }
            else{
                high=mid;
            }
        }
        return low;
    }
};
