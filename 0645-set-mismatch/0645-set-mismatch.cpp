class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {long long n=nums.size();long long sum=0;long long sum2=0;long long q=0;long long d=0;long long m=0;long long l=0;vector<int> ans;long long r=0;
        for(int i=0;i<n;i++){
sum+=nums[i];sum2+=pow(nums[i],2);
        }
l=sum-(n*(n+1)/2);
r=sum2-(n*(n+1)*(2*n+1)/6);
q=(r/l);
d=(l+q)/2;ans.push_back(d);
m=n*(n+1)/2-(sum-d);ans.push_back(m);
  return ans; }
};