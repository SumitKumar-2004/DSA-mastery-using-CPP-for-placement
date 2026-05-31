#include <bits/stdc++.h>
using namespace std;
void setZeroesOptimal(vector<vector<int>>& matrix) {
        int m = matrix.size();       // rows
        int n = matrix[0].size();   // cols

        int col0 = 1;

        // Step 1: mark rows & cols
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (matrix[i][j] == 0) {

                    matrix[i][0] = 0;

                    if (j != 0) {
                        matrix[0][j] = 0;
                    }
                    else {
                        col0 = 0;
                    }
                }
            }
        }

        // Step 2: fill zeros
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {

                if (matrix[i][j] != 0) {

                    if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                        matrix[i][j] = 0;
                    }
                }
            }
        }

        // Step 3: first row
        if (matrix[0][0] == 0) {
            for (int j = 0; j < n; j++) {
                matrix[0][j] = 0;
            }
        }

        // Step 4: first col
        if (col0 == 0) {
            for (int i = 0; i < m; i++) {
                matrix[i][0] = 0;
            }
        }
    }
void setZeroesBetter(vector<vector<int>> &matrix)
{
   // Get number of rows
   int m = matrix.size();
   // Get number of columns
   int n = matrix[0].size();

   // Create row marker array
   vector<int> row(m, 0);
   // Create column marker array
   vector<int> col(n, 0);

   // First pass: mark rows and columns that need to be zeroed
   for (int i = 0; i < m; i++)
   {
      for (int j = 0; j < n; j++)
      {
         // If element is zero, mark its row and column
         if (matrix[i][j] == 0)
         {
            row[i] = 1;
            col[j] = 1;
         }
      }
   }

   // Second pass: set cells to zero based on markers
   for (int i = 0; i < m; i++)
   {
      for (int j = 0; j < n; j++)
      {
         // If the row or column is marked, set cell to zero
         if (row[i] == 1 || col[j] == 1)
         {
            matrix[i][j] = 0;
         }
      }
   }
}

int main()
{
   // Create the matrix
   vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};

   setZeroesOptimal(matrix);
   // Print the updated matrix
   for (auto row : matrix)
   {
      for (auto val : row)
      {
         cout << val << " ";
      }
      cout << endl;
   }
   return 0;
}
