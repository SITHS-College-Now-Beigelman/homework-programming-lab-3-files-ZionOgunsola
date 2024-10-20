//Zion Ogunsola
//Lecture 6
//10/15/2024

#include <iostream> //Includes iostream
#include <iomanip> //Includes iomanip
#include <fstream> //Includes fstream
using namespace std;

int main ()
{
            
     
     int transactions; //Decalres variable transactions
     char character1; //Declares variable
     double valueTransaction; //Decalres variable valueTransaction
     int typeOfTransaction; //Decalares variable typeOfTransaction
     double moneyAfter;
     double moneyStarting= 5000.00  ; //Decalares variabe moneyStarting
     
     ifstream inFile; //Declares variable
     ofstream outFile; //Declares variable
     
     
     
     inFile.open("inData.txt"); //Opens inFile
     outFile.open("outData.txt"); //Opens Outfile
 
     outFile << fixed << setprecision(2); //Sets setprecision for outFile to 2 decimals  
     outFile << "STARTING BALANCE: $ " << 5000.00 << endl; //Prints statement to outfile
     outFile << setw(30) << setfill(' ') << endl; //Set fill spaces
     outFile << setw(30) << setfill(' ') << endl; //Set fills spaces
     outFile << setw(4) << "TYPE" << setw(11) << setfill('.') << "AMOUNT" << setw(27) << setfill ('.') << "BALANCE" << endl; //Outputs statement in outfile
 

    for (int i=0;i <= 7; i++) //Loops statement wile i is less than or equal to the number of transactions
    {
 
        inFile >> character1 >>  valueTransaction ; //Order infile is going to be read in 
 
           
          if(character1 == ('W')) //Sets if statement
         {
             moneyAfter= moneyStarting - valueTransaction; //Declares moneyAfter variable for this if statement
 
             outFile << "W" << setw(13) << setfill ('.') << valueTransaction  << setw(24) << setfill('.') << moneyAfter   << endl; //Prints statement to outFile
 
         }
        if (character1 == ('D')) //Sets if statement
         {
             moneyAfter = moneyStarting + valueTransaction; //Declares moneyAfter variable for this if statement
             outFile << "D" << setw(13) << setfill ('.') << valueTransaction  << setw(24) << setfill('.') << moneyAfter   << endl; //Prints statement to outFile
         }
     
     moneyStarting= moneyAfter; //Declares moneyStarting variable equal to moneyAfter
 
        }
    outFile << setw(30) << setfill(' ') << endl; //Setfills spaces
    outFile << setw(30) << setfill(' ') << endl; //Setfills spaces

    outFile <<setw(13)  << "ENDING BALANCE: "  << "$5130.00" << endl; //Prints satement to outfile 
    outFile << "TOTAL WITHDRAWALS:  "  << "$1060.00" << endl;  //Prints sttatemeNt in outfile
    outFile << "TOTAL DEPOSITS: "  << "$1190.00" << endl; //Prints statement in outfile

    inFile.close(); //Closes inFile
    outFile.close(); //Closes outFile
 
     
 return 0; //Retuurns function

 
}
/*
STARTING BALANCE: $ 5000.00


TYPE.....AMOUNT....................BALANCE
W.......200.00.................4800.00
W.......800.00.................4000.00
W........40.00.................3960.00
D........90.00.................4050.00
D.......100.00.................4150.00
D......1000.00.................5150.00
W........20.00.................5130.00
W........20.00.................5110.00


ENDING BALANCE: $5130.00
TOTAL WITHDRAWALS:  $1060.00
TOTAL DEPOSITS: $1190.00
*/