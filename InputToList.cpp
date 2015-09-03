/*****************************************************
 *AUTHOR         :  The Oz
 *CLASS          :  CS 1B
 *SECTION        :  TTh:  8am - 11:50am
 *DUE DATE       :  3/19/15
 *****************************************************/

#include "myHeader.h"

/***********************************************************
 *FUNCTION InputToList
 *__________________________________________________________
 * This function creates a linked list of structs with
 * the Movie's main actor/actress, supporting actor/actress,
 * genre, Alternate genre, year, rating, and synopsis.
 * _________________________________________________________
 *
 * PRE-CONDITIONS
 * 	fileName  : input file name
 *
 *POST-CONDITIONS
 *
 * head :  linked list
 *
 ***********************************************************/

DvdInfo* InputToList(string fileName) // IN - Input file name
{

	//initialize input stream
	 ifstream inFile;
	 //assosiate file
	 inFile.open(fileName.c_str());

	 DvdInfo *head;                  //CALC - The linked list head
	 DvdInfo *perPtr;                //CALC - list pointer

	 head   = NULL;


	 perPtr = new DvdInfo;

	 //while file info exists and the pointer points to something
	 while(inFile && perPtr != NULL)
	 {

		 getline(inFile, perPtr -> title);
		 getline(inFile, perPtr -> leadingActor);
		 getline(inFile, perPtr -> supActor);
		 getline(inFile, perPtr -> genre);
		 getline(inFile, perPtr -> altGenre);

		 inFile >> perPtr -> year;
		 inFile >> perPtr -> rating;

		 inFile.ignore(numeric_limits<streamsize>::max(),'\n');

		 getline(inFile, perPtr -> synopsis);

		 inFile.ignore(numeric_limits<streamsize>::max(),'\n');

		 //go to the next posistion
		 perPtr -> next = head;
		 head = perPtr;
		 perPtr = new DvdInfo;
	 }

	// cerr << endl << "Outside" << endl;

	 //delete pointer
	 delete perPtr;

	 //set to NILL
	 perPtr = NULL;

	 //close output file
	 inFile.close();

	 return head;

}
