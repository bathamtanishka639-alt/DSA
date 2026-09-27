class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int startr=0;
        int endr=m-1;
        int startcol=0;
        int endcol=n-1;
        vector<int>ans;
        while(startr<=endr && startcol<=endcol){
            //top
            for(int j=startcol;j<=endcol;j++){
                ans.push_back(matrix[startr][j]);

            }
            //right
            for(int i=startr+1;i<=endr;i++){
                ans.push_back(matrix[i][endcol]);
            }
            //bottom
            for(int j=endcol-1;j>=startcol;j--){
                if(endr==startr){
                    break;
                }
                ans.push_back(matrix[endr][j]);
            }
            //left
            for(int i=endr-1;i>=startr+1;i--){
                if(endcol==startcol){
                    break;
                }
                ans.push_back(matrix[i][startcol]);
            }
            startr++;
            endr--;
            startcol++;
            endcol--;
        }
        return ans;
        
    }
};