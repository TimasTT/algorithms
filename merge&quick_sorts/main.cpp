#include <iostream>
#include <ctime>

void merge(int *a, int start, int mid, int end) {
    int p = start, q =  mid + 1;
    int arr[end-start + 1], k = 0;

    for (int i = start; i <= end; i++) {
        if (p > mid) {
            arr[k++] = a[q++];
        } else if (q > end) {
            arr[k++] = a[p++];
        } else if (a[p] < a[q]) {
            arr[k++] = a[p++];
        } else {
            arr[k++] = a[q++];
        }
    }

    for (int i = 0; i < k; i++) {
        a[start++] = arr[i];
    }
}

void sort(int *a, int l, int m) {
    if (l < m) {
        sort(a, l, (l+m)/2);
        sort(a, (l+m)/2+1, m);
        merge(a, l, (l+m)/2, m);
    }
}

int patr_sort(int* a, int start, int end) {
    int pivot = a[start];
    int i = start + 1;
    for (int j = start + 1; j <= end; j++) {
        if (a[j] < pivot) {
            std::swap(a[j], a[i]);
            i++;
        }
    }
    std::swap(a[i - 1], a[start]);
    return i - 1;
}

void quick_sort(int* a, int start, int end) {
    if (start < end) {
        int piv_pos = patr_sort(a, start, end);
        quick_sort(a, start, piv_pos - 1);
        quick_sort(a, piv_pos + 1, end);
    }
}

int main() {
    int *a = new int[13];

    for (int i = 0; i < 13; ++i) {
        a[i] = rand()%10;
    }

    for (int i = 0; i < 13; ++i) {
        std::cout << a[i] << " ";
    }

    std::cout << std::endl;

    quick_sort(a, 0,12);

    for (int i = 0; i < 13; ++i) {
        std::cout << a[i] << " ";
    }
    return 0;
}
