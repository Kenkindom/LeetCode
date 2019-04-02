//C++ Code
//Title      Count Primes
//Difficulty Easy

class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2)
            return 0;
        vector<int> prime;
        prime.push_back(2);
        
        for(int i = 3; i < n; i += 2)
        {
            int j = 0;
            for(; j < prime.size(); j++)
            {
                if(prime[j] * prime[j] > i)
                {
                    j = prime.size();
                    break;
                }
                if(i % prime[j] == 0)
                    break;
            }
            if(j == prime.size())
                prime.push_back(i);
        }
        
        return prime.size();
    }
};
