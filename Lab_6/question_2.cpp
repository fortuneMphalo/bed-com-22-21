#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Get dimensions from the user
    cout << "Enter the number of rows ( number<=3): ";
    cin >> rows;
    cout << "Enter the number of columns (number<=3): ";
    cin >> cols;

    /*Allocating the dyanamic memory in 2D*/
    double** arr = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        arr[i] = new double[cols];
    }

    // Assign values to each element
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter value for element at row " << i + 1 << ", column " << j + 1 << ": ";
            cin >> arr[i][j];
        }
    }

    // Output the values
    cout << "\nArray values:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    // Clean up: deallocate memory
    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
