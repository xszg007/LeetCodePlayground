#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

vector<int> input_arry5 = { 1,2,3,4,5 };

void partition_od(vector<int> & input, int startIndex, int endIndex) {
	int pivot = input[startIndex];
	int left = startIndex;
	int right = endIndex;
	int index = startIndex;
	while (left <= right)
	{
		while (left <= right)
		{
			if (input[right]%2==0)//Å¼Êý
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
			if (input[left]%2==1)//ÆæÊý
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
	return ;
}

void quickSort_od(vector<int> & input, int startIndex, int endIndex) {
	if (startIndex >= endIndex)
		return;
	partition_od(input, startIndex, endIndex);
}

int main() {
	quickSort_od(input_arry5, 0, input_arry5.size() - 1);
	return 0;
}