/*****************************************************
 *AUTHOR         :  The Oz
 *CLASS          :  CS 1B
 *SECTION        :  TTh:  8am - 11:50am
 *DUE DATE       :  3/19/15
 *****************************************************/

#include "myHeader.h"

/***********************************************************
 *FUNCTION ConvertMenuToNum
 *__________________________________________________________
 * This function
 * _________________________________________________________
 *
 * PRE-CONDITIONS
 * 	option - has to be previously defined
 *
 *POST-CONDITIONS
 *
 *	NONE
 ***********************************************************/
string ConvertMenuToString (Menu option)
{
	string menuString;  //CALC - enum Type

	switch (option)
	{
	case GENRE: menuString = "genre";
			break;
	case ACTOR: menuString = "actor";
		    break;
	case YEAR: menuString = "year";
			break;
	case RATING: menuString = "rating";
			break;

	}//End switch

	return menuString;

}//End of the function
