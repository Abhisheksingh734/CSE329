#include <bits/stdc++.h>
using namespace std;

void deletion(int arr[], int &n, int pos)
{
    if (pos < 0 || pos > n)
        return;
    for (int i = pos; i <= n - 1; i++)
    {
        arr[i - 1] = arr[i];
    }
    n--;
}

void insertAtFirst(int arr[], int &n, int ele)
{
    n++;
    for (int i = n - 1; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[0] = ele;
}

void insert(int arr[], int &n, int pos, int ele)
{
    n++;
    for (int i = n - 1; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = ele;
}

int main()
{

    int arr[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;

    // insert(arr, n, 5, 23);
    // insertAtFirst(arr, n, 99);
    // deletion(arr, n, 2);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}