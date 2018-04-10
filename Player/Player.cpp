#include <utility>

#include "Player.hpp"


namespace chess_player
{		


class Dest
{
public:
	Dest(int x, int y);
	int GetX() const;
	int GetY() const;
private:
	int m_x;
	int m_y;
};


Dest :: Dest(int x, int y) : m_x(x), m_y(y)
{

}

int Dest :: GetX() const
{
	return (m_x);
}

int Dest :: GetY() const
{
	return (m_y);
}


		
Player :: Player(std :: string name, chess_details :: Color col, MoveController* move) : m_name(name), m_color(col), m_move(move)
{
	InitPlayer();
}
		
		
void Player :: InitPlayer()
{
	SetWins(0);
}
		
void Player :: SetWins(size_t wins)
{
	m_wins = wins;
}
		
size_t Player :: GetWins() const 
{
	return(m_wins);
}


void Player :: PrintData() const
{
	std :: cout << "Player: " << m_name << "Turn:" << std :: endl;
	std :: pair<chess_details :: PieceType, Dest> player_input = m_move->Move();
	std :: cout << player_input.first << " cords: " << player_input.second.GetX() << " " << player_input.second.GetY() << std :: endl;
}


MoveController :: ~MoveController()
{

}

PersonMoveController :: ~PersonMoveController()
{

}

std :: pair<chess_details :: PieceType, Dest>  PersonMoveController :: Move()
{
	int x = 0, y = 0;
	chess_details :: PieceType p_type = chess_details :: PieceType :: Pawn;

	std :: cin >> p_type >> x >> y;
	Dest d(x,y);

	std :: pair<chess_details :: PieceType, Dest> player_input = std :: make_pair(p_type, d);

	return (player_input);
}
	
}

