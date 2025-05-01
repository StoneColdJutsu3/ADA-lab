#include<bits/stdc++.h>
using namespace std;

typedef vector<vector<int>> Matrix;     //used to declare a 2d matrix

// Function to add two matrices
Matrix add(Matrix A, Matrix B) 
{
    int n = A.size();
    Matrix C(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    return C;
}

Matrix subtract(Matrix A, Matrix B) 
{
    int n = A.size();
    Matrix C(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
    return C;
}

// Function to multiply matrices using Divide and Conquer
Matrix strassenMultiply(Matrix A, Matrix B) 
{
    int n = A.size();
    Matrix C(n, vector<int>(n, 0));

    if (n == 1) 
    {
        C[0][0] = A[0][0] * B[0][0];
        return C;
    }

    int half = n / 2;
    Matrix A11(half, vector<int>(half)), A12(half, vector<int>(half)), 
           A21(half, vector<int>(half)), A22(half, vector<int>(half));
    Matrix B11(half, vector<int>(half)), B12(half, vector<int>(half)), 
           B21(half, vector<int>(half)), B22(half, vector<int>(half));

    for (int i = 0; i < half; i++)
    {
        for (int j = 0; j < half; j++) 
        {
            A11[i][j] = A[i][j];
            A12[i][j] = A[i][j + half];
            A21[i][j] = A[i + half][j];
            A22[i][j] = A[i + half][j + half];

            B11[i][j] = B[i][j];
            B12[i][j] = B[i][j + half];
            B21[i][j] = B[i + half][j];
            B22[i][j] = B[i + half][j + half];
        }
    }

    Matrix P = strassenMultiply(A11, subtract(B12, B22)); // P = A11 * (B12 - B22)
    Matrix Q = strassenMultiply(add(A11, A12), B22);      // Q = (A11 + A12) * B22
    Matrix R = strassenMultiply(add(A21, A22), B11);      // R = (A21 + A22) * B11
    Matrix S = strassenMultiply(A22, subtract(B21, B11)); // S = A22 * (B21 - B11)
    Matrix T = strassenMultiply(add(A11, A22), add(B11, B22)); // T = (A11 + A22) * (B11 + B22)
    Matrix U = strassenMultiply(subtract(A12, A22), add(B21, B22)); // U = (A12 - A22) * (B21 + B22)
    Matrix V = strassenMultiply(subtract(A11, A21), add(B11, B12)); // V = (A11 - A21) * (B11 + B12)

    // Computing the result submatrices
    Matrix C11 = add(subtract(add(T, S), Q), U);
    Matrix C12 = add(P, Q);
    Matrix C21 = add(R, S);
    Matrix C22 = subtract(subtract(add(T, P), R), V);

    // Combining results
    for (int i = 0; i < half; i++)
    {
        for (int j = 0; j < half; j++) 
        {
            C[i][j] = C11[i][j];
            C[i][j + half] = C12[i][j];
            C[i + half][j] = C21[i][j];
            C[i + half][j + half] = C22[i][j];
        }
    }
    return C;
}

void printMatrix(Matrix C) 
{
    for(int i=0;i<C.size();i++)
    {
        for(int j=0;j<C[0].size();j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() 
{
    int n = 4; // Matrix size must be power of 2
    
    Matrix A = {{1, 2,3,4}, {3, 4,5,6},{1, 2,3,4}, {3, 4,5,6}};
    Matrix B = {{5, 6,7,8}, {7, 8,9,1},{5, 6,7,8}, {7, 8,9,1}};
    Matrix C = strassenMultiply(A, B);
    cout << "Product Matrix:"<<endl;
    printMatrix(C);
}