/*
 * twi.h
 *
 * Created: 7/26/2018 7:31:41 PM
 *  Author: ETAStaff
 */

extern "C" {
	#include <avr/io.h>
	#include <util/twi.h>
	#define F_CPU 16000000UL
	typedef void (*rxCallback)(uint16_t n_bytes);
	typedef void (*rqCallback)(void);
};
#ifndef TWI_H_
#define TWI_H_





#endif /* TWI_H_ */