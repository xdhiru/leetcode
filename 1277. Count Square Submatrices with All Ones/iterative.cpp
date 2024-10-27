class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int size=min(m,n);
        int sum=0;
        for (int s=1;s<=size;s++){
            for (int i=0;i<=m-s;i++){
                for (int j=0;j<=n-s;j++){
                    bool issq=1;
                    for (int x=0;x<s;x++){
                        for (int y=0;y<s;y++){
                            if (matrix[x+i][j+y]==0){
                                issq=0;
                                break;
                            }
                        }
                        if (!issq) break;
                    }
                    if (issq) sum++;
                }
            }
        }
        return sum;
    }
};