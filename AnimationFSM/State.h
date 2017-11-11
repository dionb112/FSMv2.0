#ifndef STATE_H
#define STATE_H

#include <iostream>
#include <typeinfo>

#include <Input.h>
#include <Animation.h>
#include <Debug.h>

class State
{
public:
	virtual void handleInput() {}

	virtual void update() {}

	virtual void idle(Animation* a)
	{
		DEBUG_MSG("State::Idling");
	}
	virtual void jumping(Animation* a)
	{
		DEBUG_MSG("State::Jumping");
	}
	virtual void climbing(Animation* a)
	{
		DEBUG_MSG("State::Climbing");
	}
	virtual void left(Animation* a)
	{
		DEBUG_MSG("State::WalkingLeft");
	}
	virtual void right(Animation* a)
	{
		DEBUG_MSG("State::WalkingRight");
	}	
	virtual void hammering(Animation* a)
	{
		DEBUG_MSG("State::Hammering");
	}
};

#endif // ! ANIMATION_H

