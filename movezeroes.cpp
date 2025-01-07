#include <bits/stdc++.h>
using namespace std;
void movezeroes(vector<int> &nums){
	int high = nums.size(), low=0;
	while(low<high){
		if(nums[low]==0){
			swap(nums[low], nums[high]);
			high--;
		}
		else{
			low++;
		}
	}
}

int main(void){
	vector<int> nums = {1, 0, 4, 2, 0, 0, 3, 4, 0};
	movezeroes(nums);
	for(int i: nums) cout << i << " ";
}
