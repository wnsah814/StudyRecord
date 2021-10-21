#ifndef __sorted__
#define __sorted__

#include <vector>

class SortedArray {
public:
    SortedArray();
    ~SortedArray();

    void AddNumber(int num);

    std::vector<int> GetSortedAscending();
    std::vector<int> GetSortedDescending();
    int GetMax();
    int GetMin();

private:
    std::vector<int> numbers_;
};

#endif