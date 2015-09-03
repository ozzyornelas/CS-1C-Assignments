/*****************************************************
 *AUTHOR         :  The Oz
 *CLASS          :  CS 1B
 *SECTION        :  TTh:  8am - 11:50am
 *DUE DATE       :  3/19/15
 *****************************************************/

#include "myHeader.h"

/***********************************************************
 *FUNCTION CheckGenre
 *__________________________________________________________
 * This function prompts the user to input a genre to search
 * into the list.
 * _________________________________________________________
 *
 * PRE-CONDITIONS
 *	NONE
 *POST-CONDITIONS
 *
 *	genre : genre to search
 ***********************************************************/

int IntInput(Menu optionType)
{
	int valueF;

	switch(optionType)
	{

	case YEAR : cout << endl <<"Which Year are you looking For? " ;
				cin >> valueF;
				break;

	case RATING : cout << "enter rating :";
	   	   	   cin >> valueF;
	   	   	   	  break;
	}

	cin.ignore(numeric_limits<streamsize>:: max(), '\n');

	return valueF;

}
