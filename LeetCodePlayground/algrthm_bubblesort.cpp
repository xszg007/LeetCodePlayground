#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;
vector<int> input_arry_bubble = {3,2,56,34,2,5,76,7,8,6,4,3,2,54,6,98};
//O(N^2)，标准冒泡
void bubble(vector<int>& input) {
	int len = input.size();
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (input[j] > input[j + 1]) {
				swap(input[j], input[j + 1]);
			}
		}
	}
	return;
}



//冒泡2，利用bool标记判断该论是否有序，有序则不进行后续遍历
void BubbleSort_2(vector<int> & input) {
	int len = input.size();
	for (int i = 0; i < len; i++){
		bool sorted = 1;
		for (int j = 0; j < len - i - 1; j++){
			if (input[j] > input[j + 1])
			{
				sorted = 0;
				swap(input[j], input[j + 1]);
			}
		}
		if (sorted)
			break;
	}
	return;
}
//每轮遍历检查有序边界，将有序边界设为下一轮遍历的上界
void BubbleSort_3(vector<int> & input) {
	int len = input.size();
	int last_index = 0;
	int cur_lim = len - 1;
	for (int i = 0; i < len; i++)
	{
		bool sorted = 1;
		for (int j = 0; j < cur_lim; j++)
		{
			if (input[j] > input[j + 1])
			{
				sorted = 0;
				swap(input[j], input[j + 1]);
				last_index = j;
			}
		}
		cur_lim = last_index;
		if (sorted)
			break;
	}
	return;
}

//int main() {
//	bubble(input_arry_bubble);
//	return 0;
//}