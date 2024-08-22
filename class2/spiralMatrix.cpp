#include <bits/stdc++.h>

using namespace std;

void printSprialMatrix(vector<vector<int>> &arr, int r, int c)
{
    int left = 0;
    int right = c - 1;
    int top = 0;
    int bottom = r - 1;

    while (top <= bottom && left <= right)
    {

        for (int i = left; i <= right; i++)
        {
            cout << arr[top][i] << " ";
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            cout << arr[i][right] << " ";
        }
        right--;

        if (bottom >= top)
        {
            for (int i = right; i >= left; i--)
            {
                cout << arr[bottom][i] << " ";
            }
            bottom--;
        }

        if (left <= right)
        {

            for (int i = bottom; i >= top; i--)
            {
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }
}

int main()
{
    // vector<vector<int>> arr(4, vector<int>(6));
    vector<vector<int>> arr = {{2, 3, 4, 5}, {5, 6, 7, 8}, {8, 9, 5, 4}, {2, 5, 7, 9}};
    printSprialMatrix(arr, 4, 4);
}