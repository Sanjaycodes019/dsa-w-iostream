// ✅ Rearrange Array Elements by Alternating Positive and Negative Numbers
#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    vector<int> pos, neg;
    for(auto x : nums){
        if(x > 0) pos.push_back(x);
        else neg.push_back(x);
    }

    vector<int> ans;
    int n = pos.size();  // number of positive and negative elements are equal
    for(int i = 0; i < n; i++){
        ans.push_back(pos[i]);
        ans.push_back(neg[i]);
    }
    return ans;
}

int main() {
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    vector<int> result = rearrangeArray(nums);

    for(auto x : result){
        cout << x << " ";
    }
    return 0;
}
