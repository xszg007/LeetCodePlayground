// LeetCodePlayground.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "functions.h"
#include <unordered_set>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>
#include<string>

using namespace std;

int main()
{
	vector<int > vin = {2, 6, 3, 7};
	int target = 7;
	vector<vector<int>> res;
	res = combinationSum(vin, target);
	return 0;
}

