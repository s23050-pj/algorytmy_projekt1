#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high- 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}


void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {

        int pi = partition(arr, low, high);


        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int n = 10000;
    int arr3[n];
    for(int i=0; i < n; i++) {
        arr3[i] = n;
        n--;
    }

    clock_t start3 = clock();

    quickSort(arr3, 0,  10000);

    clock_t end3 = clock();

    double elapsed3 = double(end3 - start3) / CLOCKS_PER_SEC;

    cout << "Czas odwrotnych: " << elapsed3 << "s";
}
