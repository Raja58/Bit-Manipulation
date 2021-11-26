// <!--
//  ============================
//  @Author  :        raja_5
//  @Version :        1.0
//  @Date    :        26 Nov 2021
//  @Detail  :        Single Number III (LeetCode)
//  ============================
//  -->

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long temp = 0;
        for(int &x : nums)
            temp ^= x;
        temp &= ~(temp - 1);
        
        int a = 0, b = 0;
        for(int &x : nums)
            if(x & temp)
                a ^= x;
            else
                b ^= x;
        return {a, b};
    }
};
