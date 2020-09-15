#include "stdafx.h"
#include "functions.h"
#include <iostream>
#include <vector>

using namespace std;
//鸡尾酒排序
//适用情况：大部分元素已经有序
//缺点：代码量扩大一倍
//————>
//<————
void HappyHour(vector<int> & input) {
	int len = input.size();
	for (int i = 0; i < len / 2; i++)
	{
		bool sorted = 1;
		//从左往右增序
		for (int j = i; j < len - i - 1; j++)
		{
			if (input[j] > input[j + 1])
			{
				swap(input[j], input[j + 1]);
				sorted = 0;
			}
		}
		if (sorted)
			break;
		sorted = 1;
		//从右往左降序
		for (int j = len - i - 1; j > i; j--)
		{
			if (input[j] < input[j - 1])
			{
				swap(input[j], input[j - 1]);
				sorted = 0;
			}
		}
		if (sorted)
			break;
	}
}

//每轮遍历检查有序边界，将有序边界设为下一轮遍历的上界
void HappyHour_2(vector<int> & input) {
	int len = input.size();
	int last_index_1 = 0;
	int last_index_2 = 0;
	int cur_lim_1 = len - 1;
	int cur_lim_2 = 0;
	for (int i = 0; i < len / 2; i++)
	{
		bool sorted = 1;
		//从左往右增序
		for (int j = i; j < cur_lim_1; j++)
		{
			if (input[j] > input[j + 1])
			{
				swap(input[j], input[j + 1]);
				sorted = 0;
				last_index_1 = j;
			}
		}
		cur_lim_1 = last_index_1;
		if (sorted)
			break;
		sorted = 1;
		//从右往左降序
		for (int j = len - i - 1; j > cur_lim_2; j--)
		{
			if (input[j] < input[j - 1])
			{
				swap(input[j], input[j - 1]);
				sorted = 0;
				last_index_2 = j;
			}
		}
		cur_lim_2 = last_index_2;
		if (sorted)
			break;
	}
}