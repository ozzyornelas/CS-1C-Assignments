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

void CheckInOutFile(string fileType, string& fileName)
{
	string nameF;
	bool invalidEntry;

	do
	{
		cout << "Which " << fileType << " file would you like to use(type d for default file)? ";
		getline(cin, fileName);

		if(fileName.length() > 4)
		{

			nameF = fileName.substr(fileName.length()-4, fileName.length());
		}
		else if(fileName == "d" || fileName == "D" )
		{
			nameF = ".txt";
		}


		invalidEntry = ((fileName != "d" || fileName != "D" )&& nameF != ".txt");
		if(invalidEntry)
		{

				cout << "**** Wrong File format Type. Use the suffix \".txt\" ****" << endl;
		}
	}while(invalidEntry);

		if(fileType == "input")

		{
			fileName = "defaultInFile.txt";
		}
		else
		{
			fileName = "defaultOutFile.txt";
		}
}
