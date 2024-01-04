#include<stdio.h>
struct node{
	int val;
	struct node *ptr;
};


int main()
{
	struct node n1,n3,n4,n5;
	struct node *temp,*head;
	
	//assigning values
	n1.val=10;
  	n1.ptr=NULL;
  	//n2.val=20;
  	//n2.ptr=NULL;
  	n3.val=30;
  	n3.ptr=NULL;
  	n4.val=40;
  	n4.ptr=NULL;
  	n5.val=101;
  	n5.ptr=NULL;
  	
  	//creating relations
  	n5.ptr=&n1;
  	n1.ptr=&n3;
  	n3.ptr=&n4;
  	n4.ptr=NULL;
  	
  	//access|traversing the nodes
  	head=&n5;
  	temp=head;
  	
  	printf("%d",temp->val);
  	temp=temp->ptr;
  	printf(" %d",temp->val);
  	temp=temp->ptr;
  	printf(" %d",temp->val);
  	temp=temp->ptr;
  	printf(" %d",temp->val);
  	//temp=temp->ptr;
  	//printf(" %d",temp->val);
  	
  	printf(" null");
  	
  	return 0;
  	
}
