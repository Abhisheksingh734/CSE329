#include <bits/stdc++.h>

using namespace std;

void customReverse(int arr[], int start, int end)
{
    int i = start;
    int j = end - 1;

    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

void rotateLeft(int arr[], int n, int k)
{
    customReverse(arr, 0, k);
    customReverse(arr, k, n);
    customReverse(arr, 0, n);
}

void rotateRight(int arr[], int n, int k)
{

    customReverse(arr, 0, (n - k));
    customReverse(arr, (n - k), n);
    customReverse(arr, 0, n);
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    rotateLeft(arr, 10, 3);
    rotateRight(arr, 10, 5);

    for (auto x : arr)
    {
        cout << x << " ";
    }
}
