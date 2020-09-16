#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

vector<int> input_arry2 = { 3,2,56,34,2,5,76,7,8,6,4,3,2,54,6,98 };

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

void quickSort(vector<int> & input, int startIndex, int endIndex) {
	if (startIndex >= endIndex)
		return;
	int pivot = partition(input, startIndex, endIndex);
	quickSort(input, startIndex, pivot-1);//pivot-1
	quickSort(input, pivot+1, endIndex);
}


//int main() {
//	quickSort(input_arry2, 0, input_arry2.size() - 1);
//	return 0;
//}