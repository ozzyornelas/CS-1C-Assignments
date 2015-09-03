/*****************************************************
 *AUTHOR         :  The Oz
 *CLASS          :  CS 1B
 *SECTION        :  TTh:  8am - 11:50am
 *DUE DATE       :  3/19/15
 *****************************************************/

#include "myHeader.h"

/***********************************************************
 *FUNCTION StringParsing
 *__________________________________________________________
 * This function truncates the title if it is over 44 words to have
 * 42 plus "...".
 * _________________________________________________________
 *
 * PRE-CONDITIONS
 * 	fileName  : input file name
 *
 * CONSTANTS
 * 	MAX_LENGHT : Maximum lenght that the title can ce
 *
 *POST-CONDITIONS
 *
 * outtitle :  the modifed title
 *
 ***********************************************************/

string StringParsing(string title) //IN - movie title
{

	const int MAX_LENGHT = 48;

	int lenght;          //CALC - lenght of the string
	int count;           //CALC - For loop LCV
	string outTitle;     //OUT  - Final title after being modified

	lenght = title.length();

	//from 0 to title lenght, create a string
	for(count = 0; count < lenght; count++)
	{
		outTitle += title[count];

		//if it is larger than the max, truncate
		if(outTitle.length() > MAX_LENGHT)
		{
			outTitle = outTitle.substr(0, 45) + "...";

		}

	}

	return outTitle;
}
