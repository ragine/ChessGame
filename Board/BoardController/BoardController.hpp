

namespace board_controller
{

class BoardController
{
public:
	bool UpdateBoard();
	void InitBoard();
	void Reset();

private:
	bool IsValid() const;
	bool IsInRange() const;
	bool IsOcuupied() const;
};


}