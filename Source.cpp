// Magic Square
// 1/4/24
// Period 1
// Jaden Satheesh

// Magic Squares: all numbers from 1 to 9 are used once and only once
//	The sum of each row, column, and diagonal are equal

// 2 7 6
// 9 5 1
// 4 3 8
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

const int SIZE = 3;
void MSquare(int[SIZE][SIZE]);
void shuffle(int[], int);
void fillNoRepeats(int[SIZE][SIZE]);
bool isMagic(int[SIZE][SIZE]);

int main()
{
	srand(time(0));

	int grid[SIZE][SIZE];
	MSquare(grid);

	do
	{
		fillNoRepeats(grid);
	} while (isMagic(grid) == false);

	return 0;
}

void MSquare(int grid[SIZE][SIZE])
{
	int nums[] = { 2, 4, 7, 9, 6, 3, 8, 1, 5};
	int n = 0;
	shuffle(nums, n*n);
	for (int x = 0; x < SIZE; x++)
	{
		for (int y = 0; y < SIZE; y++)
		{
			grid[x][y] = nums[n];
			cout << grid[x][y] << " ";
			n++;
		}
		cout << endl; 
	}
}

void shuffle(int nums[], int n)
{
	for (int x = 0; x < n; x++)
	{
		int location = rand() % n;
		swap(nums[x], nums[location]);
	}

}

void fillNoRepeats(int grid[SIZE][SIZE])
{

}

bool isMagic(int grid[SIZE][SIZE])
{
	if (grid[0][0] + grid[0][0] + grid[0][0] = 15)
	{
		return true
	}


}