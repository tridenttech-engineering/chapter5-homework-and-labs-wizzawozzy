//hw5-12.cpp - displays the total owed
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Declaring variables    
	double price_item1 = 0.0;
	double price_item2 = 0.0;
	double totalcost = 0.0;

	//Getting the cost of Item 1 entered by the user
	cout<<"Enter the Price of Item 1: $";
	cin>>price_item1;

	//Getting the cost of Item 2 entered by the user
	cout<<"\nEnter the Price of Item 2: $";
	cin>>price_item2;

	/*If cost of Item1 and cost of Item2 are same
	 *Then half-off should be taken from Item2
	 *If cost of Item1 is greater than cost of Item2
	*Then half-off should be taken from Item2
	*If cost of Item2 is greater than cost of Item1
	*Then half-off should be taken from Item1
	*/
	if(price_item1==price_item2)
	totalcost=price_item1+(price_item2/2);
	else if(price_item1>price_item2)
	totalcost=price_item1+(price_item2/2);
	else if(price_item1<price_item2)
	totalcost=price_item2+(price_item1/2);

	//displaying the total amount the customer owes.
	cout<<"\nTotal amount the customer owes : $"<<std::fixed<< std::setprecision(2)<<totalcost;
	return 0;
}	//end of main function