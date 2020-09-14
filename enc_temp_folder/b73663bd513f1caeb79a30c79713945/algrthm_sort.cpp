#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <unordered_set>
#include <unordered_map>

using namespace std;


vector<int> input_arry = {3,2,56,34,2,5,76,7,8,6,4,3,2,54,6,98};

//O(N^2)����׼ð��
void BubbleSort(vector<int> & input) {
	int len = input.size();

	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (input[j] > input[j + 1])
				swap(input[j], input[j + 1]);
		}
	}
	return;
}

//ð��2������bool����жϸ����Ƿ����������򲻽��к�������
void BubbleSort_2(vector<int> & input) {
	int len = input.size();
	for (int i = 0; i < len; i++)
	{
		bool sorted = 1;
		for (int j = 0; j < len - i - 1; j++)
		{
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

//ÿ�ֱ����������߽磬������߽���Ϊ��һ�ֱ������Ͻ�
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

//��β������
//��������>
//<��������
void HappyHour(vector<int> & input) {
	int len = input.size();
	for (int i = 0; i < len / 2; i++)
	{
		bool sorted = 1;
		//������������
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
		//����������
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


void HappyHour_2(vector<int> & input) {
	int len = input.size();
	int last_index_1 = 0;
	int last_index_2 = 0;
	int cur_lim_1 = len - 1;
	int cur_lim_2 = 0;
	for (int i = 0; i < len / 2; i++)
	{
		bool sorted = 1;
		//������������
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
		//����������
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

int main() {
	HappyHour_2(input_arry);
	return 0;
}