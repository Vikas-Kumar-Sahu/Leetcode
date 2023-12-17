#include<iostream>
using namespace std;

void twoSum(int nums[], int n, int target, int &index1, int &index2) {
    for(int i=0; i<n; i++)
       {
           for(int j=i+1; j<n; j++)
           {
               if(nums[i]+nums[j]==target)
               {
                   index1 = i;
                   index2 = j;
                   return ;
               }
           }
       }
    index1 = -1;
    index2 = -1;
}

int main(){
    int nums[] = {2,7,11,15};
    int n =sizeof(nums)/sizeof(nums[0]);
    int target = 9;
    int index1, index2;

    twoSum(nums, n, target, index1, index2);

    if (index1 != -1 && index2 != -1) {
        cout << "Index: " << index1 << " " << index2 << endl;
        cout << "Numbers: " << nums[index1] << " " << nums[index2] << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;

}