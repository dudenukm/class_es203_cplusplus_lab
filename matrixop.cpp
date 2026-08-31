#include <iostream>
using namespace std;

void addmat(int rows, int cols, int mat1[][10], int mat2[][10], int result[][10]) {
    for (int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            result[i][j] = mat1[i][j] + mat2[i][j];
}

void submat(int rows, int cols, int mat1[][10], int mat2[][10], int result[][10]) {
    for (int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            result[i][j] = mat1[i][j] - mat2[i][j];
}

void multimat(int rows1, int rows2, int cols1 ,int cols2, int mat1[][10], int mat2[][10], int result[][10]) {
    for (int i=0;i<rows1;i++){
        for(int j=0;j<cols2;j++){
            result[i][j] = 0;
            for(int k=0;k<cols1;k++){
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void transmat(int rows, int cols, int mat[][10], int result[][10]) {
    for (int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            result[j][i] = mat[i][j];
}

void display(int rows, int cols, int mat[][10]) {
    for (int i=0;i<rows;i++) {
        for(int j=0;j<cosl;j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }        
}

int main() {
    
    int rows1, rows2, cols1, cols2, choice;
    int mat1[10][10], mat2[10][10], result[10][10];

    cout<<"Enter number of rows and colums for matrix 1 : ";
    cin >> rows1 >> cols1;
    
    cout << "Enter number of rows and columns for matrix 2 : ";
    cin >> rows2 >> cols2;

    cout << "Enter elements for matrix 1 : ";
    for(int i=0,i<rows1;i++){
        for(int j=0;i<cols1;j++){
            cout << "matrix1["<<i<<"]["<<j<<"]";
            cin >> mat1[i][j]
        }
    }

    cout << "Enter elements for matrix 2 : ";
    for(int i=0,i<rows2;i++){
        for(int j=0;i<cols2;j++){
            cout << "matrix1["<<i<<"]["<<j<<"]";
            cin >> mat2[i][j]
        }
    }

    cout << "Select Operation : \n";
    cout << "1.Addition\n2.Subtraction\n3.Multiplication\n4.Transpose\n";
    cout << "Enter your choice : ";
    cin >> choice;

    switch (choice) {
        case 1:
            if (rows1==rows2 && cols1==cols2){
                addmat(rows1,cols2,mat1,mat2,result);
                cout << "\nResult of matrix\n";
                display(rows1,cols1,result);
            }else{
                cout << "Addition not possible, Matrix dimensions must be same\n";
            }
            break;
        
        case 2:
            if (rows1==rows2 && cols1==cols2){
                submat(rows1,cols2,mat1,mat2,result);
                cout << "\nResult of matrix\n";
                display(rows1,cols1,result);
            }else{
                cout << "Subtraction not possible, Matrix dimensions must be same\n";
            }
            break;
            
        case 3:
            if (cols1==rows2){
                multimat(rows1,cols2,mat1,mat2,result);
                cout << "\nResult of matrix\n";
                display(rows1,cols1,result);
            }else{
                cout << "Subtraction not possible, Matrix dimensions must be same\n";
            }
            break;

        case 4:
            if (cols1==rows2){
                multimat(rows1,cols2,mat1,mat2,result);
                cout << "\nResult of matrix\n";
                display(rows1,cols1,result);
            }else{
                cout << "Multiplication not possible, Number the colums in matrix 1 must be same as number of rows in matrix 2 \n";
            }
            break;

        default:
            cout << "invalid Choice!\n";
    }
    return 0;
}