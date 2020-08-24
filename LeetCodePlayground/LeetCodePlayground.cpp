// LeetCodePlayground.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "functions.h"

#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>
#include<string>
using namespace std;

int main()
{
	vector < int> input_220 = { 2147483647,-2147483647 };
	int k = 1;
	int t = 2147483647;
	bool res = containsNearbyAlmostDuplicate(input_220, k, t);
	return 0;
}

