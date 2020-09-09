#pragma once
#include <vector>
using namespace std;

vector<vector<int>> delta(int numRows);
int numSquares();
string decodeString(string s);
int openLock();
int zeromatrix(vector<vector<int>>& matrixm, int rows, int cols);
bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t);
vector<string> findItinerary(vector<vector<string>>& tickets);
string reverseWords(string s);
int arithmetic();
int func();
vector<vector<int>> combinationSum(vector<int>& candidates, int target);
void dfs(int i, int cur_sum, vector<int> cur_res);



//typedef struct
//{
//	int a;
//	float b;
//	//double d;
//	char c[2];
//	int e[4];
//	char *ptr1;
//	short *ptr2;
//	int *ptr3;
//}hikvision;