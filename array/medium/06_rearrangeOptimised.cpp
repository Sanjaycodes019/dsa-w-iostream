#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    vector<int> pos, neg, ans;
    
    // Separate positives and negatives
    for (int num : nums) {
        if (num > 0) pos.push_back(num);
        else neg.push_back(num);
    }
    
    // Alternate placing from pos and neg
    int i = 0, j = 0;
    while (i < pos.size() && j < neg.size()) {
        ans.push_back(pos[i++]);
        ans.push_back(neg[j++]);
    }
    
    // If any remaining positive or negative (for safety)
    while (i < pos.size()) ans.push_back(pos[i++]);
    while (j < neg.size()) ans.push_back(neg[j++]);
    
    return ans;
}
