#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <queue>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

vector<vector<int>> delta(int numRows)
{
	vector<vector<int>> delt(numRows);
	delt[0].push_back(1);
	for (int i = 0; i<numRows; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j<1)
			{
				delt[i].push_back(1);
				continue;
			}
			else
			{
				int l = delt[i - 1][j - 1];
				int r = 0;
				if (i>j)
					r = delt[i - 1][j];
				delt[i].push_back(l + r);
			}
		}
	}
	return delt;
}