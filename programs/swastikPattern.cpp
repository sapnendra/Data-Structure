#include <iostream>
using namespace std;

int main() {

    int total_rows;
    cin >> total_rows;

    for (int row = 0; row < total_rows * 2 - 1; row++) {

        for (int col = 0; col < total_rows * 2 - 1; col++) {
            if ((row == total_rows - 1) ||
                (row < total_rows - 1 && col == 0) ||
                (row > total_rows - 1 && col == 2 * total_rows - 2) ||
                (col == total_rows - 1) || (row == 0 && col >= total_rows - 1) ||
                (row == 2 * total_rows - 2 && col < total_rows - 1)) 
            {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        
        cout << endl;
    }
    return 0;
}