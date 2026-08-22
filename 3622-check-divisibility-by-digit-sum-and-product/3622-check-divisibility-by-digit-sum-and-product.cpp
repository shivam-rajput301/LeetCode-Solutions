class Solution {
public:
    bool checkDivisibility(int n) {
        int temp = n;
        int sum = 0;
        int mul = 1;
        while(temp > 0) {
            int digit = temp % 10;
            sum = sum + digit;
            mul = mul * digit;
            temp = temp / 10;
        }
        int tsum = sum + mul;
        if(n % tsum == 0) {
            return true;
        } else {
            return false;
        }
    }
};