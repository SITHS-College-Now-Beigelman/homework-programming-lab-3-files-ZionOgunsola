//Zion Ogunsola
//Lecture 6
//10/15/2024

#include <iostream> //Includes iostream
#include <iomanip> //Includes iomanip
#include <fstream> //Includes fstream
using namespace std;

int main ()
{
            
     ifstream inFile; //Declares variable
     ofstream outFile; //Declares variable
     
     inFile.open("inData.txt"); //Opens inFile
     outFile.open("outData.txt"); //Opens Outfile
    
     outFile << "You have a starting balance of $" << 5000.00 << endl; //Prints statement to outfile

     int transactions; //Decalres variable transactions
     char character1; //Declares variable
     double valueTransaction; //Decalres variable valueTransaction
     int typeOfTransaction; //Decalares variable typeOfTransaction
     double moneyAfter;
     double moneyStarting= 5000.00  ; //Decalares variabe moneyStarting

 
     

    for (int i=0;i <= 7; i++) //Loops statement wile i is less than or equal to the number of transactions
    {
 
        inFile >> character1 >>  valueTransaction ; //Order infile is going to be read in 
 
           
          if(character1 == ('W')) //Sets if statement
         {
             moneyAfter= moneyStarting - valueTransaction; //Declares moneyAfter variable for this if statement
 
             outFile << "You withdrawed $ " << valueTransaction  << " you have $ " << moneyAfter  << " left after this transaction" << endl; //Prints statement to outFile
 
         }
        if (character1 == ('D')) //Sets if statement
         {
             moneyAfter = moneyStarting + valueTransaction; //Declares moneyAfter variable for this if statement
             outFile << "You deposited $ " << valueTransaction << " you have $ " << moneyAfter  << " after this transaction" << endl; //Prints statement to outFile
         }
     
     moneyStarting= moneyAfter; //Declares moneyStarting variable equal to moneyAfter
 
        }
     inFile.close(); //Closes inFile
     outFile.close(); //Closes outFile
 
     
 return 0; //Retjurns function

 
}
/* 
You have a starting balance of $5000
You withdrawed $ 200 you have $ 4800 left after this transaction
You withdrawed $ 800 you have $ 4000 left after this transaction
You withdrawed $ 40 you have $ 3960 left after this transaction
You deposited $ 90 you have $ 4050 after this transaction
You deposited $ 100 you have $ 4150 after this transaction
You deposited $ 1000 you have $ 5150 after this transaction
You withdrawed $ 20 you have $ 5130 left after this transaction
You withdrawed $ 20 you have $ 5110 left after this transaction
 */