/*****************************************************
 *AUTHOR         :  The Oz
 *CLASS          :  CS 1B
 *SECTION        :  TTh:  8am - 11:50am
 *DUE DATE       :  3/19/15
 *****************************************************/

#include "myHeader.h"

/************************************************************************
 * Searching Linked List
   ______________________________________________________________________
 * This program allows a user to search for an specified movie title,
 * genre, actor, rating, or year. I also displays the information of
 * all the movies found. The program prompts for the input file name and
 * the output file name.
 * ______________________________________________________________________
 * INPUT:
 *   fileName    :  Input file Name
 *   outFileName :  output file name
 *
 * CONSTANTS
 *	NUM     : project number
 *	NAME    : Programmer's name
 *	TYPE    : Assignment ('A') or Lab ('L')
 ************************************************************************/

int main ()
{
	//Declare Constants
	const int      NUM          =  5;
	const string   NAME         = "Searching Linked List";
	const char     TYPE         = 'A';

	const int      PROMPT_WIDTH = 40;
  //Declare variables

	string fileName;         //IN -   input file name
	string outFileName;      //IN -   ouput file name
	bool   validIn;          //CALC - validates the input of the user
	                         //       about the input file name
	bool   validOut;         //CALC - validates the input of the user
	                         //       about the output file name
	int    option;
	Menu   menuType;
	DvdInfo *head;           //CALC & OUT - head of the linked list
	ofstream oFile;         //        OUT - output stream

	string searchStr;

	int instance;
	int intSearch;

	intSearch = 0;
	head = NULL;
    //PROCESSING - print header in prompt
	PrintHeader(cout, NAME, TYPE, NUM);

	CheckInOutFile("input", fileName);
	CheckInOutFile("output", outFileName);


	//Processing - initialize linked list
	head = InputToList(fileName);


	//open assosiate output file
	oFile.open(outFileName.c_str());

	//OUTPUT - output hedaer to the output file
	PrintHeader(oFile, NAME, TYPE, NUM);

	 OutputMenuOptions();

	 option = GetAndCheckInput(0,7, "Enter a command: ");

	 while(option != EXIT)
	 {

		 menuType = Menu(option);

	    SearchItem(head, menuType, oFile);

		 cout << endl << endl;
		 OutputMenuOptions();
		 option = GetAndCheckInput(0,7, "Enter a command: ");

	 }

	//Close output file
	oFile.close();

	return 0;
}
