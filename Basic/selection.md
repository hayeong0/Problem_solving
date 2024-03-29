

### 💡 알고리즘

선택 정렬(Selection sort)은 다음과 같은 순서로 이루어진다.
> 1. 주어진 리스트에서 두번째 데이터부터 마지막 데이터까지 차례대로 비교하여 최솟값을 찾는다.
2. 찾은 최솟값을 맨 앞에 위치한 값과 바꾼다.
3. 맨 앞 위치를 제외한 나머지 리스트를 위와 같은 방법으로 진행한다.

쉽게 말해, 처음부터 배열을 쭉 훑어보면서 최솟값을 찾아 교환하고, 또 최솟값을 찾아 교환하는 방법이다. 알고리즘은 매우 단순하나, 비효율적이다. 

---

### ❓ 예제 
1학년때 C언어를 배우면서 선택 정렬을 이해할 때는 그림을 그려가며 이해하는 것이 가장 빨리 와닿았던 것 같아서, 순서에 따른 배열의 정렬 상태를 그려보았다.
![](https://images.velog.io/images/chy0428/post/c60a6984-831f-402a-8ec4-32249c535817/image.png)

---

### 💻 구현 코드 (C언어)
내가 제일 좋아하는 c언어... ^___^ 
선택 정렬 알고리즘 구현은 아래와 같이 할 수 있다. 
 
```c
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
```

---

### ⏳ 시간복잡도 
선택 정렬 알고리즘은 n-1개, n-2개, ..., 2, 1개씩 비교를 반복한다.  배열이 어떻게 구성되어 있든 전체 비교를 진행하므로, N개의 주어진 리스트를 정렬하는데는 `Θ(n^2)`만큼의 시간이 걸린다. (Best, Avg, Worst모두 O(n^2)


---
알고리즘의 기초적인 개념부터 하나하나 정리해나갈 생각이다. 
