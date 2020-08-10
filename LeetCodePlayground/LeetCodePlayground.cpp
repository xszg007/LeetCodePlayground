// LeetCodePlayground.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "118.h"
#include "752.h"
#include "279.h"
#include "394.h"
#include "Interview0108.h"
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>
#include<string>
using namespace std;

int main()
{
	//int res=openLock();
	//int res = numSquares();

	/*string s_in = "3[a2[c]]";
	string res;
	res = decodeString(s_in);*/
	string word="cat";
	int s = 1;
	//char sm = s + '0';
	string sm = to_string(s);
	string sht = word[0] + sm + word[2];
	cout << sht << '\n';
	int num = 5;
	vector<vector<int>> res;
	res = delta(num);
	return 0;
}

