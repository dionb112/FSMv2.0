#ifndef INPUT_H
#define INPUT_H
class Input
{
public:
	Input();
	~Input();

	enum Action
	{
		IDLE,
		CLIMB,
		JUMP,
		LEFT,
		RIGHT,
		HAMMER,
	};

	void setCurrent(Action);
	Action getCurrent();

private:
	Action m_current;
};
#endif