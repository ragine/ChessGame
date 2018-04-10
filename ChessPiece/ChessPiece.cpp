

#include "ChessPiece.hpp"

namespace chess_piece
{
	

ChessPiece :: ChessPiece(chess_details :: PieceType type, 
						 PieceController* controller) : m_type(type),
						 m_piece_move(controller);
{

}



}