class Solution {
public:
    int xorOperation(int n, int start) {
        int a=0;
        for(int i=0;i<n;i++){
            int nums=start+2*i;
            a= a^nums;
        }
        return a;
    }
};