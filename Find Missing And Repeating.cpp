// <!--
//  ============================
//  @Author  :        raja_5
//  @Version :        1.0
//  @Date    :        29 Dec 2021
//  @Detail  :        Find Missing And Repeating (GeeksforGeeks)
//  ============================
//  -->

class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        int temp = 0;
        for(int i = 0; i < n; i++)
            temp ^= arr[i];
        for(int i = 1; i <=n; i++)
            temp ^= i;
        int sb = temp & ~(temp - 1);
        int x = 0, y = 0;
        for(int i = 0; i < n; i++)
            if(sb & arr[i])
                x ^= arr[i];
            else
                y ^= arr[i];
        for(int i = 1; i <= n; i++)
            if(sb & i)
                x ^= i;
            else
                y ^= i;
        int *result = new int[2];
        for(int i = 0; i < n; i++)
            if(arr[i] == x)
            {
                result[0] = x;
                result[1] = y;
                return result;
            }
        result[0] = y;
        result[1] = x;
        return result;
    }
};
