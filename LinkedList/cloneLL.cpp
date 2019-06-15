#include<bits/stdc++.h>
using namespace std;
typedef struct Node* node;
struct Node
{
	int data;
	struct  Node *next;
	
};
node newNode(int d)
{
	node temp= (node) malloc(sizeof(struct Node));
	temp->data=d;
	temp->next=NULL;

	return temp;
}
void printList(node head)
{
	node temp= head;
	while(temp!=nullptr)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
node clone(node head)
{
node current=head;
node newHead= nullptr;
node tail= nullptr;
while(current!=nullptr)
{

	if(newHead==nullptr)
	{
		newHead= newNode(current->data);
		tail= newHead;
	}else
	{

		tail->next= newNode(current->data);
		tail= tail->next;

	}
	current= current->next;
}
return newHead;
}
int main(int argc, char const *argv[])
{
	/* code */
	struct Node v[11];
	for(int i=1;i<=10;i++)
	{
		v[i].data=i;
		v[i].next=nullptr;
		if(i>1)
		{
			v[i-1].next=  &v[i];
		}
	}
	node head = &v[1];
	printList(head);
	node newList= clone(head);
	cout<<"New List"<<endl;
	printList(newList);
	return 0;
}