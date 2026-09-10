class Solution {
public:
   int searchRow(vector<vector<int>> &matrix, int target){
        int low=0, high=matrix.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(matrix[mid][0]<=target) low=mid+1;
            else high=mid-1;
        }
        return high;}
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
               int row=searchRow(matrix, target);
        if(row==-1) return false;
        
        int low=0, high=matrix[row].size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(matrix[row][mid]<target) low=mid+1;
            else if(matrix[row][mid]>target) high=mid-1;
            else return true;
        }
        return false; 
    }
};