/*
 * Hal.h
 *
 *  Created on: 2 ���. 2019 �.
 *      Author: ������
 */

#ifndef SRC_HAL_H_
#define SRC_HAL_H_

namespace std {

void setup();
void loop();

class Hal {
public:
	Hal();
	virtual ~Hal();
};

} /* namespace std */

#endif /* SRC_HAL_H_ */
