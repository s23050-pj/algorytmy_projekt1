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
    int arr[n];

    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        int num = rand() % n;
        arr[i] = num;
    }

    clock_t start = clock();

    bubbleSort(arr, 100000);

    clock_t end = clock();

    double elapsed = double(end - start) / CLOCKS_PER_SEC;

    cout << "Czas losowych: " << elapsed << "s";
}