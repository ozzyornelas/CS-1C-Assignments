/*****************************************************
 *AUTHOR         :  The Oz
 *CLASS          :  CS 1B
 *SECTION        :  TTh:  8am - 11:50am
 *DUE DATE       :  3/19/15
 *****************************************************/

#ifndef MYHEADER_H_
#define MYHEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <fstream>
#include <limits>
#include <ios>
#include <cstdlib>
#include <sstream>


using namespace std;

enum Menu{ EXIT,
		   OUTPUT,
		   TITLE,
		   GENRE,
		   ACTOR,
		   YEAR,
		   RATING
};

//struct class with all of the movie information
struct DvdInfo{

	string         title;
	string         leadingActor;
	string         supActor;
	string 		   genre;
	string         altGenre;
	int            year;
	int            rating;
	string         synopsis;

	DvdInfo       *next;

};

/***********************************************************
 *PrintHeaderToFile
 *	 This function takes care of the class heading so it
 *	 prints the most proper one (lab or assignment)
 *	 -Returns nothing -->This will ouput class heading
 ***********************************************************/
void PrintHeader(ostream& outputF, // OUT - class header to file
				 string asName,    // IN  - Assignment name
				 char asType,      // IN  - Type of project
								   //      (lab or assignment)
				 int asNum);       // IN  - Project number

/***********************************************************
 *InputToList
 *	 This function creates a linked list of structs with
 *   the Movie's main actor/actress, supporting actor/actress,
 *   genre, Alternate genre, year, rating, and synopsis.
 *	 -Returns nothing --> the linked list
 ***********************************************************/
DvdInfo* InputToList(string fileName); // IN - Input file name


/***********************************************************
 *Fill
 *	 This function uses the fill function to fill a whole
 *   line with a certain characeter and then it clears it
 *   for the next one to be written anything.
 *	 -Returns nothing --> the filled line
 ***********************************************************/
void Fill(ostream& outputT, //OUT - output stream
		  char fillChar,    //IN  - character to fill the line with
		  int width);       //IN  - width of the line to be filled out

/***********************************************************
 *StringParsing
 *	 This function truncates the title if it is over 44 words
 *	 to have 42 plus "...".
 *	 -Returns nothing --> the modifed title
 ***********************************************************/
string StringParsing(string title); //IN - movie title

/***********************************************************
 *WordWrap
 *	 This function formats the synopsis to be in a paragraph
 *   instead of a long sentence. It formats it to be 75 spaces
 *   per line.
 *	 -Returns nothing --> wrapped paragraph
 ***********************************************************/
void WordWrap(ostream& outputT, //OUT - Output stream
		      string synopsis); //IN   - synopsis of the movie

/***********************************************************
 *OutputInfo
 *	 This function displays the Movie's main actor/actress,
 *   supporting actor/actress, genre, Alternate genre, year,
 *   rating, and synopsis. Using the linked list
 *	 -Returns nothing --> the linked list contents displayed
 ***********************************************************/
void OutputInfo(ostream& outputT, //OUT        - output stream
				DvdInfo *head,	  //OUT & CALC - Liked list of structs
				Menu menuNum);

void OutputMenuOptions();

string ConvertMenuToString (Menu option);

int GetAndCheckInput(const int MIN, //IN - Min int input
					 const int MAX, //IN - Max int input
					 string prompt); //IN - Prompt to output

void SearchItem(DvdInfo *head, Menu option,
				ostream& output);

void OutputOneTitle(ostream& outputT, //OUT        - output stream
				    DvdInfo *moviePtrM);    //OUT & CALC - Liked list of structs

string StringInput(Menu optionType);

int IntInput(Menu optionType);

void OutputList(ostream& output, 	//OUT        - output stream
				DvdInfo *moviePtrM, int count); //OUT & CALC - Liked list of structs

void TitleHeader(ostream& output, 	//OUT        - output stream
				Menu menuOption, string strIn,
				int intIn);

void OutputFound(Menu optionType, string inStr, int inInt, int instances);

void CheckInOutFile(string fileType, string& fileName);

int CalcPrompt(string shortStr, //IN - Shortest Error Message
			   string longStr);  //IN - longest Error Message
#endif /* MYHEADER_H_ */
