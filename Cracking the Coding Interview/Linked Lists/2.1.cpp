#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    struct node *next;
};
struct node *head;

void appendToTail(int item)
{
    struct node *ptr,*temp;
    ptr = (struct node*)malloc(sizeof(struct node));
 
        ptr->data = item;
        if(head == NULL)
        {
            ptr -> next = NULL;
            head = ptr;
        }
        else
        {
            temp = head;
            while (temp -> next != NULL)
            {
                temp = temp -> next;
            }
            temp->next = ptr;
            ptr->next = NULL;
        }
    
}

void deleteDuplicateNode()
{
	struct node *temp = head;
	map<int,int>mp;
	
	while(temp-> next != NULL)
	{
		int item = temp->data;	
		mp[item]++;
		if(mp[item]>1)
		{
			temp->next = temp->next->next;
			mp[item]--;
		}
		
		temp = temp->next;
	}
}


void display()
{
    struct node *ptr;
    ptr = head;
    if(ptr == NULL)
    {
        printf("Nothing to print");
    }
    else
    {
        printf("\nprinting values . . . . .\n");
        while (ptr!=NULL)
        {
            printf("\n%d",ptr->data);
            ptr = ptr -> next;
        }
    }
}




int main()
{
	int n,x;
	
	cin>>n;
	
	for(int i = 0;i<n;i++)
	{
		cin>>x;
		appendToTail(x);
	}
	
	deleteDuplicateNode();
	
	display();
	
}