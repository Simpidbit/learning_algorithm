// bubble sort
// Simpidbit <2766277616@qq.com>

#include <stdio.h>

void bubble_sort(int * arr, size_t size)
{
    int surface = size;
    int cursor;

    while (surface != 0){
        // 初始化
        cursor = 0;

        // 交换
        while (cursor != surface - 1) {
            if (arr[cursor] > arr[cursor + 1]) {
                arr[cursor + 1] ^= arr[cursor];
                arr[cursor] ^= arr[cursor + 1];
                arr[cursor + 1] ^= arr[cursor];
            }

            cursor++;
        }

        surface--;
    }
}

int main()
{
    int arr[8] = { 3, 1, 4, 1, 5, 9, 2, 6 };
    bubble_sort(arr, 8);

    for (int i = 0; i < 8; i++) {
        printf("%d ", arr[i]);
    }
    putchar('\n');


    return 0;
}
