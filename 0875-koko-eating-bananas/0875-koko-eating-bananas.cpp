class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();int p=0;int low=1;
        for(int i=0;i<n;i++){
            p=max(p,piles[i]);
        } int high=p;
        while(low<=high){
        int mid=low+(high-low)/2;long long hour=0;
        for(int i=0;i<n;i++){
            hour+=(piles[i]+mid-1)/mid;
            }
      if(hour>h){low=mid+1;}
      else{high=mid-1;}
        }

   return low; }
};