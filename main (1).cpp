/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>

using namespace std;

int main()
{
    //declare variable
    int adult, child;
    int ticket;
    double sales;
    
    //get input
    //read adult, child
    //promt
    cout<< "enter number of adult ticket:";
    //store input into variable
    cin >> adult;
    //print to varify
    //cout << "adult is" << adult <<endl;
cout<< "enter number of child tickets:";
    cin >> child;
    //processing
    //calculate total number of tickets
    ticket = adult + child;
    //calculate total sales
    sales = (adult * 12.50)+ (child * 5);
    //output
    cout << "ticket sold: " << ticket << endl;
    cout << "total sales: $" << sales <<endl;
    
    return 0;
}
   
   
    
 

