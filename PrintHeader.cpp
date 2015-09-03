/*****************************************************
 *AUTHOR         :  The Oz
 *CLASS          :  CS 1B
 *SECTION        :  TTh:  8am - 11:50am
 *DUE DATE       :  3/19/15
 *****************************************************/

#include "myHeader.h"

/**********************************************************
*
* FUNCTION PrintHeader
*_________________________________________________________
* This function receives an assignment name, type
* and number then outputs the appropriate header -
* returns nothing.
*_________________________________________________________
* PRE-CONDITIONS
* asName  :  Assignment Name
* asType  :  Assignment Type
* asNum   :  Assignment Number
*
* POST-CONDITIONS
* This function will output the class heading.
* <Post-conditions are the changed outputs either
* passed by value or by reference OR anything affected
* by the function>
***********************************************************/


void PrintHeader(ostream& outputF, // OUT - class header to file
				 string asName,    // IN  - Assignment name
				 char asType,      // IN  - Type of project
								   //      (lab or assignment)
				 int asNum)        // IN  - Project number
{

	const char     PROGRAMMER[50]  = "The Oz";
	const char     CLASS[5]        = "CS1B";
	const char     SECTION[25]     = "TTh: 8:00a - 11:50a";
	const int      NUM             =  asNum;
	const string   NAME            =  asName;


	// OUTPUT - Standard Class Heading
	outputF << left;
	Fill(outputF,'*', 75);
	outputF << "\n*  PROGRAMMED BY :  " << PROGRAMMER;
	outputF << "\n*  "<< setw (14)     << "CLASS" <<   ":  " << CLASS;
	outputF << "\n*  "<< setw (14)     << "SECTION" << ":  " << SECTION;

	//This is printed in case a lab is called.
	if(toupper(asType) == 'L')
	{
		outputF << "\n*  Lab#"<< setw (10)  << NUM <<   ":  "
			    << NAME;
		outputF << "\n";
		Fill(outputF,'*', 75);
		outputF<<"\n\n";
		outputF << right;
	}

	//Called in the case the project is an Assignment
	else
	{
		outputF << "\n*  Assignment#"<< setw (3) << NUM <<  ":  "<< NAME;
		outputF << "\n";
		Fill(outputF,'*', 75);
		outputF<<"\n\n";
		outputF << right;
	}

}
