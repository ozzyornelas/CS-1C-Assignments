/*****************************************************
 *AUTHOR         :  The Oz
 *CLASS          :  CS 1B
 *SECTION        :  TTh:  8am - 11:50am
 *DUE DATE       :  3/19/15
 *****************************************************/

#include "myHeader.h"

/***********************************************************
 *FUNCTION OutputInfo
 *__________________________________________________________
 * This function displays the Movie's main actor/actress,
 * supporting actor/actress, genre, Alternate genre, year, rating,
 * and synopsis. Using the linked list
 *
 * ***function to be modifed****
 * _________________________________________________________
 *
 * PRE-CONDITIONS
 * 	outputT  : output stream
 * 	*head    : Liked list of structs
 *
 * CONSTANTS
 * 	TITLE_WIDTH : Title width
 *  CHAR_LENGHT : Max char lenght for the fill
 * 	GENRE_WIDTH : With to setw genre
 *
 *POST-CONDITIONS
 *
 *none, only the dvd information
 *
 ***********************************************************/
void OutputInfo(ostream& outputT, //OUT        - output stream
				DvdInfo *head, Menu menuNum)    //OUT & CALC - Liked list of structs
{

	DvdInfo* moviePtrM; //CALC - points to the liked list and acceses the data

	//moviePtrM = head;

//	if(menuNum == OUTPUT)
//	{
//
//
//		//while the pointer points to something
//	while(moviePtrM != NULL)
//	{
//
//
//    OutputOneTitle(outputT, moviePtrM);
//
//	moviePtrM = moviePtrM -> next;
//
//	}//end of while
//
//
//	}


		OutputOneTitle(outputT, moviePtrM);



}
