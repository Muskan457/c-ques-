#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i, j;
    int row, col;

    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> col;

 
    vector<vector<int>> array(row, vector<int>(col));


    cout << "Enter the elements:\n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> array[i][j];
        }
    }

cout << "\nMatrix is:\n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
