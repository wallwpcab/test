#include<iostream>
#include<malloc.h>
using namespace std;
struct node
{
int data;
struct node *link;
};
struct node *header,*ptr,*temp;
int insert();
int display();
int main()
{
int choice,count=1;
header=(struct node*)malloc(sizeof(struct node));
header->data=NULL;
header->link=NULL;
while(count)
{
cout<<"\n 1.insert node";
cout<<"\n 2.Display";
cout<<"\n3.Exit";
cout<<"enter your choice";
cin>>choice;
if(choice==1)
{
insert();
}
else if(choice==2)
{
display();
}
else if(choice==3)
{
count=0;
break;
}
else
{
cout<<"wrong input!please try again";
}
}
return 0;
int insert()
{
int data_value;
cout<<"enter data of the node!";
cin>>data_value;
temp=(struct node *)malloc(sizeof(struct node));
ptr=header;
while(ptr->link!=NULL)
{
ptr=ptr->link;
}
temp->data=data_value;
temp->link=ptr->link;
ptr->link=temp;
}
int display()
{
printf("the linked list:");
ptr=header;
while(ptr->link!=NULL)
{
ptr=ptr->link;
cout<<ptr->data;
}
return 0;
}
}
