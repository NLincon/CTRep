/*
 * Truck.h
 *
 *  Created on: 4 окт. 2019 г.
 *      Author: Никита
 */

#ifndef SRC_TRUCK_H_
#define SRC_TRUCK_H_

namespace std {

void moveForward(double distance, int speed);

class Truck {
public:
	Truck();
	virtual ~Truck();
};

} /* namespace std */

#endif /* SRC_TRUCK_H_ */
