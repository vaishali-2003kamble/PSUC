#include<iostream>
void setname(string name ,string *pername);
string getname(string pername);
void setage(int age,int *perage);
int getage(int perage);
void setaddress(string address,string *address);
int getaddress(string peraddress);
void setcity(string city,string *city);
string getcity(string percity);

int main()
{
	int age,perage;
	string name,pername,address,pweaddress,city,percity;
	cout<<"enter your name"<<endl;
	cin>>name;
	setname(name,&pername);
	cout<<"enter your address "<<endl;
	cin>>address;
	setname(address,&peraddress);
	cout<<"enter your city name"<<endl;
	cin>>city;
	setname(city,&percity;
	
}
