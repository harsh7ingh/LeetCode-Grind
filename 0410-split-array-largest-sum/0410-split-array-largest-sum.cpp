class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
   int n=nums.size(); int sum=0; int low=INT_MIN; int high=0;
        for(int i=0; i<n; i++){
            sum+=nums[i]; low=max(low, nums[i]);
        }
        high=sum;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            int sums=0; int cnt=1; int i=0;
            
            while(i<n){
                if(sums+nums[i]<=mid){
                    sums+=nums[i];
                    i++;
                }else{
                    cnt++;
                    sums=nums[i];
                    i++;
                }
            }
            
            if(cnt<=k){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;}
};