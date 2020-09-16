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

//int partition2(vector<int> & input, int start, int end) {
//	int index = start;
//	int pivot = input[start];
//	int left = start;
//	int right = end;
//	while (left <= right) {
//		while (left <= right) {
//			if (input[right] < pivot)
//			{
//				input[index] = input[right];
//				index = right;
//				left++;
//				break;
//			}
//			else
//			{
//				right--;
//			}
//		}
//		while (left <= right) {
//			if (input[left] > pivot)
//			{
//				input[index] = input[left];
//				index = left;
//				right--;
//				break;
//			}
//			else
//			{
//				left++;
//			}
//		}
//		
//	}
//	input[index] = pivot;
//	return index;
//}
//
//void quicksort(vector<int> & input, int start, int end) {
//	if (start >= end)
//		return;
//	int index = partition2(input, start, end);
//	quicksort(input, start,index - 1);
//	quicksort(input, index + 1, end);
//}

//int main() {
//	quickSort(input_arry2, 0, input_arry2.size() - 1);
//	return 0;
//}