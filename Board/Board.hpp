
#ifndef __BOARD_HPP__
#define __BOARD_HPP__

#include "BoardController.hpp"
#include "BoardState.hpp"


namespace chess_board
{
	
class Board
{
public:
	Board();
	bool UpdateBoard();
	bool IsEnded() const;
	void ResetBoard();
private:
	board_controller :: BoardController m_board_controller;
	board_state :: BoardState m_board_state;
};

}

#endif //__BOARD_HPP