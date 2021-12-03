// <!--
//  ============================
//  @Author  :        raja_5
//  @Version :        1.0
//  @Date    :        03 Dec 2021
//  @Detail  :        Divide Two Integers (LeetCode)
//  ============================
//  -->

class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        
        long dnd = labs(dividend), dsr = labs(divisor);
        int sign = dividend > 0 ^ divisor > 0 ? -1 : 1;
        long result = 0;
        while(dnd >= dsr)
        {
            long poten = dsr, times = 1;
            while((1ll * poten) << 1 <= dnd)
            {
                poten <<= 1;
                times <<= 1;
            }
            dnd -= poten;
            result += times;
        }
        return sign * result;
    }
};
