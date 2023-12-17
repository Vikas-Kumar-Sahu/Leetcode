#include<iostream>
using namespace std;

void twoSum(int nums[], int n, int target, int &index1, int &index2, int &index3) {
    for(int i = 0; i < n; i++)
       {
           for(int j = i+1; j < n; j++)
           {
               for (int k = i+2; i < n; k++)
               {
                    if(nums[i] + nums[j] + nums[k] == target)
                    {
                        index1 = i;
                        index2 = j;
                        index3 = k;
                        return ;
                    }
               }
               
           }
       }
    index1 = -1;
    index2 = -1;
    index3 = -1;
}

int main(){
    int nums[] = {-1,2,1,-4};
    int n =sizeof(nums)/sizeof(nums[0]);
    int target = 2;
    int index1, index2, index3;

    twoSum(nums, n, target, index1, index2, index3);

    if (index1 != -1 && index2 != -1 && index3 != -1) {
        cout << "Index: " << index1 << " " << "to " << index3 << endl;
        cout << "Numbers: " << nums[index1] << " " << nums[index2] << " " << nums[index3] << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;

}