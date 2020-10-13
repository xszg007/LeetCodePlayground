#include "stdafx.h"
#include <iostream>
using namespace std;

string input = "xiao fu zhen ke ai";

int GetLstWord(string & s) {
	int len = s.size();
	int count=0;
	if (s[len - 1] == ' ')
	{
		return 1;
	}
	for (int i=len-1;i>=0;i--)
	{
		if (s[i] == ' ')
			break;
		else
			count++;
	}
	return count;
}

//int main() {
//	int res=GetLstWord(input);
//	return res;
//}
