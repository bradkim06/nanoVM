//
//  c't-Bot-NanoVM, a tiny java VM for the c't-Bot
//
//  Copyright (C) 2007 by Nils Springob <nils@nicai-systems.de>
//  Based on work by Benjamin Benz(c't-Bot) and Till Harbaum(NanoVM)
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation; either version 2 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

/*! @file   delay.c
 *  @brief  Routinen für Verzögerungen
 *  @author Nils Springob
 *  @date   2007-01-11
 */
#include "types.h"
#include "delay.h"

/**
 * Verzögere um ms Millisekunden
 * @param ms Anzahl der Millisekunden
 */
void delay(uint16_t ms){
	int i;
  while(ms--)
	{
     //delay_ms(1);
		for(i=0;i<1000;i++);
	}
}

void _delay_us(uint16_t us)
{
	int i,j;
	for(i=0;i<us;i++)
		for(j=0;j<1000;j++);
}
void _delay_ms(uint16_t ms)
{
	int i;
	for(i=0;i<ms;i++)
		_delay_us(1000);
}
