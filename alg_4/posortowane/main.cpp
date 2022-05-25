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
    int arr2[n];
    for(int i=0; i<n; i++) {
        arr2[i] = i;
    }


    clock_t start2 = clock();

    bubbleSort(arr2, 100000);

    clock_t end2 = clock();

    double elapsed2 = double(end2 - start2) / CLOCKS_PER_SEC;

    cout << "Czas posortowanych: " << elapsed2 << "s";
}