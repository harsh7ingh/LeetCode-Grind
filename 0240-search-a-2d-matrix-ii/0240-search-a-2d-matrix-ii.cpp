class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();int m=matrix[0].size();int i=m-1;int j=0;
        while(i>=0&&j<n){
            if(matrix[j][i]>target){
                i--;
            }
            else if(matrix[j][i]<target){j++;}
            else{return true;}
            }
   return false;}
};