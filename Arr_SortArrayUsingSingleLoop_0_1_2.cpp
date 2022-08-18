#include <iostream>
#include <vector>
#include <algorithm>

void sort012(std::vector<int>& a)
{
    int lo = 0;
    int hi = a.size() - 1;
    int mid = 0;

    // Iterate till all the elements
    // are sorted
    while (mid <= hi) {
        switch (a[mid]) {

            // If the element is 0
        case 0:
            std::swap(a[lo++], a[mid++]);
            break;

            // If the element is 1 .
        case 1:
            mid++;
            break;

            // If the element is 2
        case 2:
            std::swap(a[mid], a[hi--]);
            break;
        }
    }
}
int main()
{
    std::vector<int> myVect{ 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
    sort012(myVect);
    for (auto x : myVect)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}
