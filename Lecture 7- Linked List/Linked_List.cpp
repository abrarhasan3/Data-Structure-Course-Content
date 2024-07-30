#include<bits/stdc++.h>

using namespace std;

void start()
{
        #ifndef ONLINE_JUDGE
 
        freopen("input.txt", "r", stdin);
 
        freopen("output.txt", "w", stdout);
        #endif // ONLINE_JUDGE
 
}

class Linked_List{
public:
        int value;
        Linked_List *next = NULL;
};

Linked_List *head = NULL, *ptr;

int main()
{
        start();

        //Creation

        int n;
        cin>>n;

        for(int i=0;i<n;i++)
        {
                int val;
                cin>> val;
                Linked_List *l = new Linked_List();
                if(head==NULL)
                {
                        head = l;
                }
                else
                {
                        ptr->next = l;

                }
                ptr = l;
                (*l).value = val;
        }

        ptr = head;

        //Insertion

        while(ptr!=NULL)
        {
                if(ptr->value == 4)
                {
                        Linked_List *node = new Linked_List();

                        node->value = 24;

                        node -> next = ptr->next;

                        ptr-> next = node;

                        break;

                }
                ptr= ptr->next;
        }

        //Deletion from Front

        Linked_List* temp = head;

        head = head->next;

        free(temp);


        //Deletion from anywhere

        Linked_List *ptr1 = head, *ptr2 = head->next;

        int key = 5;

        if(ptr1->value==key)
        {
                Linked_List* temp = head;

                head = head->next;

                free(temp);

        }
        else
        {
                while(ptr2!=NULL)
                {
                        if(ptr2->value == key)
                        {
                                ptr1->next = ptr2->next;
                                free(ptr2);
                                break;
                        }
                        ptr1= ptr1->next;
                        ptr2= ptr2->next;
                }

        } 




        //Print Linked List

        ptr = head;

        while(ptr!=NULL)
        {
                cout<<ptr->value<<endl;
                ptr= ptr->next;
        }

}
