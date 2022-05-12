// LeetCode - 42. Trapping Rain Water

// Two Pointers

class Solution {
public:
    int trap(vector<int>& height) {
        if (height.size() == 1)
            return 0;
        int l = 0;
        int r = height.size() - 1;
        int ret = 0, lm = ret, rm = lm; 
        
        while (l != r + 1) {
            if (height.at(l) < height.at(r)) {
                lm = max(lm, height.at(l));
                ret += lm - height.at(l++);   
            }
            else {
                rm = max(rm, height.at(r));
                ret += rm - height.at(r--);  
            }
        }
        return ret;
    }
};