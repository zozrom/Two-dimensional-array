#include <iostream>
using namespace std;
int main()
{
	int  array[10][10];
	int  rows,cols ,k;
	do
	{
		cout << "Enter the number rows in array :" << endl;
		cin >> rows;

	} while (rows<=0 || rows>10);
	do
	{
		cout << "Enter the number cols in array : " << endl;
		cin >> cols;
	} while (cols <= 0 || cols> 10);

	for (int   i = 0; i < rows; i++)
	{  
		for (int j = 0; j< cols; j++)
		{
			cout << "Enter numbers in " << i+1 << "rows" << j + 1 << "cols" << endl;
			cin >> array[i][j];
			
		}
	}
	for (int  i = 0; i < rows; i++)
	{
		for (int  j = 0; j < cols; j++)
		{
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}
	
	return 0;
}