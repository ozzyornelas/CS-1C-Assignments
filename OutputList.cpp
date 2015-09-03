/*****************************************************
 *AUTHOR         :  The Oz
 *CLASS          :  CS 1B
 *SECTION        :  TTh:  8am - 11:50am
 *DUE DATE       :  3/3/15
 *****************************************************/

#include "myHeader.h"

/***********************************************************
 *FUNCTION OutputOneTitle
 *__________________________________________________________
 * This function displays the Movie's main actor/actress,
 * supporting actor/actress, genre, Alternate genre, year, rating,
 * and synopsis. Using the linked list, for one movie.
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
 * 	ACTOR_LENGHT: Width of the actor output line
 * 	NAME_LENGHT : Width of the leading actor name
 *
 *POST-CONDITIONS
 *
 *none, only the dvd information
 *
 ***********************************************************/
void OutputList(ostream& output, 	//OUT        - output stream
				DvdInfo *moviePtrM, int count) //OUT & CALC - Liked list of structs

{
	output  << setw(4) << count + 1 << setw (5) << " "<<left
			<< setw(30) << StringParsing(moviePtrM -> title)
			<< setw(20) <<moviePtrM -> year
			<< moviePtrM -> rating
			<< setw(19) << moviePtrM -> genre
			<< moviePtrM -> altGenre << right
			<< setw(19)<< moviePtrM -> leadingActor
			<<setw(38)  << moviePtrM -> supActor
			<< endl;


}
