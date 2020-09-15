#include "stdafx.h"
#include "functions.h"
#include <iostream>
#include <vector>

using namespace std;

//vector<int> input_arry = {3,2,56,34,2,5,76,7,8,6,4,3,2,54,6,98};

//ѡ����������С�Ļ���ǰ��
//O(N^2) O(1)
//�ŵ㣺����Ԫ�ػ����������ڴ����
//ȱ�㣺���ȶ������ܽ�����ֵͬԪ��λ��
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




//��������˳����ʣ��嵽ǰ����ʵ�λ��
//O(N^2) O(1)
void InsertSort(vector<int> & input) {
	int len = input.size();
	for (int i = 1; i < len; i++)
	{
		int cur_val = input[i];
		int j = i - 1;
		for (; j >= 0 && cur_val < input[j]; j--)//ע���ȱȽϵ�ǰԪ�غ�������У�����Ҫ��for�ľͲ����������ִ��j--��������
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