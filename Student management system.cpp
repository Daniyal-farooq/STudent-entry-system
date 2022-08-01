#include<iostream>
using namespace std ;
string arr1[20] , arr2[20] ,arr3[20] ,arr4[20] ,arr5[20] ;
int total = 0 ;
void enter()
{
	int choice = 0 ;
	cout<<"How many students do you want to enter : ";
	cin>>choice ;
	if ( total == 0 )
	{
		total = choice + total;
	for(  int i = 0 ; i < choice ; i++)
		{
			cout<<"Enter the data of student# "<<i+1<<endl;
			cout<<"Enter name       : ";
			cin>>arr1[i];
			cout<<"Enter rollno     : ";
			cin>>arr2[i];
			cout<<"Enter course     : ";
			cin>>arr3[i];
			cout<<"Enter class      : ";
			cin>>arr4[i];
			cout<<"Enter contactno. : ";
			cin>>arr5[i];
		}
	}
	else
	{

		for(  int i = total ; i < total + choice ; i++)
		{
			cout<<"Enter the data of student# "<<i+1<<endl;
			cout<<"Enter name       : ";
			cin>>arr1[i];
			cout<<"Enter rollno     : ";
			cin>>arr2[i];
			cout<<"Enter course     : ";
			cin>>arr3[i];
			cout<<"Enter class      : ";
			cin>>arr4[i];
			cout<<"Enter contactno. : ";
			cin>>arr5[i];
		}
		total = choice + total;
	}
}
void show()
{
	if ( total == 0 )
	{
		cout<<"No data has been entered.\n";
	}
	else
	{
		cout<<"\n\n";
		for( int i = 0 ; i < total  ; i++ )
		{
			cout<<"******Displaying the Data of the student# "<<i+1<<"******\n";
			cout<<"Name    : "<<arr1[i]<<endl;
			cout<<"Rollno  : "<<arr2[i]<<endl;
			cout<<"Course  : "<<arr3[i]<<endl;
			cout<<"Class   : "<<arr4[i]<<endl;
			cout<<"Contact : "<<arr5[i]<<endl;
		} 
	}
	
}
void search()
{
	string  rollno ;
	cout<<"Enter the rollno of the student : ";
	cin>>rollno;
	for ( int i = 0 ; i < total ; i++ )
	{
		if ( rollno == arr2[i] )
		{
			cout<<"The data of the required student is given below.\n";
			cout<<"Name    : "<<arr1[i]<<endl;
			cout<<"Rollno  : "<<arr2[i]<<endl;
			cout<<"Course  : "<<arr3[i]<<endl;
			cout<<"Class   : "<<arr4[i]<<endl;
			cout<<"Contact : "<<arr5[i]<<endl;
		}
	}
}
void update()
{
	string rollno ;
	cout<<"Enter the rollno whose data is to be updated : ";
	cin>>rollno;
	for( int i = 0 ; i < total ; i++ )
	{
		if ( rollno == arr2[i] )
		{
			cout<<"******The previous data of the required student is given below.******\n";
			cout<<"Name    : "<<arr1[i]<<endl;
			cout<<"Rollno  : "<<arr2[i]<<endl;
			cout<<"Course  : "<<arr3[i]<<endl;
			cout<<"Class   : "<<arr4[i]<<endl;
			cout<<"Contact : "<<arr5[i]<<endl;
			cout<<"\n\n******Update the data below******\n";
			cout<<"Enter the name     : ";
			cin>>arr1[i];
			cout<<"Enter the ROllno   : ";
			cin>>arr2[i];
			cout<<"Enter the Course   : ";
			cin>>arr3[i];
			cout<<"Enter the Class    : ";
			cin>>arr4[i];
			cout<<"Enter the contact  : ";
			cin>>arr5[i];
		}
	}
}
void deleterecord()
{
	
	if(total==0)
	{
		cout<<"No data is entered"<<endl;
	}
	else
	{
		int a;
	        	cout<<"Press 1 to delete all record"<<endl;
				cout<<"Press 2 to delete specific record"<<endl;
				cin>>a;
				if(a==1)
				{
					total=0;
					cout<<"******All record has been deleted!******"<<endl;
				}
				else if(a==2)
				{
				string rollno;
				cout<<"Enter the roll no of student whose data is to be deleted : "<<endl;
				cin>>rollno;
				for(int i=0;i<total;i++)
				{
					if(rollno==arr2[i])
					{
						for(int j=i;j<total;j++)
						{
						arr1[j]=arr1[j+1];
						arr2[j]=arr2[j+1];
					    arr3[j]=arr3[j+1];
						arr4[j]=arr4[j+1];
						arr5[j]=arr5[j+1];
				     	}
					total-=1;
					cout<<"******Your required record has been deleted******"<<endl;
					}
				}
				}
			else 
			{
				cout<<"The input is invalid. Please type correctly.";
			}
	}

}

void exit()
{
}
main()
{
	int value;
	while(true)
	{
		cout<<"\n\nPress 1 to enter student data : ";
		cout<<"\nPress 2 to show student data    : ";
		cout<<"\nPress 3 to search student data  : ";
		cout<<"\nPress 4 to update student data  : ";
		cout<<"\nPress 5 to delete student data  : ";
		cout<<"\nPress 6 to exit : \n";
		cin>>value;
		switch (value)
		{
			case 1:
				enter();
				break;
			case 2:
				show();
				break;
			case 3:
				search();
				break;
			case 4:
				update();
				break;
			case 5:
				deleterecord();
				break;
			case 6:
				exit(0);
				break;
			default:
				cout<<"Invalid choice.\n";
				break;						
		}
	}
	
}
