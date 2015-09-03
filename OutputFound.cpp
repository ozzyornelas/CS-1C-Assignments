/*****************************************************
 *AUTHOR         :  The Oz
 *CLASS          :  CS 1B
 *SECTION        :  TTh:  8am - 11:50am
 *DUE DATE       :  3/19/15
 *****************************************************/

#include "myHeader.h"

/***********************************************************
 *FUNCTION SearchItem
 *__________________________________________________________
 * This function
 * _________________________________________________________
 *
 * PRE-CONDITIONS
 * 	outputT        : output stream
 * 	head           : linked list
 * 	searchChoice   : Option NUmber
 *
 *POST-CONDITIONS
 *
 *	NONE
 ***********************************************************/

void OutputFound(Menu optionType, string inStr, int inInt, int instances)
{

	string optionStr;

	optionStr = ConvertMenuToString(optionType);

	if(optionType == TITLE || optionType == GENRE || optionType == ACTOR)
	{

		if(instances > 0)
		{
			cout << "Found " << instances << " movies for the " << optionStr << " "<< inStr;
		}
		else
		{

			cout << endl << "Sorry, no movies for the " << optionStr << " "
									<< inInt << " were found" << endl;
		}
	}

	else if(optionType == YEAR || optionType == RATING)
	{

		if(instances > 0)
		{
			cout << "Found " << instances << " movies for the " << optionStr
				 << " "<< inInt;
		}
		else
		{


		cout << endl << "Sorry, no movies for the " << optionStr << " "
						<< inInt << " were found" << endl;
		}

	}


}
