#include<bits/stdc++.h>

using namespace std;
void mainMenu();
class Management
{
	public:
		Management()
		{
			mainMenu();
		}
};


class Details
{
	public:
		static string name,gender;
		int phoneNo;
		int age;
		string add;
		static int cId;
		char arr[100];
		void information()
		{
			cout<<"\nEnter the customer ID : ";
			cin>>cId;
			cout<<"\nEnter the name : ";
			cin>>name;
			cout<<"\nEnter the age : ";
			cin>>age;
			cout<<"\nAdress : ";
			cin>>add;
			cout<<"\nGender : ";
			cin>>gender;
			cout<<"Your details are saved with us\n"<<endl;
			
		}
};

int Details::cId;
string Details::name;
string Details::gender;

class Registration
{
	public:
	static int choice;
	int choice1;
	int back;
	static float charges;
	void flights()
	{
		string flightN[]={"Dubai","Canada","UK","USA","Australia","Europe"};
		for(int a=0;a<6;a++)
		{
			cout<<(a+1)<<".flight to "<<flightN[a]<<endl;
		}
		cout<<"\nWelcome to Airlines!"<<endl;
		cout<<"Choose the number with respect to the country of ur choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				{
					cout<<"*********************Welcome to the Dubai Emirates*********************\n"<<endl;
					cout<<"Following are the flights available\n"<<endl;
					cout<<"1.DUB - 498"<<endl;
					cout<<"\t 06-07-2022 | 4:00 AM | 08 HRS | Rs.7500"<<endl;
					cout<<"2.DUB - 602"<<endl;
					cout<<"\t 06-07-2022 | 9:00 AM | 10 HRS | Rs.9000"<<endl;
					cout<<"3.DUB - 204"<<endl;
					cout<<"\t 06-07-2022 | 2:00 PM | 11 HRS | Rs.10000"<<endl;
					cout<<"Choose the timings and dates : ";
					cin>>choice1;
					if(choice1==1)
					{
						charges=7500;
						cout<<"\nYou have successfully booked the flight DUB - 498"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else if(choice1==2)
					{
						charges=9000;
						cout<<"\nYou have successfully booked the flight DUB - 602"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else if(choice1==3)
					{
						charges=10000;
						cout<<"\nYou have successfully booked the flight DUB - 204"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else
					{
						cout<<"Invalid input , shifting to the previous menu"<<endl;
						flights();
					}	
						
					cout<<"press any key to go back to main menu : "<<endl;
					cin>>back;
					if(back==1)
					{
						mainMenu();
					}
					else
					{
						mainMenu();
					}
					break;
		
					
				}
			
			
			case 2:
				{
					cout<<"*********************Welcome to the Canadian Airlines*********************\n"<<endl;
					cout<<"Following are the flights available\n"<<endl;
					cout<<"1.CA - 101"<<endl;
					cout<<"\t 06-07-2022 | 4:00 AM | 08 HRS | Rs.7500"<<endl;
					cout<<"2.CA - 201"<<endl;
					cout<<"\t 06-07-2022 | 9:00 AM | 10 HRS | Rs.9000"<<endl;
					cout<<"3.CA - 301"<<endl;
					cout<<"\t 06-07-2022 | 2:00 PM | 11 HRS | Rs.10000"<<endl;
					cout<<"Choose the timings and dates : ";
					cin>>choice1;
					if(choice1==1)
					{
						charges=7500;
						cout<<"\nYou have successfully booked the flight CA - 101"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else if(choice1==2)
					{
						charges=9000;
						cout<<"\nYou have successfully booked the flight CA - 201"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else if(choice1==3)
					{
						charges=10000;
						cout<<"\nYou have successfully booked the flight CA - 301"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else
					{
						cout<<"Invalid input , shifting to the previous menu"<<endl;
						flights();
					}	
						
					cout<<"press any key to go back to main menu : "<<endl;
					cin>>back;
					if(back==1)
					{
						mainMenu();
					}
					else
					{
						mainMenu();
					}
					break;
					
				}
				
			case 3:
				{
					cout<<"*********************Welcome to the UK Airways*********************\n"<<endl;
					cout<<"Following are the flights available\n"<<endl;
					cout<<"1.UK - 401"<<endl;
					cout<<"\t 06-07-2022 | 4:00 AM | 08 HRS | Rs.7500"<<endl;
					cout<<"2.UK - 501"<<endl;
					cout<<"\t 06-07-2022 | 9:00 AM | 10 HRS | Rs.9000"<<endl;
					cout<<"3.UK - 601"<<endl;
					cout<<"\t 06-07-2022 | 2:00 PM | 11 HRS | Rs.10000"<<endl;
					cout<<"Choose the timings and dates : ";
					cin>>choice1;
					if(choice1==1)
					{
						charges=7500;
						cout<<"\nYou have successfully booked the flight UK - 401"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else if(choice1==2)
					{
						charges=9000;
						cout<<"\nYou have successfully booked the flight UK - 501"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else if(choice1==3)
					{
						charges=10000;
						cout<<"\nYou have successfully booked the flight UK - 601"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else
					{
						cout<<"Invalid input , shifting to the previous menu"<<endl;
						flights();
					}	
						
					cout<<"press any key to go back to main menu : "<<endl;
					cin>>back;
					if(back==1)
					{
						mainMenu();
					}
					else
					{
						mainMenu();
					}
					break;
					
				}
			case 4:
				{
					cout<<"*********************Welcome to the US Airways*********************\n"<<endl;
					cout<<"Following are the flights available\n"<<endl;
					cout<<"1.US - 701"<<endl;
					cout<<"\t 06-07-2022 | 4:00 AM | 08 HRS | Rs.7500"<<endl;
					cout<<"2.US - 801"<<endl;
					cout<<"\t 06-07-2022 | 9:00 AM | 10 HRS | Rs.9000"<<endl;
					cout<<"3.US - 901"<<endl;
					cout<<"\t 06-07-2022 | 2:00 PM | 11 HRS | Rs.10000"<<endl;
					cout<<"Choose the timings and dates : ";
					cin>>choice1;
					if(choice1==1)
					{
						charges=7500;
						cout<<"\nYou have successfully booked the flight US - 701"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else if(choice1==2)
					{
						charges=9000;
						cout<<"\nYou have successfully booked the flight US - 801"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else if(choice1==3)
					{
						charges=10000;
						cout<<"\nYou have successfully booked the flight US - 901"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else
					{
						cout<<"Invalid input , shifting to the previous menu"<<endl;
						flights();
					}	
	
					cout<<"press any key to go back to main menu : "<<endl;
					cin>>back;
					if(back==1)
					{
						mainMenu();
					}
					else
					{
						mainMenu();
					}
					break;
					
				}
				
			case 5:
				{
					cout<<"*********************Welcome to the Australia Airways*********************\n"<<endl;
					cout<<"Following are the flights available\n"<<endl;
					cout<<"1.UK - 1001"<<endl;
					cout<<"\t 06-07-2022 | 4:00 AM | 08 HRS | Rs.7500"<<endl;
					cout<<"2.CA - 2001"<<endl;
					cout<<"\t 06-07-2022 | 9:00 AM | 10 HRS | Rs.9000"<<endl;
					cout<<"3.CA - 3001"<<endl;
					cout<<"\t 06-07-2022 | 2:00 PM | 11 HRS | Rs.10000"<<endl;
					cout<<"Choose the timings and dates : ";
					cin>>choice1;
					if(choice1==1)
					{
						charges=7500;
						cout<<"\nYou have successfully booked the flight Australia - 1001"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else if(choice1==2)
					{
						charges=9000;
						cout<<"\nYou have successfully booked the flight Australia - 2001"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else if(choice1==3)
					{
						charges=10000;
						cout<<"\nYou have successfully booked the flight Australia - 3001"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else
					{
						cout<<"Invalid input , shifting to the previous menu"<<endl;
						flights();
					}	
						
					cout<<"press any key to go back to main menu : "<<endl;
					cin>>back;
					if(back==1)
					{
						mainMenu();
					}
					else
					{
						mainMenu();
					}
		
					break;
				}
				
			case 6:
				{
					cout<<"*********************Welcome to the Europian Airways*********************\n"<<endl;
					cout<<"Following are the flights available\n"<<endl;
					cout<<"1.EU - 4001"<<endl;
					cout<<"\t 06-07-2022 | 4:00 AM | 08 HRS | Rs.7500"<<endl;
					cout<<"2.EU - 5001"<<endl;
					cout<<"\t 06-07-2022 | 9:00 AM | 10 HRS | Rs.9000"<<endl;
					cout<<"3.EU - 6001"<<endl;
					cout<<"\t 06-07-2022 | 2:00 PM | 11 HRS | Rs.10000"<<endl;
					cout<<"Choose the timings and dates : ";
					cin>>choice1;
					if(choice1==1)
					{
						charges=7500;
						cout<<"\nYou have successfully booked the flight EU - 4001"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else if(choice1==2)
					{
						charges=9000;
						cout<<"\nYou have successfully booked the flight EU - 5001"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else if(choice1==3)
					{
						charges=10000;
						cout<<"\nYou have successfully booked the flight EU - 6001"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else
					{
						cout<<"Invalid input , shifting to the previous menu"<<endl;
						flights();
					}	
						
					cout<<"press any key to go back to main menu : "<<endl;
					cin>>back;
					if(back==1)
					{
						mainMenu();
					}
					else
					{
						mainMenu();
					}
					break;
					
				}
			default :
				{
					cout<<"Invalid Input , shifting to main Menu !"<<endl;
					mainMenu();
					break;
				}
			
		}
			
	}
};

float Registration::charges;
int Registration::choice;

class Ticket : public Registration,public Details
{
	public:
		
		void bill()
		{
			string destination="";
			ofstream outf("records.txt",ios::app);
			{
				outf<<"*********************TATA Airlines*********************"<<endl;
				outf<<"*********************Tickets***************************"<<endl;
				outf<<"*******************************************************"<<endl;
				
				outf<<"Customer Id: "<<Details::cId<<endl;
				outf<<"Customer Name: "<<Details::name<<endl;
				outf<<"Customer Gender: "<<Details::gender<<endl;
				outf<<"\tDescription"<<endl<<endl;
				
				if(Registration::choice==1)
				{
					destination="Dubai";
				}
				else if(Registration::choice==2)
				{
					destination="Canada";
				}
				else if(Registration::choice==3)
				{
					destination="UK";
				}
				else if(Registration::choice==4)
				{
					destination="USA";
				}
				else if(Registration::choice==5)
				{
					destination="Australia";
				}
				else if(Registration::choice==6)
				{
					destination="Europe";
				}
				outf<<"Destinatinon: "<<destination<<endl;
				outf<<"Flight cost: "<<Registration::charges<<endl;
				
				
			}
			outf.close();
		}
		void display()
		{
			ifstream ifs("records.txt");
			{
				if(ifs)
				{
					while(!ifs.eof())
					{
						ifs.getline(arr,100);
						cout<<arr<<endl;
					}
				}
				else if(!ifs)
				{
					cout<<"File error"<<endl;
				}
				
			}
			ifs.close();
		}
};

void mainMenu()
{
	int lchoice;
	int schoice;
	int back;
	cout<<"\t*************Main Menu*********************"<<endl;
	cout<<"\t*******************************************"<<endl;
	cout<<"\t\t\t\t\t\t\t"<<endl;

	cout<<"\t\t Press 1  :  to add customer details   "<<endl;
	cout<<"\t\t Press 2  :  for flight reservatin     "<<endl;
	cout<<"\t\t Press 3  :  for Tickets and charges   "<<endl;
	cout<<"\t\t Press 4  :  to exit                   "<<endl;
	cout<<"\t\t\t\t\t\t\t"<<endl;
	cout<<"\t*********************************************"<<endl;

	cout<<"Enter the choice : ";
	cin>>lchoice;
	Details d;
	Registration r;
	Ticket t;
	switch(lchoice)
	{
		case 1:
		{
			cout<<"*********************Customers*********************"<<endl;
			d.information();
			cout<<"press any key to go back to main menu : "<<endl;
			cin>>back;
			if(back==1)
			{
				mainMenu();
			}
			else
			{
				mainMenu();
			}
			break;
		}
		case 2:
		{
			cout<<"*********************Book a flight ticket*********************"<<endl;
			r.flights();
			break;
		}
		case 3:
		{
			cout<<"*********************Get your ticket*********************"<<endl;
			t.bill();
			cout<<"press 1 to show your ticket : ";
			cin>>back;
			if(back==1)
			{
				t.display();
				cout<<"Press any key to go back : ";
				cin>>back;
				if(back==1)
				{ 
					mainMenu();
				}
				else
				{
					mainMenu();
				}
			}
			else
			{
				mainMenu();
			}
			break;
		}
		case 4:
		{
			cout<<"\n\n*********************Thank You*********************"<<endl;
			break;
		}
		default:
		{
			cout<<"Invalid Input , please try again !!\n"<<endl;
			mainMenu();
			break;
		}
		
	}
}	

int main()
{
	Management obj;
	return 0;
}
