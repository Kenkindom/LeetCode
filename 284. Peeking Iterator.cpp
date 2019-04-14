//C++ Code
//Title      Peeking Iterator
//Difficulty Medium

// Below is the interface for Iterator, which is already defined for you.
// **DO NOT** modify the interface for Iterator.
class Iterator {
    struct Data;
	Data* data;
public:
	Iterator(const vector<int>& nums);
	Iterator(const Iterator& iter);
	virtual ~Iterator();
	// Returns the next element in the iteration.
	int next();
	// Returns true if the iteration has more elements.
	bool hasNext() const;
};


class PeekingIterator : public Iterator {
public:
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
	    // Initialize any member here.
	    // **DO NOT** save a copy of nums and manipulate it directly.
	    // You should only use the Iterator interface methods.
	    flag = false;
	}

    // Returns the next element in the iteration without advancing the iterator.
	int peek() {
        if(flag == false)
            value = Iterator::next();
        flag = true;
        return value;
	}

	// hasNext() and next() should behave the same as in the Iterator interface.
	// Override them if needed.
	int next() {
	    if (flag == false) 
            return Iterator::next();
        flag = false;
        return value;
	}

	bool hasNext() const {
	    return flag || Iterator::hasNext();
	}
private:
    bool flag;
    int value;
};
