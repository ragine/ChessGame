#include "ChessPiece.hpp"


namespace board_state
{

class BoardState
{
public:
	explicit BoardState();

	bool IsEnded() const;
	void SetGameStatus(bool end);
private:
	std :: pair<chess_piece :: ChessPiece,chess_details :: Color> m_game_board[8][8];
	bool m_game_ended;

};


}