//C++ Code
//Title      First Bad Version
//Difficulty Easy

// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long left = 1, right = n;
        long latest = n;
        while(left < right)
        {
            long mid = (left + right) / 2;
            if(isBadVersion(mid))
            {
                right = mid;
                latest = mid < latest ? mid : latest;
            }
            else
            {
                if(mid+1 == latest)
                    break;
                left = mid;
            }
        }
        
        return latest;
    }
};
