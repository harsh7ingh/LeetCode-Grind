class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int high=accumulate(weights.begin(),weights.end(),0);
        int low=*max_element(weights.begin(),weights.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            int weight=0;int d=1;
            for(int i=0;i<n;i++){
                if(weight+weights[i]>mid){
                  d++;
                  weight=0;
                }
                weight+=weights[i];
            }     
            if(days>=d){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
  return low;}
};