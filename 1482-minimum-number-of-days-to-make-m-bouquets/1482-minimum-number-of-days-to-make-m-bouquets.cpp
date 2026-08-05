class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();int h=INT_MIN;int l=INT_MAX;
    if((long long)m*k>n){return -1;}
        for(int i=0;i<n;i++){
 h=max(h,bloomDay[i]);
 l=min(l,bloomDay[i]);
        }
        int low=l;int high=h;
        while(low<=high){int cnt=0;int b=0;
            int mid=low+(high-low)/2;
            for(int i=0;i<n;i++){
                if(bloomDay[i]<=mid){
            cnt++;
                }
                else{cnt=0;}
                if(cnt==k){b++;cnt=0;}
            }
            if(b>=m){high=mid-1;}
            else{low=mid+1;}
        }
   return low;}
};