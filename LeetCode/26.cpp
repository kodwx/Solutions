// LeetCode - 26. Remove Duplicates from Sorted Array

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        if (len == 1)
            return 1;
        int p = nums.at(0);
        int a = 0;
        for (int i = 1; i < len; i++) {
            if (nums.at(a) == nums.at(i)) 
                continue;
            nums.at(++a) = nums.at(i);
            p = nums.at(i);
        }
        return ++a;
    }
};