#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

vector<int> input_arry4 = { 3,2,56,34,2,5,76 };

//ϣ������
//���飬��ȴ�len/2��2
void ShellSort(vector<int> & input) {
	int len = input.size();
	while (len > 1)
	{
		len = len / 2;
		for (int x = 0; x < len; x++)
		{
			//����Ϊlen�Ĳ�������
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