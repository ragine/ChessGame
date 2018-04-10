/* 
* Chess Piece Header - describes the player class and the MoveController class
* There is one derived class of MoveController, which is Persons move (human player)
*/



#include <iostream>

#include "ChessDetails.hpp"


namespace chess_piece
{


/*****************************************************************************************/
class PieceController
{
public:

	virtual ~PieceController();
	virtual bool IsValid() = 0;
};
/*****************************************************************************************/
class PawnController : public PieceController
{
public:
	~PawnController();
	bool IsValid();
};
/*****************************************************************************************/
class BishopController : public PieceController
{
public:
	~BishopController();
	bool IsValid();
};
/*****************************************************************************************/
class RookController : public PieceController
{
public:
	~RookController();
	bool IsValid();
};
/*****************************************************************************************/
class KnightController : public PieceController
{
public:
	~KnightController();
	bool IsValid();
};
/*****************************************************************************************/
class QueenController : public PieceController
{
public:
	~QueenController();
	bool IsValid();
};
/*****************************************************************************************/
class KingController : public PieceController
{
public:
	~KingController();
	bool IsValid();
};

/*****************************************************************************************/
class ChessPiece
{
	
public:
	explicit ChessPiece(chess_details :: PieceType type, PieceController* controller);

private:
	chess_details :: PieceType m_type;
	PieceController* m_piece_move;
};


}