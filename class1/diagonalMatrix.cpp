#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[][100] = {{2, 3, 4}, {3, 4, 5}, {5, 6, 9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            if (i >= j)
            {
                arr[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}