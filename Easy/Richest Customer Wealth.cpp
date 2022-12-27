class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int Max=0,Total=0;
        for (int i=0;i<accounts.size();i++){
            for (int j=0;j<accounts[i].size();j++){
                Total+=accounts[i][j];
            }
            if(Total>=Max){
                Max=Total;
            }
            Total=0;
            
        }
        return Max;
    }
};
