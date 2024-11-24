#include<iostream>
using namespace std;

void Merge(int *a, int s, int e) {
    int mid = (s + e) / 2;
    int l1 = mid - s + 1;
    int l2 = e - mid;

    int *c1 = new int[l1];
    int *c2 = new int[l2];

    int k = s;
    for (int i = 0; i < l1; i++) {
        c1[i] = a[k++];
    }

    k = mid + 1;
    for (int j = 0; j < l2; j++) {
        c2[j] = a[k++];
    }

    // Merge both copy arrays
    int p1 = 0, p2 = 0;
    k = s;
    while (p1 < l1 && p2 < l2) {
        if (c1[p1] < c2[p2]) {
            a[k++] = c1[p1++];
        } else {
            a[k++] = c2[p2++];
        }
    }

    while (p1 < l1) {
        a[k++] = c1[p1++];
    }

    while (p2 < l2) {
        a[k++] = c2[p2++];
    }

    delete[] c1;
    delete[] c2;
}

void MergeSort(int *a, int s, int e) {
    // Base case
    if (s >= e) return;

    // Processing
    int mid = (s + e) / 2;

    // Recursive calls
    MergeSort(a, s, mid);  // Left part
    MergeSort(a, mid + 1, e);  // Right part

    // Merge
    Merge(a, s, e);
}

void Print(int a[], int n) {
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}

int main() {
    int a[] = {9, 6, 0, 2, 9, 8, 7, 87, 12, 32, -1};
    int n = sizeof(a) / sizeof(int);

    MergeSort(a, 0, n - 1);
    Print(a, n);

    return 0;
}
