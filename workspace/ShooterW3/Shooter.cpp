/*
 * Shooter.cpp
 *
 *  Created on: Sep 17, 2016
 *      Author: ted
 */

#include "Shooter.h"
#include "Motor.h"

Shooter::Shooter(int portLeft, int portRight)
	:portLeft(portLeft), portRight(portRight)
{
	Motor motorLeft(portLeft);
	Motor motorRight(portRight);
}

Shooter::~Shooter()
{
	delete motorLeft;
	delete motorRight;
	delete portRight;
	delete portLeft;
}

void Shooter::shootBall()
{
	Motor motorLeft(portLeft);
	Motor motorRight(portRight);
	motorLeft.setSpeed(.8);
	motorRight.setSpeed(.8);
	motorLeft.wait (600);
	motorRight.wait (600);
	motorLeft.setSpeed(0);
	motorRight.setSpeed(0)
}
