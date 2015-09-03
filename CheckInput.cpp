/*****************************************************
 *AUTHOR         :  The Oz & CingarBear
 *CLASS          :  CS 1B
 *SECTION        :  TTh:  8am - 11:50am
 *DUE DATE       :  3/12/15
 *****************************************************/

#include "myHeader.h"

/**********************************************************
 * FUNCTION GetAndCheckInput
 *_________________________________________________________
 * Get an input and error check if the place is valid to take
 * or it even exist.
 *_________________________________________________________
 * PRE-CONDITIONS
 * 	MIN - has to be previously defined
 * 	MAX - has to be previously defined
 *
 * POST-CONDITIONS
 *
 *  Returns the user's input
 ***********************************************************/
int GetAndCheckInput(const int MIN, //IN - Min int input
					 const int MAX, //IN - Max int input
					 string prompt) //IN - Prompt to output
{

	bool invalidInt;    //CALC - invalid int condition
	long long optionF;  //IN   - Menu option number
	int errColmn;       //CALC - Colmn size for error mesage setw()
	string str1;		//CALC - stores wrong number into a string
	ostringstream  errMessage1; //CALC & OUT  - first error message
	ostringstream  errMessage2; //CALC & OUT  - second error message
	invalidInt = false;

	do{

		cout << prompt;

		//if character is inputed
		if(!(cin >> optionF))
		{
			cout << "\n**** Please input a NUMBER between " << MIN
				  <<" and " << MAX <<" ****\n\n";
			cin.clear();

			cin.ignore(numeric_limits<streamsize>:: max(), '\n');
			invalidInt = true;

			OutputMenuOptions(); //output options menu
		}
		//if it is out of boundaries
		else if (optionF < MIN || optionF > MAX)
		{
			errMessage1 << "The number " << optionF
				                        << " is and invalid entry";

			errMessage2 << "Please input a number between "
					      << MIN << " and " << MAX;

			//CalcPrompt - Will calculate the setw for the error message
			errColmn = CalcPrompt(errMessage1.str(), errMessage2.str());

			cout << left;
			cout << "\n**** " << setw(errColmn) << errMessage1.str() << " ****";
			cout << "\n**** " << setw(errColmn) << errMessage2.str() << " ****\n";

		}
		else
		{
			invalidInt = false;
		}



	}while(invalidInt);//End do while loop

	cin.ignore(numeric_limits<streamsize>:: max(), '\n');

	return optionF;
}//End of the function
