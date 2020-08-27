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
	vector<vector<string>> input;
	vector<string> l1 = { "MUC", "LHR" };
	vector<string> l2 = { "JFK", "MUC" };
	vector<string> l3 = { "SFO", "ABC" };
	vector<string> l4 = { "LHR", "SFO" };
	vector<string> l5 = { "ABC", "END" };
	input.push_back(l5);
	input.push_back(l2);
	input.push_back(l3);
	input.push_back(l4);
	input.push_back(l1);
	vector<string> res;
	res = findItinerary(input);
	return 0;
}

