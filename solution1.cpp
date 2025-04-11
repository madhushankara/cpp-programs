#include <bits/stdc++.h>
using namespace std;

int main() {
    int nums[] = {1, 2, 3, 5};
    int n = sizeof(nums) / sizeof(nums[0]);
    int result = n;
    for (int i = 0; i < n; i++) {
        result ^= i ^ nums[i];
    }
    return result; 
}
