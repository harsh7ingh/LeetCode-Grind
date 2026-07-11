class Solution{
public:
    int subarraysWithXorK(vector<int> &nums, int k) {int cnt=0;int x_or=0;int n=nums.size();unordered_map<int,int> mpp={{0,1}};
        for(int i=0;i<n;i++){
         x_or^=nums[i];
         if(mpp.find(x_or^k)!=mpp.end()){
            cnt+=mpp[x_or^k];
         }mpp[x_or]++;
        }
  return cnt;}
};
