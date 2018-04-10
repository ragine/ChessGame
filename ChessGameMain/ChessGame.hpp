
#ifndef __CHESSGAME_HPP__
#define __CHESSGAME_HPP__



#include <vector>

#include "Player.hpp"
#include "Board.hpp"

namespace chess_game
{
	
class ChessGame
{
public:
	ChessGame(chess_player :: Player* p1, chess_player :: Player* p2);
	void StartGame() const;
	void Reset();
private:
	chess_board :: Board m_game_board;
	std :: vector<chess_player :: Player*> m_players;

	ChessGame(const ChessGame& other);
	ChessGame operator =(const ChessGame& other);	
};

}

#endif //__CHESSGAME_HPP__