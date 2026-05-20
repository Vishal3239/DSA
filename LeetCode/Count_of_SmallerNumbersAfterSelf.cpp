#include<bits/stdc++.h>
using namespace std;

void merge(vector<pair<int,int>>& nums, int low, int mid, int high, vector<int>& ans) {

    vector<pair<int,int>> temp;

    int left = low;
    int right = mid + 1;

    int smallerCount = 0;

    while(left <= mid && right <= high) {

        if(nums[right].first < nums[left].first) {

            smallerCount++;
            temp.push_back(nums[right]);
            right++;
        }
        else {

            ans[nums[left].second] += smallerCount;
            temp.push_back(nums[left]);
            left++;
        }
    }

    while(left <= mid) {

        ans[nums[left].second] += smallerCount;
        temp.push_back(nums[left]);
        left++;
    }

    while(right <= high) {

        temp.push_back(nums[right]);
        right++;
    }

    for(int i = low; i <= high; i++) {
        nums[i] = temp[i - low];
    }
}

void solve(vector<pair<int,int>>& nums, int low, int high, vector<int>& ans) {

    if(low >= high)
        return;

    int mid = low + (high - low) / 2;

    solve(nums, low, mid, ans);
    solve(nums, mid + 1, high, ans);

    merge(nums, low, mid, high, ans);
}

vector<int> countSmaller(vector<int>& nums) {

    int n = nums.size();

    vector<pair<int,int>> arr;

    for(int i = 0; i < n; i++) {
        arr.push_back({nums[i], i});
    }

    vector<int> ans(n, 0);

    solve(arr, 0, n - 1, ans);

    return ans;
}

int main() {

    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++)
        cin >> nums[i];

    vector<int> ans = countSmaller(nums);

    for(auto x : ans)
        cout << x << " ";

    return 0;
}