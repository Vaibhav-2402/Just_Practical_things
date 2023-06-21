#include<iostream>
using namespace std;

int left_occur(int arr[], int size, int key) {

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end) {
        if(arr[mid] == key) {
            end = mid - 1;
            ans = mid;
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else if (arr[mid] > key) {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int right_occur(int arr[], int size, int key) {

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end) {
        if(arr[mid] == key) {
            start = mid + 1;
            ans = mid;
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else if (arr[mid] > key) {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main() {

    int Even[8] = {1, 2, 2, 2, 4, 5, 8, 78 };

    int Index = left_occur(Even, 8, 2);

    cout << "\n First occurence of 2 is : " << Index;

    int Index_1 = right_occur(Even, 8, 2);

    cout << "\n Last occurence of 2 is : " << Index_1;
    
    return 0;
}