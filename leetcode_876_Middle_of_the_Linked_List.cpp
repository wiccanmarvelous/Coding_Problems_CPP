#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;

    node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printList(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

class Solution
{
public:
    int middleNode(node *head)
    {
        // int l = 0;
        // node *temp = head;
        // while(temp != NULL)
        // {
        //     temp = temp->next;
        //     l++;
        // }
        // temp = head;
        // int i = 1;
        // while(i != (l / 2) + 1)
        // {
        //     temp = temp->next;
        //     i++;
        // }
        // return temp->data;

        // OR

        node *slow = head, *fast = head;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow->data;
    }
};

int main()
{
    int t;
    cout << "Enter number of test cases: ";
    cin >> t;
    while(t--)
    {
        int n, data;
        cout << "Enter size of list: ";
        cin >> n;
        cout << "Enter data: ";
        cin >> data;
        node *head = new node(data);
        node *temp = head;
        for (int i = 0; i < n - 1; i++)
        {
            cout << "Enter data: ";
            cin >> data;
            temp->next = new node(data);
            temp = temp->next;
        }
        cout << "Initial List is:-" << endl;
        printList(head);
        Solution ob;
        cout << "Middle of linked list is: " << ob.middleNode(head) << endl;
    }
    return 0;
}