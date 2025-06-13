vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
{
    Node *temp1 = head;
    Node *temp2 = head;
    vector<pair<int, int>> ans;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    while (temp1->data < temp2->data)
    {
        int sum = temp1->data + temp2->data;
        if (sum == target)
        {
            ans.push_back({temp1->data, temp2->data});
            temp1 = temp1->next;
            temp2 = temp2->prev;
        }
        else if (sum > target)
        {
            temp2 = temp2->prev;
        }
        else
        {
            temp1 = temp1->next;
        }
    }
    return ans;
}