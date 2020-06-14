#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <queue>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;


int zeromatrix(vector<vector<int>>& matrix,int rows,int cols)
{
	vector<vector<int>> res(matrix);
	int *col_lst = new int[cols];
	int *row_lst = new int[rows];
	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j<cols; j++)
		{
			if (matrix[i][j] == 0)
			{
				row_lst[i] = 1;
				col_lst[j] = 1;
			}
		}
	}
	for (int i = 0; i<rows; i++)
	{
		if (row_lst[i] == 1)
		{
			for (int c = 0; c<cols; c++)
			{
				res[i][c] = 0;
			}
		}
	}
	for (int j = 0; j<cols; j++)
	{
		if (col_lst[j] == 1)
		{
			for (int r = 0; r<rows; r++)
			{
				res[r][j] = 0;
			}
		}
	}
	matrix = res;
	return 0;
}
