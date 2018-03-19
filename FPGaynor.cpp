//Final Requirement of CS 111
//This program is a Tic Tac Toe Game
//To be played by two people

//Libraries that contain defintions for several functions to be used in the program
#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;

///tttDisplay outputs TIC TAC TOE
void tttDisplay()
{
	cout << endl << endl << setw(30) << "*********" << setw(3) << " " << "*********" << setw(5) << " " << "********" << endl
	 	 << setw(30) << "*********" << setw(3) << " " << "*********" << setw(4) << " " << "*******" << endl 
	 	 << setw(27) << "***" << setw(9) << " " << "***" << setw(6) << " " << "*****" << endl
		 << setw(27) << "***" << setw(9) << " " << "***" << setw(6) << " " << "***" << endl
	 	 << setw(27) << "***" << setw(9) << " " << "***" << setw(6) << " " << "**" << endl
	 	 << setw(27) << "***" << setw(9) << " " << "***" << setw(6) << " " << "**" << endl
	 	 << setw(27) << "***" << setw(9) << " " << "***" << setw(6) << " " << "***" << endl
	 	 << setw(27) << "***" << setw(9) << " " << "***" << setw(6) << " " << "*****" << endl
	 	 << setw(27) << "***" << setw(6) << " " << "*********" << setw(4) << " " << "*******" << endl 
		 << setw(27) << "***" << setw(6) << " " << "*********" << setw(5) << " " << "********" << endl;
		 
	cout << endl << endl << endl
		 << setw(30) << "*********" << setw(3) << " " << "*********" << setw(5) << " " << "********" << endl
	 	 << setw(30) << "*********" << setw(3) << " " << "*********" << setw(4) << " " << "*******" << endl 
	 	 << setw(27) << "***" << setw(6) << " " << "**     **" << setw(3) << " " << "*****" << endl
		 << setw(27) << "***" << setw(6) << " " << "**     **" << setw(3) << " " << "***" << endl
	 	 << setw(27) << "***" << setw(6) << " " << "*********" << setw(3) << " " << "**" << endl
	 	 << setw(27) << "***" << setw(6) << " " << "*********" << setw(3) << " " << "**" << endl
	 	 << setw(27) << "***" << setw(6) << " " << "**     **" << setw(3) << " " << "***" << endl
	 	 << setw(27) << "***" << setw(6) << " " << "**     **" << setw(3) << " " << "*****" << endl
	 	 << setw(27) << "***" << setw(6) << " " << "**     **" << setw(4) << " " << "*******" << endl  
		 << setw(27) << "***" << setw(6) << " " << "**     **" << setw(5) << " " << "********" << endl;
		 
	cout << endl << endl << endl
		 << setw(30) << "*********" << setw(3) << " " << "*********" << setw(3) << " " << "**********" << endl
	 	 << setw(30) << "*********" << setw(3) << " " << "*********" << setw(3) << " " << "**********" << endl 
	 	 << setw(27) << "***" << setw(6) << " " << "**     **" << setw(3) << " " << "***" << endl
		 << setw(27) << "***" << setw(6) << " " << "**     **" << setw(3) << " " << "***" << endl
	 	 << setw(27) << "***" << setw(6) << " " << "**     **" << setw(3) << " " << "*********" << endl
	 	 << setw(27) << "***" << setw(6) << " " << "**     **" << setw(3) << " " << "*********" << endl
	 	 << setw(27) << "***" << setw(6) << " " << "**     **" << setw(3) << " " << "***" << endl
	 	 << setw(27) << "***" << setw(6) << " " << "**     **" << setw(3) << " " << "***" << endl
	 	 << setw(27) << "***" << setw(6) << " " << "*********" << setw(3) << " " << "**********" << endl 
		 << setw(27) << "***" << setw(6) << " " << "*********" << setw(3) << " " << "**********" << endl;
		 
	cout << endl << setw(45) << "LET'S PLAY! " << endl;
}

//checkMove() checks whether or not the user inputted valid inputs as his/her move
void checkMove( int& TurnofPlayer, char& NextMove, bool& ValidMove, char& square1, char& square2, char& square3, char& square4, char& square5, char& square6, char& square7, char& square8, char& square9, char& marker )
{
	//defaults the marker of Player 1 into X and Player 2 into O
	if ( TurnofPlayer == 1 ) 
		marker = 'X';
	else marker = 'O';
			
	cout << setw(25) << "Player #" << TurnofPlayer << "'s turn: ";

		//Loop iterates until a valid move is inputted
		do {
			  cin >> NextMove; //Prompts the user to enter his/her move
			  ValidMove = true; 

			  //If the square has not been already chosen, it will be marked with the current player's marker (X/O)
			  if (NextMove == '1' && square1 == '1') 
				square1 = marker;
			  else if (NextMove == '2' && square2 == '2')
				square2 = marker;
			  else if (NextMove == '3' && square3 == '3')
				square3 = marker;
			  else if (NextMove == '4' && square4 == '4')
				square4 = marker;
			  else if (NextMove == '5' && square5 == '5')
				square5 = marker;
			  else if (NextMove == '6' && square6 == '6')
				square6 = marker;
			  else if (NextMove == '7' && square7 == '7')
				square7 = marker;
			  else if (NextMove == '8' && square8 == '8')
				square8 = marker;
			  else if (NextMove == '9' && square9 == '9')
				square9 = marker;
		    else //If the square has already been chosen, the user will be prompted to input his/her move into a square 
		    	 //That has not already been chosen
			{
				cout << setw (17) << " " << "Please enter a valid move: ";
				ValidMove = false;
			}
		} while ( !ValidMove ); //loop will end once a valid input has been inputted
//Function checkMove is now exited
}

//checkGO() checks whether the game has reached certain conditions for the game to be considered over
void checkGO ( bool& Winner, char& square1, char& square2, char& square3, char& square4, char& square5, char& square6, char& square7, char& square8, char& square9, bool& GameOver)
{
	//If one of the conidtions is true, all the following conditions after it will be skipped
		
	//Condition 1
	// If the first row of the table is fully occupied with either X's or O's
	if ( square1 != 1  && square2 != 2 && square3 != 3 )
		if ( square1 == square2 && square2 == square3 )
			{
				square1 = 'W', square2 = 'I', square3 = 'N';
				GameOver = true;
			} 
		
	//Condition 2
	// If the first column of the table is fully occupied with either X's or O's
	if ( square1 != 1 && square4 != 4 && square7 != 7)
		if ( square1 == square4 && square4 == square7 )
			{
				square1 = 'W', square4 = 'I', square7 = 'N';
				GameOver = true;
			}
		
	//Condition 3
	// If the last column of the table is fully occupied with either X's or O's
	if ( square9 != 9 && square6 != 6 && square3 != 3)
		if ( square9 == square6 && square6 == square3 )
			{
				square3 = 'W', square6 = 'I', square9 = 'N';
				GameOver = true;
			}
			
	//Condition 4
	// If the last row of the thable is fully occupied with either X's or O's		
	if ( square9 !=9 && square7 != 7 && square8 != 8 )	
		if ( square9 == square8 && square8 == square7 )
			{
				square7 = 'W', square8 = 'I', square9 = 'N';
				GameOver = true;
			}
	
	//Condition 5
	// If the left diagonal is fully occupied with either X's or O's
	if ( square5 != 5 || square9 != 9 || square1 != 1 )
		if ( square5 == square1 && square1 == square9 )
			{
				square1 = 'W', square5 = 'I', square9 = 'N';
				GameOver = true;
			}
	
	//Condition 6
	// If the right diagonal is fully occupied with either X's or O's	
	if (square3 != 3 || square5 != 5 || square7 != 7)
		if ( square5 == square3 && square3 == square7 )
			{
				square3 = 'N', square5 = 'I', square7 = 'W';
				GameOver = true;
			}
			
	//Condition 7
	//If the second or middle column is fully occupied with either X's or O's
	if (square2 != 2 || square5 != 5 || square8 != 8 )
		if ( square5 == square2 && square2 == square8 )
			{
				square2 = 'W', square5 = 'I', square8 = 'N';
				GameOver = true;
			}
	
	//Condition 8
	//If the second or middle row is fully occupied with either X's or O's
	if (square6 != 6 || square5 != 5 || square4 != 4)
		if ( square5 == square4 && square4 == square6 )
			{
				square4 = 'W', square5 = 'I', square6 = 'N';
				GameOver = true;
			}
	
	//Condition 9
	// If Conditions 1-8 haven't happened, this condition is made for a no-win situation
	if ( square1 != '1' && square2 != '2' && square3 != '3' 
	     && square4 != '4' && square5 != '5' && square6 != '6' 
		 && square7 != '7' && square8 != '8' && square9 != '9' 
		 && GameOver == false )
		 { 
		 	square1 = 'T', square2 = 'I', square3 = 'E',
		 	square4 = 'T', square5 = 'I', square6 = 'E',
		 	square7 = 'T', square8 = 'I', square9 = 'E';
			 
			//Game is over but there is no winner, the word TIE will be outputted with the end-of-game TicTacToe table
			GameOver = true;
			Winner = false;
		   
		   	cout << endl << endl << setw(34) << "*********" << setw(3) << " " << "*********" << setw(3) << " " << "**********" << endl
	 	 		 << setw(34) << "*********" << setw(3) << " " << "*********" << setw(3) << " " << "**********" << endl 
	 	 		 << setw(31) << "***" << setw(9) << " " << "***" << setw(6) << " " << "***" << endl
		 		 << setw(31) << "***" << setw(9) << " " << "***" << setw(6) << " " << "***" << endl
	 	 		 << setw(31) << "***" << setw(9) << " " << "***" << setw(6) << " " << "*********" << endl
	 	 		 << setw(31) << "***" << setw(9) << " " << "***" << setw(6) << " " << "*********" << endl
	 	 		 << setw(31) << "***" << setw(9) << " " << "***" << setw(6) << " " << "***" << endl
	 	 		 << setw(31) << "***" << setw(9) << " " << "***" << setw(6) << " " << "***" << endl
	 	 		 << setw(31) << "***" << setw(6) << " " << "*********" << setw(3) << " " << "**********" << endl 
		 		 << setw(31) << "***" << setw(6) << " " << "*********" << setw(3) << " " << "**********" << endl; 
		}
//function checkGO() is now exited
}

// p1WINNER() displays P1(Player #1) WIN 
void p1WINNER()
{
	cout << setw(39) << "**************" << setw(20) << "*********" << endl
		 << setw(40) << "***************" << setw(19) << "***********" << endl
		 << setw(41) << "***         ****" << setw(18) << "************" << endl
	 	 << setw(40) << "***        ****" << setw(19) << "*************" << endl
		 << setw(39) << "**************" << setw(20) << "******" << endl
	 	 << setw(38) << "*************" << setw(21) << "******" << endl
		 << setw(29) << "****" << setw(30) << "******" << endl
		 << setw(29) << "****" << setw(30) << "******" << endl
		 << setw(29) << "****" << setw(30) << "******" << endl
		 << setw(29) << "****" << setw(30) << "******" << endl
		 << setw(29) << "****" << setw(30) << "******" << endl
		 << setw(29) << "****" << setw(30) << "******" << endl << endl;
}

//p2WINNER() displays P2(Player #2) WIN 
void p2WINNER()
{
	cout << setw(39) << "**************" << "         ***********" << endl
		 << setw(40) << "***************" << "      **************" << endl
		 << setw(41) << "***         ****" << "   ***           ****" << endl
	 	 << setw(40) << "***        ****"  << "   ***            ****" << endl
		 << setw(39) << "**************" << "                  ****" << endl
	 	 << setw(38) << "*************" << "                 ****" << endl
		 << setw(29) << "****" << "                        *****" << endl
		 << setw(29) << "****" << "                      *****" << endl
		 << setw(29) << "****" << "                    ******" << endl
		 << setw(29) << "****" << "                  *******" << endl
		 << setw(29) << "****" << "                *****************" << endl
		 << setw(29) << "****" << "               *******************" << endl << endl;
}

//GO() outputs the winner of the game and if GO hasn't happend yet
//It switches players for their next moves
void GO( bool& GameOver, bool& Winner, char& square1, char& square2, char& square3, char& square4, char& square5, char& square6, char& square7, char& square8, char& square9, int& TurnofPlayer)
{
	//If any Ccnditions from 1-8 have been satisfied by either Player1 or Player2
	//The program will output the winner and the end-of-game TicTacToe table
	if ( GameOver )// Game is Over 
	{
			if ( Winner )// There is a winner
			{ 
				cout << setw(17) << " ";
				system("pause");
				system("cls");
				
				if ( TurnofPlayer == 1 )
					p1WINNER(); // for outputting P1 WIN if the winner is Player 1
				else p2WINNER(); //for outputting P2 WIN if the winner is Player 2
				
			//outputs the word WIN
			cout << setw(8) << "*****" << setw(30) << "*****" << setw(10) << "*****" << setw(15) << "******" << setw(13) << "*****" << endl
		 		 << setw(9) << "*****" << setw(28) << "*****" << setw(11) << "*****" << setw(16) << "*******" << setw(12) << "*****" << endl
		 		 << setw(10) << "*****" << setw(26) << "*****" << setw(12) << "*****" << setw(17) << "********" << setw(11) << "*****" << endl
		 		 << setw(11) << "*****" << setw(11) << "***" << setw(13) << "*****" << setw(13) << "*****" << setw(18) << "***** ***" << setw(10) << "*****" << endl
		 		 << setw(12) << "*****" << setw(11) << "*****" << setw(11) << "*****" << setw(14) << "*****" << setw(14) << "*****" << setw(5) << "***" << setw(9) << "*****" << endl
		 		 << setw(13) << "*****" << setw(11) << "*** ***" << setw(9) << "*****" << setw(15) << "*****" << setw(14) << "*****" << setw(6) << "***" << setw(8) << "*****" << endl
		 		 << setw(14) << "*****" << setw(11) << "***   ***" << setw (7) << "*****" << setw(16) << "*****" << setw(14) << "*****" << setw(7) << "***" << setw(7) << "*****" << endl
		 		 << setw(31) << "********     ********" << setw(17) << "*****" << setw(14) << "*****" << setw(8) << "***" << setw(6) << "*****" << endl
		 		 << setw(30) << "******       ******" << setw(18) << "*****" << setw(14) << "*****" << setw(9) << "***" << setw(5) << "*****" << endl
		 		 << setw(29) << "****         ****" << setw(19) << "*****" << setw(14) << "*****" << setw(10) << "***" << setw(4) << "****" << endl
		 		 << setw(28) << "**           **" << setw(20) << "*****" << setw(14) << "*****" << setw(11) << "***" << setw(3) << "***" << endl;	
			}
		
		//Outputs end-of-game TicTacToe table
		cout << endl << endl
			 << setw(25) << "*" << setw(36) << setfill ('-') << "*" << endl
		 	 << setw(25) << setfill(' ') << "|" << setw(6) << square1 << setw(6) << "|" << setw(6) << square2 << setw(6) << "|" << setw(6) << square3 << setw(6) << "|" << endl
		 	 << setw(25) << "|" << setw(12) << setfill ('-') << "+" <<  setw(12) << setfill ('-') << "+" << setw(12) << setfill ('-') << "|" << endl
		 	 << setw(25) << setfill(' ') << "|" << setw(6) << square4 << setw(6) << "|" << setw(6) << square5 << setw(6) << "|" << setw(6) << square6 << setw(6) << "|" << endl
		 	 << setw(25) << "|" << setw(12) << setfill ('-') << "+" <<  setw(12) << setfill ('-') << "+" << setw(12) << setfill ('-') << "|" << endl
 		 	 << setw(25) << setfill(' ') << "|" << setw(6) << square7 << setw(6) << "|" << setw(6) << square8 << setw(6) << "|" << setw(6) << square9 << setw(6) << "|" << endl
 		 	 << setw(25) << "*" << setw(36) << setfill ('-') << "*" << endl << endl << setfill(' ');
	} else //Allows the next player to make their next move
		{
			if ( TurnofPlayer == 1)
			TurnofPlayer = 2;
			else TurnofPlayer = 1;
		}
//Function GO is now exited	
}

//tttGame calls the functions checkMove(), checkGO(), and GO()
//tttGame also is the function where the program will be looped until GO has happened or a TIE
void tttGame (char& square1, char& square2, char& square3, char& square4, char& square5, char& square6, char& square7, char& square8, char& square9, int& TurnofPlayer)
{
	char marker, NextMove;
	bool GameOver = false,
		 Winner = true,
		 ValidMove = true;
		 
	//Will output the table
	//Contents of the table will be updated once the loop has iterated (Because of function checkMove)	 
	do 
	{	cout << endl << endl
		 << setw(25) << "*" << setw(36) << setfill ('-') << "*" << endl
		 << setw(25) << setfill(' ') << "|" << setw(6) << square1 << setw(6) << "|" << setw(6) << square2 << setw(6) << "|" << setw(6) << square3 << setw(6) << "|" << endl
		 << setw(25) << "|" << setw(12) << setfill ('-') << "+" <<  setw(12) << setfill ('-') << "+" << setw(12) << setfill ('-') << "|" << endl
		 << setw(25) << setfill(' ') << "|" << setw(6) << square4 << setw(6) << "|" << setw(6) << square5 << setw(6) << "|" << setw(6) << square6 << setw(6) << "|" << endl
		 << setw(25) << "|" << setw(12) << setfill ('-') << "+" <<  setw(12) << setfill ('-') << "+" << setw(12) << setfill ('-') << "|" << endl
 		 << setw(25) << setfill(' ') << "|" << setw(6) << square7 << setw(6) << "|" << setw(6) << square8 << setw(6) << "|" << setw(6) << square9 << setw(6) << "|" << endl
 		 << setw(25) << "*" << setw(36) << setfill ('-') << "*" << endl << endl << setfill(' ');
 		 
		checkMove( TurnofPlayer, NextMove, ValidMove, square1, square2, square3, square4, square5, square6, square7, square8, square9, marker );
		checkGO ( Winner, square1, square2, square3, square4, square5, square6, square7, square8, square9, GameOver );
		GO ( GameOver, Winner, square1, square2, square3, square4, square5, square6, square7, square8, square9, TurnofPlayer );
	} while ( !GameOver );
//function tttGame is now exited
}

//main function
int main()
{
	bool play = true;	
	
	tttDisplay();//calls function tttDisplay
	cout << setw(25) << " ";
	system("pause");//pauses console
	system("cls");//clears the entire screen
	
	while ( play ) //loop will iterate until players no longer wish to play
	{
		//Declatarion of variables needed for other functions
		//And will be passed on to functions
		int TurnofPlayer = 1;
		bool validPlay = true;
		char PlayorNah;
		char square1 = '1',
		     square2 = '2',
			 square3 = '3',
			 square4 = '4',
			 square5 = '5',
			 square6 = '6',
			 square7 = '7',
			 square8 = '8',
			 square9 = '9';
		
		cout << setw(18) << " " << "PICK ANY NUMBER BETWEEN 1-9 THAT YOU WISH TO MARK." << endl
		 	 << setw(18) << " " << "        A NUMBER CAN ONLY BE CHOSEN ONCE";
		
		//Calls function tttGame
		tttGame(square1, square2, square3, square4, square5, square6, square7, square8, square9, TurnofPlayer);
		
		cout << setw(28) << " ";
		system("pause");
		system("cls");
		
		tttDisplay();//Calls function tttDisplay
		cout << setw(18) << " " << "Would you like to play again?(Y/N)(y/n): "; //Asks whether users would like to play again or not
		cin >> PlayorNah;
		
		do//Loop to get valid inputs
		{	
			if ( PlayorNah == 'n' || PlayorNah == 'N' )
			{
				play = false;
				validPlay = true;
				exit(27);
			}
			
			else if ( PlayorNah == 'y' || PlayorNah == 'Y' )
			{
				play = true; 
				validPlay = true;
			}
			
			else 
			{
				cout << endl << setw(18) << " " << "Please pick between the given choices...";
				validPlay = false;
				cout << endl << setw(18) << " " << "(Y/N)(y/n): ";
				cin >> PlayorNah;
				cout << endl;
			}
		} while ( !validPlay ); //Loop will stop once a valid input has been inputted
		
		cout << setw(26) << " "; 
		system("pause");
		system("cls");
	}
	return 0;
}                                                
//Programmer: Ann - Louise Kathrin Gaynor
//Ateneo de Davao University, BS-Information Technology
