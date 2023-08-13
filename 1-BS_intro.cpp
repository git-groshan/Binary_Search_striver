#include<bits/stdc++.h>
using namespace std;

//Iterative approach
bool Binary_Search(int arr[] , int n , int target){
    int low = 0 , high = n-1;

    while(low<=high){
        int mid = low + (high - low)/2;
        if(arr[mid]==target) return true;
        else if(arr[mid]>target) high = mid -1;
        else low = mid + 1;
    }
    return false;
}

// Recursive approach

int bs_recur(vector<int>nums , int low , int high , int target){
    if(low>high) return -1;
    int mid = low + (high - low)/2;
    if(nums[mid]==target) return mid;
    else if(nums[mid]>target) return bs_recur(nums , low , mid-1 , target);
    return bs_recur(nums , mid+1 , high , target);

}
