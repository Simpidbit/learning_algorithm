#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;

using std::vector;

#define PRINTV(vec) for (auto each : vec) cout << each << endl;

void insertion_sort(vector<int>::iterator begin, vector<int>::iterator end)
{
    vector<int>::iterator cursor = begin;
    for (auto front = begin; front + 1 != end; front++) {
        auto later = front + 1;
        // 寻找合适的位置
        auto goback = later;
        auto later_val = *later;
        while ( *(goback - 1) > later_val && goback != begin ) {
            *goback = *(goback - 1);
            goback--;
        }
        *goback = later_val;
    }
}

int main()
{
    vector<int> vec = { 3, 1, 4, 1, 5, 9, 2, 6 };

    insertion_sort(vec.begin(), vec.end());

    PRINTV(vec)

    return 0;
}
