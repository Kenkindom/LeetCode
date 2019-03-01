//C++ Code
//Title      Merge Intervals
//Difficulty Mediun

/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
struct compInterval 
{
    bool operator()(const Interval &a, const Interval &b) const {
        return a.start<b.start;
    }
};

class Solution {
public:
    vector<Interval> merge(vector<Interval>& intervals) {
        vector<Interval> ans;
        if(intervals.size() == 0)
            return ans;
        
        sort(intervals.begin(), intervals.end(), compInterval());
        int i = 1, size = intervals.size();
        
        while(i < size)
        {
            if(intervals[i-1].end >= intervals[i].start)
            {
                int newStart = min(intervals[i-1].start, intervals[i].start);
                int newEnd = max(intervals[i-1].end, intervals[i].end);
                Interval newInterval(newStart, newEnd);
                intervals.insert(intervals.begin()+i+1, newInterval);
                intervals.erase(intervals.begin()+i-1, intervals.begin()+i+1);
                i--;
                size--;
            }
            i++;
        }
        
        return intervals;
    }
};
