#include <iostream>
#include <vector>
#include <algorithm>

void sort012(std::vector<int>& a)
{
    int lo = 0;
    int hi = a.size() - 1;

    // Iterate till all the elements
    // are sorted
    while (lo <= hi) 
    {
        if (a[lo] == 1)
        {
            if (a[hi] != 1) //If already 1, then swap in next iteration
            {
                std::swap(a[lo], a[hi]);
            }
            hi--;
        }
        else //If already 0, then increment to next element
        {
            lo++;
        }
    }
}
int main()
{
    std::vector<int> myVect{ 0, 1, 1, 0, 1, 1,  0, 0, 0, 1 };
    sort012(myVect);
    for (auto x : myVect)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}
