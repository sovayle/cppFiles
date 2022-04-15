/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Tutor: Sr Shaila
*/ 
#include <iostream>
using namespace std;

int main()
{
	int A[3][3];
	int B[3][3];
	int C[3][3];
	int D[3][3];
	int sumA=0,sumB=0;
	cout << "Enter matrix 1 of size 3X3" << endl;
	for (int i=0;i<=2;i++)
	{
		for (int j=0;j<=2;j++)
		{
			cin >> A[i][j];
		}
	}
	cout << "Enter matrix 2 of size 3X3" << endl;
	for (int i=0;i<=2;i++)
	{
		for (int j=0;j<=2;j++)
		{
			cin >> B[i][j];
		}
	}

	//prints main diagonals of matrix 

	for (int i=0;i<=2;i++)
	{
		sumA += A[i][i];
		sumB += B[i][i];
	}
	cout << "Sum of the main diagonals of matrix 1 is " << sumA << endl;
	cout << "Sum of the main diagonals of matrix 2 is " << sumB << endl;
	
	//prints the sum of each matrix
	cout << "Sum of the 2 matrix is " << endl;
	for (int i=0;i<=2;i++)
	{
		for (int j=0;j<=2;j++)
		{
			C[i][j] = A[i][j] + B[i][j];
			cout << C[i][j] << " ";
		}
		cout << endl;
	}
	
	//prints the product of each matrix
	cout << "Product of the 2 matrix is " << endl;
	for (int i=0;i<=2;i++)
	{
		for (int j=0;j<=2;j++)
		{
			D[i][j] = 0;
			for (int k=0;k<=2;k++)
			{
				D[i][j] += A[i][k] * B[k][j];
				
			}
			cout << D[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
