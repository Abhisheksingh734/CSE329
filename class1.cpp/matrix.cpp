#include <bits/stdc++.h>

using namespace std;

void matrixMultiplication(int arr1[][100], int arr2[][100], int arr3[][100], int r1, int c1, int c2)
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            arr3[i][j] = 0;
        }
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {

            for (int k = 0; k < c1; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
}

int main()
{

    int r1, r2, c1, c2;

    cout << "Give size of matrix1 and matrix2" << endl;

    cin >> r1 >> c1 >> r2 >> c2;

    if (c1 != r2)
    {
        return 0;
    }

    int arr1[100][100], arr2[100][100], arr3[100][100];

    cout << "Give input to First Matrix " << endl;

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> arr1[i][j];
        }
    }

    cout << "Give input to Second Matrix " << endl;

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> arr2[i][j];
        }
    }

    matrixMultiplication(arr1, arr2, arr3, r1, c1, c2);

    cout << "Resultant matrix " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
}