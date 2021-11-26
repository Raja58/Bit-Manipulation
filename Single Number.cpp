// <!--
//  ============================
//  @Author  :        raja_5
//  @Version :        1.0
//  @Date    :        26 Nov 2021
//  @Detail  :        Single Number (LeetCode)
//  ============================
//  -->

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(int &x : nums)
            result ^= x;
        return result;
    }
};
