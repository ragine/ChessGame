/* 
* Chess Player Header - describes the player class and the MoveController class
* There is one derived class of MoveController, which is Persons move (human player)
*/



#include <iostream>

#include "ChessDetails.hpp"


namespace chess_player
{


class Dest;
/*****************************************************************************************/
class MoveController
{
public:

	virtual ~MoveController();
	virtual std :: pair<chess_details :: PieceType, Dest> Move() = 0;
};
/*****************************************************************************************/
class PersonMoveController : public MoveController
{
public:
	~PersonMoveController();
	std :: pair<chess_details :: PieceType, Dest> Move();
};

/*****************************************************************************************/
class Player
{
	
public:
	explicit Player(std :: string name, chess_details :: Color col, MoveController* move);
	void PrintData() const; // dont froget to delete
	size_t GetWins() const;

private:
	
	std :: string m_name;
	chess_details :: Color m_color;
	size_t m_wins;
	MoveController* m_move;
	
	void SetWins(size_t wins);
	void InitPlayer();
	
	Player(const Player& other); // prevent usage
	Player operator =(const Player& other); // prevent usage
};


}
