#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int size;
  
  cout << "Enter matrix size: ";
  cin  >> size;
  
  int matrix[10][10];
  
  for (int row = 0; row < size; row++) {
    for (int col = 0; col < size; col++) {
      cout << "Enter element [" << row << "][" << col << "]: ";
      cin  >> matrix[row][col];
    }
  }
  
  cout << "\nMatrix:\n";
  for (int row = 0; row < size; ++row) {
    for (int col = 0; col < size; ++col) {
      cout << matrix[row][col] << " ";
    }
    cout << endl;
  }
  
  int sum = 0;
  int count = 0;
  
  for (int row = 0; row < size; ++row) {
    for (int col = row + 1; col < size; ++col) {
      if (matrix[row][col] > 0) {
        sum += matrix[row][col];
        ++count;
      }
    }
  }
  
  cout << "\nsum of posotive numbers up the main diagonal: "  << sum   << endl;
  cout << "number of positive elements above main diagonal: " << count << endl;
  
  return 0;
}
