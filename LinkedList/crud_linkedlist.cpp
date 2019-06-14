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
	}
	cout<<endl;
}

node pushBack(int d, node head)
{	
	if(head==NULL)
	{
		head= newNode(d);
		return head;
	}
	node tra= head;
	while(tra->next!=NULL)
	{
		tra=tra->next;
	}

	tra->next=newNode(d);
	return head;

}
node insertFront(int d,node head)
{
	node temp= (node) malloc(sizeof(struct Node));
	temp->data=d;
	temp->next=head;

	return temp;


}
int main(int argc, char const *argv[])
{
	/* code */
	node head=NULL;
	for(int i=1;i<=10;i++)
	{
		head= pushBack(i,head);
		//cout<<head->data<<endl;
	}
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;

	}

	return 0;
}