#include "State.h"

void State::idle(Animation * a, AnimatedSprite & s)
{
	//s.addFrame(sf::IntRect(3, 3, 84, 84));
	//s.addFrame(sf::IntRect(88, 3, 84, 84));
	//s.addFrame(sf::IntRect(173, 3, 84, 84));
	//s.addFrame(sf::IntRect(258, 3, 84, 84));
	//s.addFrame(sf::IntRect(343, 3, 84, 84));
	//s.addFrame(sf::IntRect(428, 3, 84, 84));
}

void State::jumping(Animation * a, AnimatedSprite & s)
{
	s.addFrame(sf::IntRect(3, 88, 84, 84));
	s.addFrame(sf::IntRect(88, 88, 84, 84));
	s.addFrame(sf::IntRect(173, 88, 84, 84));
	s.addFrame(sf::IntRect(258, 88, 84, 84));
	s.addFrame(sf::IntRect(343, 88, 84, 84));
	s.addFrame(sf::IntRect(428, 88, 84, 84));
}

void State::climbing(Animation * a, AnimatedSprite & s)
{
	s.addFrame(sf::IntRect(3, 173, 84, 84));
	s.addFrame(sf::IntRect(88, 173, 84, 84));
	s.addFrame(sf::IntRect(173, 173, 84, 84));
	s.addFrame(sf::IntRect(258, 173, 84, 84));
	s.addFrame(sf::IntRect(343, 173, 84, 84));
	s.addFrame(sf::IntRect(428, 173, 84, 84));
}

void State::left(Animation * a, AnimatedSprite & s)
{
	s.addFrame(sf::IntRect(3, 258, 84, 84));
	s.addFrame(sf::IntRect(88, 258, 84, 84));
	s.addFrame(sf::IntRect(173, 258, 84, 84));
	s.addFrame(sf::IntRect(258, 258, 84, 84));
	s.addFrame(sf::IntRect(343, 258, 84, 84));
	s.addFrame(sf::IntRect(428, 258, 84, 84));
}

void State::right(Animation * a, AnimatedSprite & s)
{
	s.addFrame(sf::IntRect(3, 343, 84, 84));
	s.addFrame(sf::IntRect(88, 343, 84, 84));
	s.addFrame(sf::IntRect(173, 343, 84, 84));
	s.addFrame(sf::IntRect(258, 343, 84, 84));
	s.addFrame(sf::IntRect(343, 343, 84, 84));
	s.addFrame(sf::IntRect(428, 343, 84, 84));
}

void State::hammering(Animation * a, AnimatedSprite & s)
{
	s.addFrame(sf::IntRect(3, 428, 84, 84));
	s.addFrame(sf::IntRect(88, 428, 84, 84));
	s.addFrame(sf::IntRect(173, 428, 84, 84));
	s.addFrame(sf::IntRect(258, 428, 84, 84));
	s.addFrame(sf::IntRect(343, 428, 84, 84));
	s.addFrame(sf::IntRect(428, 428, 84, 84));
}
