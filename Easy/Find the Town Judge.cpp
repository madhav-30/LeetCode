class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int,int> umap;
        if(trust.empty()==false){
            for(int i=0; i<trust.size(); i++){
                umap[trust[i][1]]++;
            }
            int ans=1;
            for(auto x: umap){
                if(x.second==(n-1))
                    ans= x.first;
            }

            for(int i=0; i<trust.size(); i++){
                if(ans==trust[i][0])
                    return -1;
            }
            return ans;
        }
        else if(trust.empty()==true && n<2)
            return 1;
        
        else
            return -1;
        return -1;
    }
};
