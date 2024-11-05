// selection sort
// Simpidbit <2766277616@qq.com>

#include <stdio.h>

void selection_sort(int * arr, size_t size)
{
    int sorted_front = 0;
    int cursor;
    int min;
    int minindex;

    while (sorted_front < size) {

        // 初始化
        cursor = sorted_front;
        min = arr[cursor];
        minindex = cursor;

        // 寻找最小值
        while (cursor < size) {
            if (arr[cursor] < min) {
                min = arr[cursor];
                minindex = cursor;
            }
            cursor++;
        }

        // 交换
        arr[minindex] = arr[sorted_front];
        arr[sorted_front] = min;

        sorted_front++;
    }
}

int main()
{
    int arr[8] = { 3, 1, 4, 1, 5, 9, 2, 6 };

    selection_sort(arr, 8);

    for (int i = 0; i < 8; i++) {
        printf("%d ", arr[i]);
    }
    putchar('\n');


    return 0;
}
