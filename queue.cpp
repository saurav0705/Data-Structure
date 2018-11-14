#include<iostream>
using namespace std;
int queue[8];
int maximum=8;
int rear=-1;
int front=-1;
void push(int n)
{
	
	if(front==-1 && rear==-1)
	{
		front=0;
		rear=0;
		queue[0]=n;
		//cout<<"ran";
	}
	else if(rear==maximum-1)
	{
		cout<<"overflow"<<endl;
	}
	else
	{
		//cout<<"ran";
		rear=rear+1;
		queue[rear]=n;
	}
}
void pop()
{
	if(front==-1 && rear==-1)
	{
		cout<<"underflow"<<endl;
	}
	else if(front>rear)
	{
		front=-1;
		rear=-1;
	  	}
	  	else
	  	{
	  		front=front+1;
	  	}
}
void peek_front()
{
	cout<<queue[front]<<endl;
}
void peek_rear()
{
	cout<<queue[rear]<<endl;
}
int main()
{
	push(9);
	push(7);
	push(4);
	push(9);
	push(7);
	push(4);
	push(11);
	push(7);
	push(4);
	
	pop();
	peek_front();
	peek_rear();
	return(0);
}