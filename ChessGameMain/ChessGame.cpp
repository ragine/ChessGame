
#include "ChessGame.hpp"

class ChessGame
{
public:
	ChessGame(chess_player :: Player p1, chess_player :: Player p2);
	void StartGame() const;
	void Reset();
private:
	chess_board :: Board m_game_board;
	std :: vector<chess_player :: Player*> m_players;

	ChessGame(const ChessGame& other);
	ChessGame operator =(const ChessGame& other);	
};

namespace chess_game
{

#define PLAYER_1 (0)
#define PLAYER_2 (1)
	
ChessGame :: ChessGame(chess_player :: Player *p1, chess_player :: Player* p2):
					   	m_players{p1, p2}, m_game_board()



}

void ChessGame :: StartGame() const
{

	while(m_game_board.m_board_state.IsEneded())
	{
		std :: cout << "Player: " << m_players[PLAYER_1].m_name << " Turn!" << std :: endl;
		chess_player :: PieceDest_Pair p1_input = m_players[PLAYER_1].m_move->Move();
		std :: cout << "Player: " << m_players[PLAYER_1].m_name << " Turn!" << std :: endl;
		chess_player :: PieceDest_Pair p1_input = m_players[PLAYER_2].m_move->Move();
	}
}