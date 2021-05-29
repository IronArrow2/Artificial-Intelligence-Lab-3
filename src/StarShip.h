#pragma once
#ifndef __STAR_SHIP__
#define __STAR_SHIP__
#include "Agent.h"


class StarShip : public Agent
{
public:
	// Constructor(s)
	StarShip();
	
	// Destructor
	~StarShip();
	
	// Display Object Life-Cycle Functions
	void draw() override;
	void update() override;
	void clean() override;


	// getters and setters
	float getMaxSpeed() const;
	float getTurnRate() const;
	glm::vec2 getDesiredVelocity() const;
	float getAccelerationRate() const;

	void setMaxSpeed(float speed);
	void setTurnRate(float angle);
	void setDesiredVelocity(glm::vec2 target_position);
	void setAccelerationRate(float rate);

	// public member functions
	void Seek();
	void LookWhereIamGoing(glm::vec2 target_direction);

private:
	float m_maxSpeed;
	float m_turnRate;
	float m_accelerationRate;

	void m_move();

	glm::vec2 m_desiredVelocity;
};

#endif /* defined (__STAR_SHIP__) */