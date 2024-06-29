#include<iostream>
using namespace std;
class Node{
	public:
   int Roll_No;
   string name;
   float marks;
   float per;
   Node *next_add;
   	
};
class Linked_List
{
  public:
  Node *head=NULL;
  //for insertion
  void Insert()
  {
  	int r;
  	string n;
  	float m;
  	cout<<"\n\n Enter Roll_No:";
  	cin>>r;
  	cout<<"\n\n Enter Name:";
  	cin>>n;
  	cout<<"\n\n Enter Marks:";
  	cin>>m;
  	Node *new_node=new Node;
  	new_node->Roll_No=r;
  	new_node->name=n;
  	new_node->marks=m;
  	new_node->per=m/100*100;
  	new_node->next_add=NULL;
  	if(head==NULL)
  	{
  	  head=new_node;	
	}
	else
	{
		Node *ptr=head;
		while(ptr->next_add !=NULL)
		{
			ptr=ptr->next_add;
		}
		ptr->next_add=new_node;
	}
	cout<<"\n\n New Node Inserted Successfully.....:";
  }
  //for searching record
  void Search()
  {
  	if(head==NULL)
  	{
  	 cout<<"\n\n Linked List is Empty:";	
	}
	else
	{
		int r,found=0;
		cout<<"\n\n Enter Roll No for Search:";
		cin>>r;
		Node *ptr=head;
		while(ptr!=NULL)
		{
			if(r==ptr->Roll_No)
			{
				cout<<"\n\n Roll_No"<<ptr->Roll_No;
				cout<<"\n\n Name"<<ptr->name;
				cout<<"\n\n Marks"<<ptr->marks;
				cout<<"\n\n Percentage"<<ptr->per;
				found++;
			}
			ptr=ptr->next_add;
		}
		if(found==0)
		{
			cout<<"\n\n Search Roll_No"<<r;
			cout<<"\n\n Cannot Found....";
		}
	}
  }
  void Count()
  {
  	if(head==NULL)
  	{
  	 cout<<"\n\n Linked List is Empty";	
	}
	else
	{
		int c=0;
		Node *ptr=head;
		while(ptr!=NULL)
		{
			c++;
			ptr=ptr->next_add;
		}
		cout<<"\n\n Total No of Nodes"<<c;
	}
  }
  void Update()
  {
  	if(head==NULL)
  	{
  	 cout<<"\n\n Linked List is Empty:";	
	}
	else
	{
		int r,found=0;
		cout<<"\n\n Enter Roll No for Updation:";
		cin>>r;
		Node *ptr=head;
		while(ptr!=NULL)
		{
			if(r==ptr->Roll_No)
			{
				cout<<"\n\n Enter Roll_No"<<ptr->Roll_No;
				cin>>ptr->Roll_No;
				cout<<"\n\n Enter Name"<<ptr->name;
				cin>>ptr->name;
				cout<<"\n\n Enter Marks"<<ptr->marks;
				cin>>ptr->marks;
				ptr->per=ptr->marks/100*100;
				cout<<"\n\n Record Updated Successfully!....";
				found++;
			}
			ptr=ptr->next_add;
		}
		if(found==0)
		{
			cout<<"\n\n Update Roll_No"<<r;
			cout<<"\n\n Cannot Found....";
		}
	}
  }
 
   void Delete()
  {
  	if(head==NULL)
  	{
  	 cout<<"\n\n Linked List is Empty:";	
	}
	else
	{
		int r,found=0;
		cout<<"\n\n Enter Roll No for Deletion:";
		cin>>r;
        if(r==head->Roll_No)
        {
        	Node *ptr=head;
        	head=head->next_add;
        	cout<<"\n\n Record Deleted Successfully...";
        	found++;
            delete ptr;
		}
       else
	   {
	   	Node *pre=head;
	   	Node *ptr=head->next_add;
	   	while(ptr!=NULL)
	   	{
	   	 if(r=ptr->Roll_No)	
	   	 {
	   	  pre->next_add=ptr->next_add;
	   	  	cout<<"\n\n Record Deleted Successfully...";
			 found++;
			 delete ptr;
			 break;	
		 }
		 pre=ptr;
		 ptr=ptr->next_add;
		 
		}
		} 
		if(found==0)
		{
			cout<<"\n\n Delete Roll_No"<<r;
			cout<<"\n\n Cannot Found....";	
		}
	}
  }
  
     
	void Show()
	{
			if(head==NULL)
  	{
  	 cout<<"\n\n Linked List is Empty:";	
	}
	else
	{
		Node *ptr=head;
		while(ptr!=NULL)
		{

				cout<<"\n\n Roll_No"<<ptr->Roll_No;
				cout<<"\n\n Name"<<ptr->name;
				cout<<"\n\n Marks"<<ptr->marks;
				cout<<"\n\n Percentage"<<ptr->per;
			ptr=ptr->next_add;
		}
	}
	}
};
int main()
{
   Linked_List obj;
   //lable
   p:
   	system("cls");
   int choice;
   cout<<"\n\n 1. Insert Record:";
   cout<<"\n\n 2. Search Record:";
   cout<<"\n\n 3. Count Node:";
   cout<<"\n\n 4. Update Record:";
    cout<<"\n\n 5. Delete Record:";
    cout<<"\n\n 6. Show All Record:";
    cout<<"\n\n 7. Exit:";
    cout<<"\n\n Your Choice:";
    cin>>choice;
   switch(choice)
   {
   	case 1:
   		system("cls");
   		obj.Insert();
   		break;
   	case 2:
	   	system("cls");
	   	obj.Search();
   		break;
   	case 3:
   		system("cls");
   		obj.Count();
   		break;
   	case 4:
   		system("cls");
   		obj.Update();
   		break;
   	case 5:
   		system("cls");
   		obj.Delete();
   		break;
   	case 6:
   		system("cls");
   		obj.Show();
   		break;
   	case 7:
   		exit(0);
   	default:
   		cout<<"\n\n Invalid Choice....: Please Try Again!";
   }
    goto p;
    	
 }
