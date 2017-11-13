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

	virtual void idle(Animation* a, AnimatedSprite & s);
	virtual void jumping(Animation* a, AnimatedSprite & s);
	virtual void climbing(Animation* a, AnimatedSprite& s);
	virtual void left(Animation* a, AnimatedSprite & s);
	virtual void right(Animation* a, AnimatedSprite & s);	
	virtual void hammering(Animation* a, AnimatedSprite & s);
};

#endif // ! ANIMATION_H

