#include <stdio.h>

void insertion_sort(int * arr, size_t size)
{
    int front = 1;

    while (front < size) {
        int index = front;
        int tmp = arr[front];
        while (index >= 1 && arr[index - 1] > tmp) {
            arr[index] = arr[index - 1];
            index--;
        }
        arr[index] = tmp;

        front++;
    }

}

int main()
{
    int arr[8] = { 3, 1, 4, 1, 5, 9, 2, 6 };
    insertion_sort(arr, 8);

    for (int i = 0; i < 8; i++) {
        printf("%d ", arr[i]);
    }
    putchar('\n');

    return 0;
}
