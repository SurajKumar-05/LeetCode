class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> result;
        vector<int> comb;
        dfs(candidates, target, 0, comb, result);
        return result;
    }
    
    void dfs(vector<int>& candidates, int remaining, int start,
             vector<int>& comb, vector<vector<int>>& result) {
        if (remaining == 0) {
            result.push_back(comb);
            return;
        }
        for (int i = start; i < candidates.size(); ++i) {
            if (candidates[i] > remaining) {
                break;  
            }
            comb.push_back(candidates[i]);
            dfs(candidates, remaining - candidates[i], i, comb, result);
            comb.pop_back();  
        }
    }
};
