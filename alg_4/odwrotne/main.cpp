#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

int main() {
    int n = 100000;
    int arr3[n];
    for(int i=0; i < n; i++) {
        arr3[i] = n;
        n--;
    }

    clock_t start3 = clock();

    bubbleSort(arr3, 100000);

    clock_t end3 = clock();

    double elapsed3 = double(end3 - start3) / CLOCKS_PER_SEC;

    cout << "Czas odwrotne: " << elapsed3 << "s";
}