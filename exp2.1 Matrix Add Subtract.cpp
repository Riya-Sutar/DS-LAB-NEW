#include <iostream>
using namespace std;

int main() {
    // Renamed 'c' to 'cols' to avoid conflict with matrix 'c'
    int a[10][10], b[10][10], res[10][10], rows, cols; 
    
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;
    
    cout << "Matrix A:\n";
    for(int i=0; i<rows; i++) 
        for(int j=0; j<cols; j++) 
            cin >> a[i][j];
    
    cout << "Matrix B:\n";
    for(int i=0; i<rows; i++) 
        for(int j=0; j<cols; j++) 
            cin >> b[i][j];
    
    cout << "A + B =\n";
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            res[i][j] = a[i][j] + b[i][j];
            cout << res[i][j] << " ";
        }
        cout << "\n";
    }
    
    cout << "A - B =\n";
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            res[i][j] = a[i][j] - b[i][j];
            cout << res[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
