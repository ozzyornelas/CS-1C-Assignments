/*****************************************************
 *AUTHOR         :  The Oz & CingarBear
 *CLASS          :  CS 1B
 *SECTION        :  TTh:  8am - 11:50am
 *DUE DATE       :  3/10/15
 *****************************************************/
#include "myHeader.h"

/***********************************************************
 *FUNCTION CalcPrompt
 *__________________________________________________________
 * This function will calculate the prompt col width
 *	 given the two error messages. It will compare
 *	 the two messages and make the size of the column
 *	 to the larger column length
 *__________________________________________________________
 *
 * PRE-CONDITIONS
 * shortStr - has to be previously defined
 * longStr  - has to be previously defined
 *POST-CONDITIONS
 *	NONE
 ***********************************************************/

int CalcPrompt(string shortStr, //IN - Shortest Error Message
			   string longStr)  //IN - longest Error Message
{
	int colmn;

	if(shortStr.length() > longStr.length())
	{
		colmn = shortStr.length();
	}
	else if(shortStr.length() < longStr.length())
	{
		colmn = longStr.length();
	}
	else
	{
		colmn = shortStr.length();
	}//End if else if statement

	return colmn;
}//End of the function
