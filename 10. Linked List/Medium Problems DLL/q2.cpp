vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
{
    Node *temp = head;
    unordered_map<int, int> mpp;
    vector<pair<int, int>> ans;
    while (temp != NULL)
    {
        int res = target - temp->data;
        if (mpp.find(res) != mpp.end())
        {
            if (temp->data < res)
            {
                pair<int, int> sub = {temp->data, res};
                ans.push_back(sub);
            }
            else
            {
                pair<int, int> sub = {res, temp->data};
                ans.push_back(sub);
            }
        }
        mpp[temp->data] = 1;
        temp = temp->next;
    }
    sort(ans.begin(), ans.end());
    return ans;
}