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
void OutputOneTitle(ostream& outputT, //OUT        - output stream
				    DvdInfo *moviePtrM)    //OUT & CALC - Liked list of structs
{



	const int TITLE_WIDTH  = 16;
	const int CHAR_LENGHT  = 75;
	const int GENRE_WIDTH  = 9;
	const int ACTOR_LENGHT = 19;
	const int NAME_LENGHT  = 25;


	if(moviePtrM != NULL)
	{

	Fill(outputT, '*', CHAR_LENGHT);
	outputT << endl;

	outputT << left;
	outputT << "Title: "
	        << StringParsing(moviePtrM -> title);


	outputT << endl;
	Fill(outputT, '-', CHAR_LENGHT);
	outputT << endl;
    outputT << left;

    //movie year
	outputT  <<"Year: " << setw(TITLE_WIDTH-3) << moviePtrM -> year;
			outputT  << right;

			outputT	 << "Rating: "
					 << moviePtrM -> rating;

	outputT << endl;
	Fill(outputT, '-', CHAR_LENGHT);
	outputT << endl;

	//leading actor
	outputT << left;
	outputT << setw(ACTOR_LENGHT) <<"Leading Actor:" << setw(NAME_LENGHT)
			<< moviePtrM -> leadingActor;

	//genre 1
	outputT << right;
	outputT	<< setw(GENRE_WIDTH) <<"Genre 1: " << moviePtrM -> genre;

	//supporting actor
	outputT << endl;
	outputT << left;
	outputT << setw(ACTOR_LENGHT)<<"Supporting Actor:" << setw(NAME_LENGHT)
			<< moviePtrM -> supActor;

	//genre 2
	outputT << right;
	outputT << setw(GENRE_WIDTH-1) << "Genre 2: " << moviePtrM -> altGenre;


	outputT << endl;
	Fill(outputT, '-', CHAR_LENGHT);
	outputT << endl;

	//plot
	outputT <<"Plot: " << endl;
			WordWrap(outputT, moviePtrM -> synopsis);

	outputT << endl;
	Fill(outputT, '*', CHAR_LENGHT);
	outputT << endl;
	outputT << endl << endl;
	//outputT << left;

	}//end of if

}
