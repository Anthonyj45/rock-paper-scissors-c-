#include "playGame.h"

/* NOTE : The DOxygen formatting below falls inline with JAVADOC style commenting - so exposure to
			  this style of commenting wouldn't be a bad thing ... */
			  /**
			  * \brief To instantiate a new Game object - given a set of attribute values
			  * \details <b>Details</b>
			  *
			  * The constructor will take the user choice and verify if is a valid option. The user
			  * has a maximum of three options, which are Rock, Paper, and Scissors (As the game's
			  * name says). For the moment, it is not going to take anything else than an integer,
			  * because is probably that the program will be improved later according new ideas
			  * that will be good to implement.
			  *
			  * \param newUserChoice  - <b>int</b> - representation of the User's choice
			  *
			  * \return As this is a <i>constructor</i> for the playGame class, nothing is returned
			  *
			  */

playGame::playGame(int newUserChoice)
{
	if (newUserChoice > DEFAULT_VALUE && newUserChoice < MAX_VALID_OPTIONS)
	{
		this->user_choice = newUserChoice;
	}
	else
	{
		this->user_choice = DEFAULT_VALUE;
	}
}

/* NOTE : The DOxygen formatting below falls inline with JAVADOC style commenting - so exposure to
			  this style of commenting wouldn't be a bad thing ... */
			  /**
			  * \brief To instantiate a new Default Game object - given a set of Default values
			  * \details <b>Details</b>
			  *
			  * In the case that there is not parameters or values assigned by the User, for the
			  * moment the option will be settled as 0. This will be extracted later by the
			  * computer to select a random option between the possible.
			  *
			  * \return As this is a <i>constructor</i> for the Shape class, nothing is returned
			  *
			  */

playGame::playGame(void)
{
	this->user_choice = DEFAULT_VALUE;
}

	///
	/// \brief Called to access safely to the user's choicet attribute
	/// \details <b>Details</b>
	///
	/// To keep a safety use of the private attributes using this accessor
	/// 
	/// \return Returns this pointing to the colour that is a private attribute
	///
	///

int playGame::GetUserChoice(void)
{
	return this->user_choice;
}

	///
	/// \brief Called to access safely to the user's choice attribute implementing const
	/// \details <b>Details</b>
	///
	/// To keep a safety use of the private attributes using this accessor
	/// 
	/// \return Returns this pointing to the name that is a private attribute
	///
	///

int playGame::GetUserChoice(void) const
{
	return this->user_choice;
}

