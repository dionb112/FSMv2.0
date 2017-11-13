#ifndef ANIMATION_H
#define ANIMATION_H

#include <AnimatedSprite.h>

class Animation
{

	// Please review very good article on Stackoverflow
	// which covers some solutions to circular dependacies
	// https://stackoverflow.com/questions/625799/resolve-build-errors-due-to-circular-dependency-amongst-classes

private:
	AnimatedSprite m_animated_sprite;

	class State* m_current; // note order of m_current is 
							// prior to setCurrent
	class State* m_previous;
public:
	Animation();
	~Animation();
	void setCurrent(State* s);
	void setPrevious(State* s);
	State* getCurrent();
	State* getPrevious();
	
	void idle(AnimatedSprite&);
	void jumping(AnimatedSprite&);
	void climbing(AnimatedSprite&);
	void left(AnimatedSprite&);
	void right(AnimatedSprite&);
	void hammering(AnimatedSprite&);


// Try uncommenting and comment the declaration above
//private:
//	class State* m_current;
};

#endif // !ANIMATION_H
