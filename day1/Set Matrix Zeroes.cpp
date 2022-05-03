class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_map<int,int> is,js;
        
        int n=matrix.size(),m = matrix[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j] == 0){
                    is[i] = 1;
                    js[j] = 1;
                }
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(is[i] == 1 or js[j] == 1){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};