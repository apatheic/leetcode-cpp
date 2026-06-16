class Solution {
public:
    int mirrorDistance(int n) {
        int original = n;
        int rev_n = 0;
        while (n > 0) {
            rev_n = rev_n * 10 + n % 10;
            n = n / 10;
        }
        return abs(original - rev_n);
    }   
};
