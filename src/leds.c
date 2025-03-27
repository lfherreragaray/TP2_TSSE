/************************************************************************************************
Copyright (c) 2025, Luis Francisco Herrera Garay <lf.herreragaray@gmail.com>

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and
associated documentation files (the "Software"), to deal in the Software without restriction,
including without limitation the rights to use, copy, modify, merge, publish, distribute,
sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial
portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT
NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES
OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

SPDX-License-Identifier: MIT
*************************************************************************************************/


/**
 * @file leds.c
 * @brief Definicion de la biblioteca para el control de LEDs
 */


/* === Inclusión de archivos de cabecera ====================================================== */
#include "leds.h"
/* No se incluyen archivos adicionales */

/* === Cabecera para C++ ====================================================================== */

/* === Definición de macros públicas ========================================================= */

/* No se definen macros en este archivo */

/* === Declaraciones de tipos de datos privadas ============================================ */

/* No se definen tipos de datos en este archivo */

/* === Declaraciones de variables privadas =================================================== */

static uint16_t* port_address;

/* === Declaraciones de tipos de datos públicos ============================================ */

/* No se definen tipos de datos en este archivo */

/* === Declaraciones de variables públicas =================================================== */

/* No se definen variables globales en este archivo */

/* === Declaraciones de funciones públicas =================================================== */

/**
 * @brief 
 *
 *
 */
void LedsInit(uint16_t *port){
port_address= port;
*port_address=0;
}

/**
 * @brief 
 *
 *
 */
void LedTurnOnSingle(uint8_t led){
*port_address=0x0008;
}

void LedTurnOffSingle(uint8_t led){
*port_address=0x0000;
}
/* === Fin de la documentación ============================================================= */


