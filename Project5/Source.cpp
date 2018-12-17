#include <iostream>
using namespace std;
int main()
{
	int  array[10][10];
	int  rows,cols ,k=0;
	int sum=0;
	int m=0;
	int c = 0;
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
	
	int y = 0;
	int r = 0;
	for (int i = 0; i <cols; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			sum = sum + array[j][i];
		}
		
		
		for (int  t = rows; t >0 ; t--)
		{
			if (array[y][r] > sum - array[y][r])
			{
				c++;
			}
			y++;
		}
		r++;
		y = 0;
		

		sum = 0;
		
	}
	cout << "number of specials :" << c;
	
	return 0;
}