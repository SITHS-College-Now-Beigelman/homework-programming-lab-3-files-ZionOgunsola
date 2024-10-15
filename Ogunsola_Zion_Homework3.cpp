//Zion Ogunsola
//Lecture 6
//10/15/2024

#include <iostream> //Includes iostream
#include <iomanip> //Includes iomanip
#include <fstream> //Includes fstream
using namespace std;

int main ()
{
    
   
 
     

    for (int i=0;i <= 7; i++) //Loops statement wile i is less than or equal to the number of transactions
    {
          double moneyStarting ; //Decalares variabe moneyStarting
          int transactions; //Decalres variable transactions
          char character1; //Declares variable
          double valueTransaction; //Decalres variable valueTransaction
          int typeOfTransaction; //Decalares variable typeOfTransaction
    
          ifstream inFile; //Declares variable
          ofstream outFile; //Declares variable
     
          

     

         inFile.open("inData.txt"); //Opens inFile
         outFile.open("outData.txt"); //Opens Outfile
    
     
        inFile >> moneyStarting >> character1 >>  valueTransaction ;
        outFile << "You have a starting balance of $" << 5000.00 << endl;

          if(character1 == ('W')) 
         {
             outFile << "You withdrawed $" << valueTransaction  << "you have $ " << moneyStarting- valueTransaction << " left after this transaction" << endl;
         }
        if (character1 == ('D'))
         {
             outFile << "You deposited $ " << valueTransaction << "you have $ " << moneyStarting+valueTransaction << " after this transaction" << endl;
         }
    }

    return 0;

}


    /* 

    outFile <<"STARTING BALANCE: $ " << moneyStarting << endl;
  
    outFile << "TYPE" << setw(12) << setfill ('.') << "AMOUNT"<< setw(21) << setfill ('.') << "BALANCE" << endl;
    outFile << character1 << setw(10) << setfill ('.') << valueTransaction << setw(20) << setfill('.') << moneyAfter << endl;

    outFile << character1 << setw(10) << setfill ('.') << valueTransaction << setw(20) << setfill('.') << moneyAfter << endl;
    outFile << character1 << setw(10) << setfill ('.') << valueTransaction << setw(20) << setfill('.') << moneyAfter << endl;
    outFile << character1 << setw(10) << setfill ('.') << valueTransaction << setw(20) << setfill('.') << moneyAfter << endl;
    outFile << character1 << setw(10) << setfill ('.') << valueTransaction << setw(20) << setfill('.') << moneyAfter << endl;
    outFile << character1 << setw(10) << setfill ('.') << valueTransaction << setw(20) << setfill('.') << moneyAfter << endl;
    outFile << character1 << setw(10) << setfill ('.') << valueTransaction << setw(20) << setfill('.') << moneyAfter << endl;
  
    if(character1 == ('W'))
    moneyAfter = moneyStarting - valueTransaction;
    
    if (character1 == ('D'))
    moneyAfter = moneyStarting + valueTransaction;


    
    inFile.close(); //Closes inFile
    outFile.close(); //Closes outFile
 


      
    }
    return 0; //Returns the function
}
*/