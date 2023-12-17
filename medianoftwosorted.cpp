#include<iostream>
#include<vector>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int m = nums1.size(), n = nums2.size();
    int i = 0, j = 0, k = 0;
    vector<int> merged(m + n);
    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }
    while (i < m) {
        merged[k++] = nums1[i++];
    }
    while (j < n) {
        merged[k++] = nums2[j++];
    }
    int mid = (m + n) / 2;
    if ((m + n) % 2 == 0) {
        return (double)(merged[mid - 1] + merged[mid]) / 2;
    } else {
        return (double)merged[mid];
    }
}    

int main(){
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};

    double median = findMedianSortedArrays(nums1, nums2);

    cout << "Median = " << median << endl;

    return 0;
}