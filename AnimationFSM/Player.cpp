#include <iostream>
#include <Player.h>
#include <Idle.h>
#include <Debug.h>

Player::Player()
	: m_canClimb(false)
{
	m_animation.setCurrent(new Idle());
	m_animation.setPrevious(new Idle());
}

Player::Player(const AnimatedSprite& s) : m_animated_sprite(s) //s is a const but animated sprite is not ! Woo
{
	m_animation.setCurrent(new Idle());
	m_animation.setPrevious(new Idle());
}

Player::~Player() {}

AnimatedSprite& Player::getAnimatedSprite()
{
	int frame = m_animated_sprite.getCurrentFrame();
	m_animated_sprite.setTextureRect(m_animated_sprite.getFrame(frame));
	return m_animated_sprite;
}

void Player::setAnimatedSprite(AnimatedSprite &)
{
}

void Player::handleInput(Input in)
{
	DEBUG_MSG("Handle Input");


	switch (in.getCurrent())
	{
	case Input::Action::IDLE:
		m_animation.idle(m_animated_sprite);
		break;
	case Input::Action::CLIMB:
		m_animation.climbing(m_animated_sprite);

		break;
	case Input::Action::JUMP:
		m_animation.jumping(m_animated_sprite);
		break;
	case Input::Action::LEFT:
		m_animation.left(m_animated_sprite);
		break;
	case Input::Action::RIGHT:
		m_animation.right(m_animated_sprite);
		break;
	case Input::Action::HAMMER:
		m_animation.hammering(m_animated_sprite);
		break;

	default:
		break;
	}
}

void Player::update()
{
	m_animated_sprite.update();
}