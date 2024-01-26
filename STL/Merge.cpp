#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    vector<int> ans(m + n);
    for (int i = 0; i < (m + n); i += 2)
    {
        if (nums1[i] < nums2[i])
        {
            ans[i] = nums1[i];
            ans[i + 1] = nums2[i];
        }
        else
        {
            ans[i] = nums2[i];
            ans[i + 1] = nums1[i];
        }
    }
    int i = 0;
    while (i < ans.size())
    {
        nums1[i] = ans[i];
    }
    for(int i = 0;i<m+n;i++){
        cout<<ans[i]<<"\t";
    }
}
int main()
{
    vector<int> nums1;
    vector<int> nums2;
    int m, n;
    int element;
    cout << "Enter SIZE of M:";
    cin >> m;
    cout << "Enter SIZE of N:";
    cin >> n;
    cout << endl;
    cout << "ELEMENTS FOR NUMS1" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> element;
        nums1.push_back(element);
    }
    cout << "ELEMENTS FOR NUMS2" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> element;
        nums2.push_back(element);
    }    
    merge(nums1,m,nums2,n);
    return 0;
}