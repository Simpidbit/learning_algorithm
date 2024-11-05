// selection sort
// Simpidbit <2766277616@qq.com>

#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

using std::vector;

#define PRINTV(vec) for (auto each : vec) cout << each << endl;

void selection_sort(vector<int>::iterator begin, vector<int>::iterator end)
{
    auto sorted_front_iter = begin;
    auto cursor = begin;
    auto min = *begin;
    auto miniter = begin;

    while (sorted_front_iter != end) {
        // 初始化
        cursor = sorted_front_iter;
        min = *cursor;
        miniter = cursor;

        // 找最小值
        while (cursor != end) {
            if (*cursor < min) {
                min = *cursor;
                miniter = cursor;
            }
            cursor++;
        }

        // 交换
        *miniter = *sorted_front_iter;
        *sorted_front_iter = min;

        sorted_front_iter++;
    }
}

int main()
{
    vector<int> v = { 3, 1, 4, 1, 5, 9, 2, 6 };
    selection_sort(v.begin(), v.end());
    PRINTV(v);

    return 0;
}
