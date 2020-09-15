#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

vector<int> input_arry3 = { 3,2,56,34,2,5,76 };

void merge(vector<int> &input, int start, int mid, int end) {//
	vector<int> temp;
	//vector<int> temp(end - start + 1);
	int p1 = start;
	int p2 = mid + 1;//
	while (p1 <= mid && p2 <= end)
	{
		if (input[p1] <= input[p2])
		{
			temp.push_back(input[p1]);
			p1++;
		}
		else
		{
			temp.push_back(input[p2]);
			p2++;
		}
	}
	while (p1 <= mid)
	{
		temp.push_back(input[p1]);
		p1++;
	}
	while (p2 <= end)
	{
		temp.push_back(input[p2]);
		p2++;
	}
	for(int i=0;i<temp.size();i++)
	{
		input[start + i] = temp[i];
	}
}

void mergesort(vector<int> & input, int start, int end) {
	if (start < end)//
	{
		int mid = (start + end) / 2;
		mergesort(input, start, mid);
		mergesort(input, mid + 1, end);
		merge(input, start, mid, end);
	}
}

//int main() {
//	mergesort(input_arry3, 0, input_arry3.size()-1);//
//	return 0;
//}

