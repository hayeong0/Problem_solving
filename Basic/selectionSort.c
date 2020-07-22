#include <stdio.h>
#define SWAP(x, y, tmp) ((tmp)=(x), (x)=(y), (y)=(tmp))

void selectionSort(int *list, int n);

int main() {
    int list[10] = {2, 10, 5, 8, 7, 1, 4, 3, 6, 9};
    
    selectionSort(list, 10);

    for (int i = 0; i < 10; i++) {
        printf("%d\n", list[i]);
    }

    return 0;
}

void selectionSort(int *list, int n) {
    int i, j, min, tmp;

    // 마지막 데이터는 자동 정렬이 되므로 n-1까지 반복
    for (i = 0; i < n-1; i++) {
        min = i;
        // 두번째 데이터부터 마지막 데이터까지 차례대로 비교하여 최솟값을 찾는다.
        for (j = i+1; j < n; j++) {
            if (list[j] < list[min]) {
                min = j;
            }
        }
        SWAP(list[i], list[min], tmp);
    }
}