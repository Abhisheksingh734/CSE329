#include <bits/stdc++.h>
using namespace std;

int findPeak(vector<int> arr)
{
    if (arr.size() == 1)
        return arr[0];
    // arr size >1
    if (arr[0] > arr[1])
        return arr[0];

    if (arr[arr.size() - 1] > arr[arr.size() - 2])
        return arr[arr.size() - 1];

    for (int i = 1; i < arr.size() - 1; i++)
    {
        if (arr[i] >= arr[i + 1] && arr[i] >= arr[i - 1])
            return arr[i];
    }
}

int findPeak2(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if ((mid == 0 || arr[mid] >= arr[mid - 1]) && (mid == arr.size() - 1 || arr[mid] >= arr[mid + 1]))
        {
            return arr[mid];
        }
        else if (arr[mid - 1] > arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return -1;
}

int main()
{

    vector<int> arr = {1, 10, 11};

    cout << findPeak2(arr);
}