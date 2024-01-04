#include<stdio.h>
struct node{
	int val;
	struct node *ptr;
};


int main()
{
	struct node n1,n2,n3;
	struct node *temp,*head;
	
	//assigning values
	n1.val=10;
  	n1.ptr=NULL;
  	n2.val=20;
  	n2.ptr=NULL;
  	n3.val=30;
  	n3.ptr=NULL;
  	
  	//creating relations
  	n1.ptr=&n2;
  	n2.ptr=&n3;
  	
  	//access|traversing the nodes
  	head=&n1;
  	temp=head;
  	
  	printf("%d",temp->val);
  	temp=temp->ptr;
  	printf(" %d",temp->val);
  	temp=temp->ptr;
  	printf(" %d",temp->val);
  	
  	printf(" null");
  	
  	return 0;
  	
  	
  	
  	
  	
  	
  	
  	
}
