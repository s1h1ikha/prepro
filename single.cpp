#include <stdio.h>
#include <stdlib.h>
struct node* {
	int info;
	struct node* link;
};

struct node *create(struct node *start);
struct node *add_b(struct node *start , int data);
struct node *add_e(struct node *start , int data);
struct node *add_pos(struct node *start);
struct node *add_b(struct node *start , int data){
	struct node *temp;
	temp = (struct node *)(malloc sizeof(struct node));
	if (start == NULL){ 
			temp->info= data;
			start=temp;
	
	}
	else {
		temp->info = data;
		temp - >link =start;
		start = temp;
	}
	return start;
}
struct node *add_e(struct node *start , int data) {
	struct node *temp;
	temp = (struct node *)(malloc sizeof(struct node));
	while(p != NULL){
		temp->info =data;
		temp->link= NULL;
		p->link = temp;
		p=p->link;
		
	}
	return start;
}

struct node *create(struct node *start){
	int n,i,data;
	start = NULL;
	printf ("enter the no of nodes");
	scanf("%d", &n);
	if(n==0)
		return start;
	printf("enter the no. to be inserted");
	scanf("%d", &data);
	start = add_b(start , data);
	for (i=2,i<=n;i++) {
		scanf("%d", &data);;
		start = add_e(start, data);
		
			}
	return start;
}
Struct node *(struct node *start)
{
	struct node *prev, *ptr, *next;
	prev = NULL;
	ptr = start;
	while (ptr!= NULL)
	{
		next = ptr->link;
		ptr->link = prev;
		prev = ptr;
		ptr = next;
	}
	start = prev;
	return start;
}
	}
}
