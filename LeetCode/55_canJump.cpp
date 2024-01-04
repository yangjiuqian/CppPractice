#include <iostream>
#include <string>
#include <vector>

using namespace std;


bool canJump(vector<int>& nums) {
        int n=nums.size();
        int most=0;
        for(int i=0;i<n;++i){
            if(i<=most){
                most = max(most, i+nums[i]);
                if(most>=n-1){
                    return true;
                }
            }
        }
        return false;
    }


int main(){
    vector<int> nums = {3,2,1,0,4};
    cout<<canJump(nums);
    return 0;
}