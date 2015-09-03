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
void TitleHeader(ostream& output, 	//OUT        - output stream
				Menu menuOption, string strIn,
				int intIn)

{

	switch(menuOption)
	{

		case OUTPUT : output << "List of all the movies: ";
		break;

		case ACTOR  : output << "Search by actor for "
							 << strIn << " Found:";
		break;

		case GENRE : output << "Search by genre for "
							<< strIn << " Found:";
		break;

		case YEAR : output << "Search by year for "
						   << intIn << " Found:";
		break;

		case RATING : output << "Search by rating for "
				             << intIn << " Found:";
		break;
	}

	output << endl;
	output << left;
	output << "MOVIE #  " << setw(48) << "TITLE " << "YEAR " <<"RATING "
		   << setw(19) << " GENRE" << "ALT GENRE" << right
		   << setw(19)<< "LEAD ACTOR" <<setw(38)  << "SUPPORTING ACTOR"
		   << endl;

	//movie
		Fill(output,'-' , 7);
		output << " ";
		//title
		Fill(output,'-' , 48);
		output << " ";
		//year
		Fill(output,'-' , 4);
		output << " ";
		//Rating
		Fill(output,'-' , 6);
		output << " ";
		//Genre
		Fill(output,'-' , 17);
		output << " ";
		//Alt Genre
		Fill(output,'-' , 17);
		output << " ";
		//lead actor
		Fill(output,'-' , 31);
		output <<" ";
		//supporting actor
		Fill(output,'-' , 19);
		output << " " << endl;
}
