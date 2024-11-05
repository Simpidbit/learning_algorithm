// bubble sort
// Simpidbit <2766277616@qq.com>

#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

using std::vector;

#define PRINTV(vec) for (auto each : vec) cout << each << endl;

void bubble_sort(vector<int>::iterator begin, vector<int>::iterator end)
{
    vector<int>::iterator surface = end;
    vector<int>::iterator cursor= begin;
    while (surface != begin) {
        // 初始化
        cursor = begin;

        // 一轮冒泡
        while (cursor != surface - 1) {
            if (*cursor > *(cursor + 1)) {
                *(cursor + 1) ^= *cursor;
                *cursor ^= *(cursor + 1);
                *(cursor + 1) ^= *cursor;
            }
            cursor++;
        }
        surface--;
    }
}


int main()
{
    vector<int> vec = { 3, 1, 4, 1, 5, 9, 2, 6 };
    bubble_sort(vec.begin(), vec.end());
    PRINTV(vec);

    return 0;
}
