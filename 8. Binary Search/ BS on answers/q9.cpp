#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool midPagePossible(vector<int> &arr, int pages, int k)
{
    int student = 1;
    int pages_alloted = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        pages_alloted += arr[i];
        if (pages_alloted > pages)
        {
            student += 1;
            pages_alloted = arr[i];
        }
        if (student > k)
        {
            return false;
        }
    }
    return true;
}

int findPages(vector<int> &arr, int k)
{
    int num_books = arr.size();

    // number of students are more than number of possible books (each student must get at least one book) so the allocation is not possible here"
    if (k > num_books)
    {
        return -1;
    }
    int low = INT_MAX;
    int high = 0;
    int ans = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        low = min(low, arr[i]);
        high = high + arr[i];
    }
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        bool isMidPagesPossible = midPagePossible(arr, mid, k);
        if (isMidPagesPossible)
        {
            high = mid - 1;
            ans = min(ans, mid);
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {22, 23, 67};
    int k = 1;
    cout << "ans is " << findPages(arr, k);
}