#include <iostream>
using namespace std;




int main(void){
	// multi dimensional array to store the values of matrix 1
	int matrix1[10][10];
	// multi dimensional array to store the values of matrix 2
	int matrix2[10][10];
	// multi dimensional array to store the values of product of matrix 1 and 2
	int product[10][10];
	// variable to store total rows of first matrix
	int row1;
	// variable to store total rows of first matrix
	int column1;
	// variable to store total columns of first matrix
	int row2;
	// variable to store total rows of second matrix
	int column2;
	// variable to store total columns matrix
	// showing that this will only calculate square matrix
	cout << "This calculator is only for 2x2 square matrix \n";


	cout << "Enter rows of first matrix\n";
	cin >> row1;
	cout << "Enter columns of first matrix\n";
	cin >> column1;
	cout << "Enter rows of second matrix\n";
	cin >> row2;
	cout << "Enter columns of second matrix\n";
	cin >> column2;
	// If rows of second matrix in not equal to column of first matrix
	while (row2 != column1)
	{
		cout << "Column of first matrix isn't equal to rows of second matrix/n";

		cout << "Enter rows of first matrix\n";
		cin >> row1;
		cout << "Enter columns of first matrix\n";
		cin >> column1;
		cout << "Enter rows of second matrix\n";
		cin >> row2;
		cout << "Enter columns of second matrix\n";
		cin >> column2;
	}

	int a, b, c;


	// Enter values of first matrix 



	cout << "Enter values of first matrix:" << endl;
	for (a = 1; a <= row1; ++a){
		for (b = 1; b <= column1; ++b)
		{
			cout << "Enter element ";
			cin >> matrix1[a][b];
		}
	}
	// Enter values of first matrix 

	cout << "Enter values of second matrix:" << endl;
	for (a = 1; a <= row2; ++a){
		for (b = 1; b <= column2; ++b)
		{
			cout << "Enter element ";
			cin >> matrix2[a][b];
		}
	}
	for (a = 1; a <= row1; ++a){
	for (b = 1; b <=column2; ++b)
	{
		product[a][b] = 0;
	}
	}

	// Multiplying matrix1 and matrix 2 using iterative traditional algorithm
	for (a = 1; a <= row1; ++a)
	for (b = 1; b <= column2; ++b)
	for (c = 1; c <= column1; ++c)
	{
		product[a][b] += matrix1[a][c] * matrix2[c][b];  // storing in product matrix
	}
	cout << "The product of two matrices using traditional iterative algorthim is :\n";
	for (a = 1; a <= row1; ++a){
		for (b = 1; b <= column1; ++b)
		{
			cout << " " << product[a][b] << " ";
		}
		cout << endl;
	}

	// Multiplyiing Using Stressen's algorthim

	int p1, p2, p3, p4, p5, p6, p7;

	p1 = matrix1[1][1] * (matrix2[1][2] - matrix2[2][2]);
	p2 = matrix2[2][2] * (matrix1[1][1] + matrix1[1][2]);
	p3 = matrix2[1][1] * (matrix1[2][1] + matrix1[2][2]);
	p4 = matrix1[2][2] * (matrix2[2][1] - matrix2[1][1]);
	p5 = (matrix1[1][1] + matrix1[2][2]) * (matrix2[1][1] + matrix2[2][2]);
	p6 = (matrix1[1][2] - matrix1[2][2]) * (matrix2[2][1] + matrix2[2][2]);
	p7 = (matrix1[1][1] - matrix1[2][1]) * (matrix2[1][1] + matrix2[1][2]);

	product[1][1] = p5 + p4 - p2 + p6;
	product[1][2] = p1 + p2;
	product[2][1] = p3 + p4;
	product[2][2] = p1 + p5 - p3 - p7;


	cout << "The product of two matrices using Stressens's algorithm is :\n";
	for (a = 1; a <= row1; ++a){
		for (b = 1; b <= column1; ++b)
		{
			cout << " " << product[a][b] << " ";
		}
		cout << endl;
	}

	system("pause");
	return 0;



};
