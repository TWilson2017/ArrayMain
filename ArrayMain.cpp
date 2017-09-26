//------------------------------------------------------------------
// File name:   ArrayMain.cpp
// Assign ID:   PROG3a
// Due Date:    09/29/17 at 11pm
//
// Purpose:     Give student experience using arrays and vectors, and for
//              developing, testing and integrating vetted function components.
//
// Author:      twilson Tishauna Wilson
//
//------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <vector>
using namespace std;

void Load(int A[], int & Asize)
{
    
    do{
        cout << "Enter N, the #values (must be >= 0): ";
        cin >> Asize;
    }while( Asize>25 || Asize<0);
        
        cout << "Enter next value: ";
        for(int k=0; k<Asize; k++)
        {
            cin >> A[k];
        }
    
}


void Display(string OutputLabel, int B[], int Bsize)
{
    cout << B[Bsize-1] << " VALUES in First: ";
    for(int d=1; d<=Bsize; d++)
    {
        cout << B[d-1] << ' ';
    }
}   

int main()
{
   //----------------------------------------------------------------------
   //  Declare variables
   //----------------------------------------------------------------------

    int N,
    array[N];

   //-| ----------------------------------------------------------------------
   //-| Print the copyright notice declaring authorship.
   //-| ----------------------------------------------------------------------
   cout << endl << "(c) 2017, twilson Tishauna Wilson, cmesidor Christopher Mesidor" << endl << endl; 


   //-| ----------------------------------------------------------------------
   //-| 1. Algorithm step 1.
   //-| ----------------------------------------------------------------------
   
   
  /*1*/  Load(array, N);
    
  /*2*/  Display("VALUES in First: ", array, N);


   //-| ----------------------------------------------------------------------
   //-| 2. Algorithm step 2.
   //-| ----------------------------------------------------------------------
   


   //-| ----------------------------------------------------------------------
   //-| 3. Last step:
   //-| ----------------------------------------------------------------------


   //-| ----------------------------------------------------------------------
   //-| Print the copyright notice declaring authorship again.
   //-| ----------------------------------------------------------------------
   cout << endl << "(c) 2017, twilson Tishauna Wilson" << endl << endl;  


   return 0;

}//main
