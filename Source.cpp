#include<iostream>
#include<conio.h>

using namespace std;

struct node{
int data;
node *next;
};

node *top=NULL;

bool isempty(){
if(top==NULL){
	cout<<"\nEmpty";
return true;
}
else{
	cout<<"\nNot empty";
	return false;
}
}

void push(int item){
node *temp;
temp=new node;
temp->data=item;
temp->next=top;
top=temp;
//return item;
}

void pop(){
	if(isempty()){
	cout<<"\nEmpty";}
	else{
node *temp;
temp=top;
top=top->next;
delete(temp);
}
	}

void display(){
if(isempty())
	cout<<"\nEmpty";
else
{
	while(top!=NULL){
cout<<"\nElement At Top Is:::"<<top->data;
	}
	}
}

int main(){
	int i,ch;
	while(1){
	cout<<"\n1.For Push \n 2.For Pop \n 3.For Dispaly\n";
	cin>>ch;
	if(ch==1){
	cout<<"\nEnter Item To Push::";
	cin>>i;
	push(i);
	}
else if(ch==2){
	cout<<"\nPop::";
	pop();
	}
else if(ch==3){
	display();
	}
	}
getch();
}