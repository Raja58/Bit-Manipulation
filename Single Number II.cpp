// <!--
//  ============================
//  @Author  :        raja_5
//  @Version :        1.0
//  @Date    :        26 Nov 2021
//  @Detail  :        Single Number II (LeetCode)
//  ============================
//  -->

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(int i = 0; i < 32; i++)
        {
            int cnt = 0, bit = 1 << i;
            for(int &x : nums)
                if(x & bit)
                    cnt++;
            if(cnt % 3)
                result |= bit;
        }
        return result;
    }
};
