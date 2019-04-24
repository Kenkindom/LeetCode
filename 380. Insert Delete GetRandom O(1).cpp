//C++ Code
//Title      Insert Delete GetRandom O(1)
//Difficulty Medium

class RandomizedSet {
public:
    /** Initialize your data structure here. */
    RandomizedSet() {
        
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        vector<int>::iterator iter;
        iter = find(s.begin(), s.end(), val);
        if(iter == s.end())
        {
            s.push_back(val);
            return true;
        }
        else
            return false;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        vector<int>::iterator iter;
        iter = find(s.begin(), s.end(), val);
        if(iter != s.end())
        {
            s.erase(iter);
            return true;
        }
        else
            return false;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        return s[rand() % s.size()];
    }
private:
    vector<int> s;
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
