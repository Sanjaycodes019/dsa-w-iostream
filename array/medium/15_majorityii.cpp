class Solution {
public:
    vector<int> majorityElement(vector<int>& v) {
        int cnt1 = 0, cnt2 = 0;
        int ele1 = INT_MIN, ele2 = INT_MIN;

        for (int num : v) {
            if (cnt1 == 0 && num != ele2) {
                cnt1 = 1;
                ele1 = num;
            }
            else if (cnt2 == 0 && num != ele1) {
                cnt2 = 1;
                ele2 = num;
            }
            else if (num == ele1) cnt1++;
            else if (num == ele2) cnt2++;
            else {
                cnt1--;
                cnt2--;
            }
        }

        cnt1 = cnt2 = 0;
        for (int num : v) {
            if (num == ele1) cnt1++;
            if (num == ele2) cnt2++;
        }

        vector<int> ls;
        int mini = v.size() / 3 + 1;
        if (cnt1 >= mini) ls.push_back(ele1);
        if (cnt2 >= mini) ls.push_back(ele2);

        sort(ls.begin(), ls.end());
        return ls;
    }
};
