#ifndef __PLAYGAME_H__

#include <iostream>
#include <conio.h>
#include <new.h>
#include <string.h>

/* NOTE : In the example CLASS HEADER comment below, I have used HTML to format some of the comments and output ...
		  You don't have to do this - but its a good chance to explore with formatting your information in a nice
		  way and reinforce what you already know about HTML !! :) */
		  /// 
		  /// \class playGame
		  ///
		  /// \brief The purpose of this class is to coordinate and serve as a parent class for the other child class related to Objects.
		  ///
		  /// This comment block is <i>required</i> for all class declarations.  This is the place 
		  /// where the <b>Class header Comment</b> appears. 
		  ///
		  /// Within the class definition, you should also comment :
		  /// - class constants
		  /// - class data members (attributes) and their purpose
		  /// - any methods (whose body is actually found within this definition) - you would comment in a <i>Method Header Commenting</i> style (see playGame() below)
		  ///
		  /// When it comes to commenting the body of your code, or commenting anything within
		  /// any of your source modules that you want DOxygen to ignore - simply use
		  /// standard C++ comments
		  ///
		  ///
		  /// \author <i>Anthony Moronta</i>
		  ///

using namespace std;

class playGame
{
	/* ====================================== */
	/*              PRIVATE                   */
	/* ====================================== */
private:
	int user_choice;							///< The option chosen by the user according to a specific number.

	/* ====================================== */
	/*				 PUBLIC                   */
	/* ====================================== */
public:
	/* -------------- CONSTANTS ------------- */
	static const int MAX_VALID_OPTIONS = 4;
	static const int DEFAULT_VALUE = 0;

	/* -------------- METHODS ------------- */
	playGame(int user_choice);					//Constructor
	playGame(void);								//Default Constructor

	/* -------------- REGULAR ACCESSORS ------------- */
	int GetUserChoice(void);					//Accessor Get User Choice

	/* -------------- CONST ACCESSORS ------------- */
	int GetUserChoice(void) const;				//Const Accessor Get User Choice
};

#endif // !__PLAYGAME_H__
