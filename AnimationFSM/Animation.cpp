#include <Animation.h>
#include <Idle.h>

Animation::Animation()
{
	m_current = new Idle();
}

Animation::~Animation() {}

void Animation::setCurrent(State* s)
{
	m_current = s;
}

State* Animation::getCurrent()
{
	return m_current;
}

void Animation::setPrevious(State* s)
{
	m_previous = s;
}

State* Animation::getPrevious()
{
	return m_previous;
}

void Animation::idle(AnimatedSprite& s)
{
	m_animated_sprite = s;
	m_current->idle(this, s);
}

void Animation::jumping(AnimatedSprite& s)
{
	m_animated_sprite = s;
	m_current->jumping(this, s);
}

void Animation::climbing(AnimatedSprite& s)
{
	m_animated_sprite = s;
	m_current->climbing(this, s);
}

void Animation::left(AnimatedSprite& s)
{
	m_animated_sprite = s;
	m_current->left(this, s);
}

void Animation::right(AnimatedSprite& s)
{
	m_animated_sprite = s;
	m_current->right(this, s);
}

void Animation::hammering(AnimatedSprite& s)
{
	m_animated_sprite = s;
	m_current->hammering(this, s);
}
