class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        if(matrix.size() == 0) return res;
        
        int rowstart = 0 , colstart = 0 ;
        int rowend = matrix.size()-1 , colend = matrix[0].size() -1;
        
        while(rowstart <= rowend and colstart <= colend){
            for(int i = colstart ; i<=colend ; i++){
                res.push_back(matrix[rowstart][i]);
            }
            rowstart++;
            
            for(int i = rowstart ; i<=rowend ; i++){
                res.push_back(matrix[i][colend]);
            }
            colend--;
            
            if (rowstart <= rowend){
                for(int i = colend ; i>=colstart ; i--){
                    res.push_back(matrix[rowend][i]);
                }
            }
            rowend--;
            
            if (colstart <= colend){
                for(int i = rowend ; i>=rowstart ; i--){
                    res.push_back(matrix[i][colstart]);
                }
            }
            
            colstart++;
        }
        return res;
    }
};