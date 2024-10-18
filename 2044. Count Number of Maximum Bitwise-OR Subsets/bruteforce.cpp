class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int maxid=0,maxidx=0;
        for (int i=0;i<(1<<nums.size());i++){
            int maxor=0;
            for (int j=0;j<nums.size();j++){
                if ((1<<j)&i){
                    maxor=maxor|nums[j];
                }
            }
            if (maxor>maxid){
                maxid=maxor;
                maxidx=1;
            }
            else if (maxor==maxid){
                maxidx+=1;
            }
        }
        return maxidx;
    }
};