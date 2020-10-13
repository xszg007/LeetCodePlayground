#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;
int k = 3;

int res;
vector<int> input_arry2 = { 3,2,56,34,2,5,76,7,8,6,4,3,2,54,6,98 };

int m_tgt = input_arry2.size() - k;

int partition(vector<int> & input, int startIndex, int endIndex) {
	int pivot = input[startIndex];
	int left = startIndex;
	int right = endIndex;
	int index = startIndex;
	while (left <= right)
	{
		while (left <= right)
		{
			if (input[right] >= pivot)
			{
				right--;
			}
			else
			{
				input[index] = input[right];
				index = right;
				left++;
				break;
			}
		}
		while (left <= right)
		{
			if (input[left] <= pivot)
			{
				left++;
			}
			else
			{
				input[index] = input[left];
				index = left;
				right--;
				break;
			}
		}
	}
	input[index] = pivot;
	return index;
}

//find top K ;
void quickSort(vector<int> & input, int startIndex, int endIndex) {
	if (startIndex >= endIndex)
		return;
	int pivot = partition(input, startIndex, endIndex);//µ±Ç°Ë÷Òý
	int pre_idx = pivot;
	if (pivot == m_tgt) {
		res = input[pivot];
	}
	else if (pivot < m_tgt) {
		quickSort(input, pivot + 1, endIndex);
	}
	else {
		quickSort(input, pre_idx + 1, pivot);
	}
	//quickSort(input, startIndex, pivot-1);//pivot-1
	//quickSort(input, pivot+1, endIndex);
}

//int main() {
//	quickSort(input_arry2, 0, input_arry2.size() - 1);
//	cout << res<<endl;
//	for (auto i : input_arry2) {
//		cout << i << ' ';
//	}
//	return 0;
//}

