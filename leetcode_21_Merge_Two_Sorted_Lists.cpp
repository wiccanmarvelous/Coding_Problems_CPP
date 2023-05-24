#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *head = new ListNode;
        ListNode *t1 = list1, *t2 = list2, *temp = head;
        while (t1 != nullptr && t2 != nullptr)
        {
            ListNode *newnode = new ListNode();
            if (t1->val <= t2->val)
            {
                newnode->val = t1->val;
                t1 = t1->next;
            }
            else
            {
                newnode->val = t2->val;
                t2 = t2->next;
            }
            temp->next = newnode;
            temp = newnode;
        }
        while (t1 != nullptr)
        {
            ListNode *newnode = new ListNode(t1->val);
            t1 = t1->next;
            temp->next = newnode;
            temp = newnode;
        }
        while (t2 != nullptr)
        {
            ListNode *newnode = new ListNode(t2->val);
            t2 = t2->next;
            temp->next = newnode;
            temp = newnode;
        }
        return head->next;
    }
};