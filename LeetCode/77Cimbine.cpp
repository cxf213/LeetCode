#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;
    vector<vector<int>> combine(int n, int k) {
        if (k <= 0 || k > n) return ans;
        dfs(n, k, 1);
        return ans;
    }
    void dfs(int n, int k, int begin) {
        if (path.size() == k) {
            ans.push_back(path);
        }

        for (int i = begin; i <= n; i++) {
            path.push_back(i);
            dfs(n, k, i + 1);
            path.pop_back();
        }
    }
};
//https://leetcode-cn.com/problems/combinations/
//深度优先搜索+回溯实现