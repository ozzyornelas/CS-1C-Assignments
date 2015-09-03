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

void SearchItem(DvdInfo *head,
				Menu option,
				ostream& output)
{

	DvdInfo *moviePtr;
	bool    found;

	int instances;
	moviePtr = head;
	found    = false;
	string   searchStr;
	int      intSearch;

	instances = 0;

	//TitleHeader(output, option, searchStr, intSearch);

	if(option == GENRE || option == ACTOR || option == TITLE)
	{

		searchStr = StringInput(option);

		if(option == GENRE || option == ACTOR)
		{
			TitleHeader(output, option, searchStr, intSearch);
		}
		else
		{
			cout << endl << "Searching for the title " + searchStr << endl;
		}

	}
	else
	{

		cout << endl << "Searching for the title " + searchStr << endl;
		intSearch = IntInput(option);
		TitleHeader(output, option, searchStr, intSearch);

	}

	//TitleHeader(output, option, findStr, findInt);
while(moviePtr != NULL && !found)
	{

	switch(option)
	{

	case OUTPUT :
			OutputList(output, moviePtr,instances);
					instances++;
					moviePtr = moviePtr -> next;
	break;

	case TITLE : if(moviePtr -> title == searchStr)
			{
					 found = true;
					 OutputOneTitle( output, moviePtr);

			}
			else
			{
					moviePtr = moviePtr -> next;
			}
	break;

	case GENRE : if(moviePtr -> genre == searchStr ||
					moviePtr -> altGenre  == searchStr)
				{

				cerr << endl << "Yes!" << endl;
				OutputList(output, moviePtr, instances);
				instances++;

				}

					moviePtr = moviePtr -> next;
	break;

	case ACTOR : if(moviePtr -> leadingActor == searchStr ||
			    moviePtr -> supActor     == searchStr)
			{
				cerr << endl << "inside" << endl;
				OutputList(output, moviePtr, instances);
				instances++;

			}

			moviePtr = moviePtr -> next;

	break;

	case YEAR : if(moviePtr -> year == intSearch)
			{
		OutputList(output, moviePtr, instances);
				instances++;

			}

			moviePtr = moviePtr -> next;

	break;

	case RATING : if(moviePtr -> rating == intSearch)
			{
		OutputList(output, moviePtr, instances);
			    instances++;

			}

		moviePtr = moviePtr -> next;

		break;

	}//end of switch

	}//end of while

	if (option == TITLE)
	{
		if(found)
		{

			cout << "Found the movie " + searchStr + "!" << endl;
		}
		else
		{

			cout << "Sorry, the movie \"" << searchStr << "\" was not found." << endl;

		}
	}

	else
	{
		OutputFound(option, searchStr, intSearch, instances);
	}


}//end of function
