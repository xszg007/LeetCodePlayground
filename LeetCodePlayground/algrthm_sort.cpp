#include "stdafx.h"
#include "functions.h"
#include <iostream>
#include <vector>

using namespace std;

//vector<int> input_arry = {3,2,56,34,2,5,76,7,8,6,4,3,2,54,6,98};

//选择排序，找最小的换到前面
//O(N^2) O(1)
//优点：减少元素互换，减少内存访问
//缺点：不稳定，可能交换相同值元素位置
void SelectionSort(vector<int> & input) {
	int len = input.size();
	for (int i = 0; i < len - 1; i++)
	{
		int min_index = i;
		for (int j = i + 1; j < len; j++)
		{
			if (input[j] < input[min_index])
				min_index = j;
		}
		swap(input[i], input[min_index]);
	}
	return;
}




//插入排序，顺序访问，插到前面合适的位置
//O(N^2) O(1)
void InsertSort(vector<int> & input) {
	int len = input.size();
	for (int i = 1; i < len; i++)
	{
		int cur_val = input[i];
		int j = i - 1;
		for (; j >= 0 && cur_val < input[j]; j--)//注意先比较当前元素和有序队列，不必要进for的就不进，否则会执行j--引发错误
		{
			input[j + 1] = input[j];
		}
		input[j + 1] = cur_val;
	}
	return;
}

//int main() {
//	SelectionSort(input_arry);
//	return 0;
//}