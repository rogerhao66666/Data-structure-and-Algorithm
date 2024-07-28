#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        Solution(){
            cout << "Bulid Solution!" << endl;
        }
        vector<int> twoSum(vector<int>& nums, int target){
            unordered_map<int, int> umap;
            vector<int> ans;
            for (int i = 0; i < nums.size(); i++){
                if (umap.count(nums[i])){
                    ans.push_back(umap[nums[i]]);
                    ans.push_back(i);
                    break;
                }
                umap[target-nums[i]] = i;
            }
            return ans;
        }
};


int main(){
    vector<int> arr = {3,2,4};
    Solution u_solver;
    vector<int> ans = u_solver.twoSum(arr, 6);
    for (int i : ans){
        cout << i << endl;
    }
    return 0;
}