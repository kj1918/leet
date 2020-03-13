class Solution {
public:
    void setZeroes(vector<vector<int>> &matrix) {
        vector<vector<int>> list;
        for(int y=0;y<matrix.size();y++){
            for(int x=0;x<matrix[0].size();x++){
                if(matrix[y][x]==0){
                    vector<int> t={y,x};
                    list.push_back(t);
                }
            }
        }
        for(int m=0;m<list.size();m++){
            for(int k=0;k<matrix.size();k++){
                matrix[k][list[m][1]]=0;
            }
            for(int k=0;k<matrix[0].size();k++){
                matrix[list[m][0]][k]=0;
            }
        }
    }
};
