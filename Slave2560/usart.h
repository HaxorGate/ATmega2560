/*
 * usart.h
 *
 * Created: 7/26/2018 7:32:37 PM
 *  Author: ETAStaff
 */
#include <avr/io.h>
#include "string.h"

#ifndef USART_H_
#define USART_H_

class USART {
	USART( void );
	void begin( uint32_t baud = 115200 );
	void write( uint8_t data );
	void write( uint16_t data );
	void write( String data );
};


#endif /* USART_H_ */