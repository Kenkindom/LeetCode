//C++ Code
//Title      Guess Number Higher or Lower
//Difficulty Easy

// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        long left = 1, right = n;
        long mid = 0;
        while(1)
        {
            mid = (left + right) / 2;
            long ans = guess(mid);
            if(ans == -1)
                right = mid-1;
            else if(ans == 1)
                left = mid+1;
            else
                break;
        }
        return mid;
    }
};
