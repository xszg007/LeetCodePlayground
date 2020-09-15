#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

vector<int> input_arry4 = { 3,2,56,34,2,5,76 };

//希尔排序
//分组，跨度从len/2到2
void ShellSort(vector<int> & input) {
	int len = input.size();
	while (len > 1)
	{
		len = len / 2;
		for (int x = 0; x < len; x++)
		{
			//步长为len的插入排序
			for (int i = x + len; i < input.size(); i = i + len)
			{
				int cur_val = input[i];
				int j = i - len;
				for (; j >= 0 && cur_val < input[j]; j = j - len)
				{
					input[j + len] = input[j];
				}
				input[j+len] = cur_val;
			}
		}
	}
}

//int main() {
//	ShellSort(input_arry4);
//	return 0;
//}