#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i) {
        swap(arr[i], arr[largest]);

        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);

        heapify(arr, i, 0);
    }
}

int main()
{
    int n = 500000;
    int arr3[n];
    for(int i=0; i < n; i++) {
        arr3[i] = n;
        n--;
    }

    clock_t start3 = clock();

    heapSort(arr3, 500000);

    clock_t end3 = clock();

    double elapsed3 = double(end3 - start3) / CLOCKS_PER_SEC;

    cout << "Czas odwrotne: " << elapsed3 << "s";
}
