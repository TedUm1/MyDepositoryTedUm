/*
 * Shooter.h
 *
 *  Created on: Sep 17, 2016
 *      Author: ted
 */
#include "Motor.h"

#ifndef SHOOTER_H_
#define SHOOTER_H_

class Shooter {
public:
	Shooter(int,int);
	virtual ~Shooter();
	void shootBall();
	int portLeft;
	int portRight;
};

#endif /* SHOOTER_H_ */
