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

string StringInput(Menu optionType)
{
	string strF;

	switch(optionType)
	{

	case GENRE : cout << endl <<"Which Genre are you looking For? " ;
				getline(cin, strF);
				break;

	case TITLE : cout << "enter title :";
	   	   	   getline(cin, strF);
	   	   	   	  break;
	case ACTOR : cout << "What Actor are you looking for?";
				getline(cin, strF);
				break;
	}


	return strF;

}
