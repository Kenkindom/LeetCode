//C++ Code
//Title      Gas Station
//Difficulty Medium

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        if(gas.size() == 0 || gas.size() != cost.size())
            return -1;
        
        bool find = false;
        for(int i = 0; i < gas.size(); i++)
        {
            int tank = gas[i];
            int j = i;
            do
            {
                tank -= cost[j];
                if(tank < 0)
                    break;
                j++;
                if(j == gas.size())
                    j = 0;
                tank += gas[j];
            }while(j != i);
            
            if(tank > 0)
                return i;
        }
        
        return -1;
    }
};
