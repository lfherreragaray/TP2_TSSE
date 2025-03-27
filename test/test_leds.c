/************************************************************************************************
Copyright (c) 2025, Luis Francisco Herrera Garay<lf.herreragaray@gmail.com>

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
 * @file test_leds.c
 * @brief Pruebas unitarias de la biblioteca para el control de LEDs
 **/
 /**
 *@test  Con la inicialización todos los LEDs quedan apagados.
 *@test  Prender un LED individual.
 *@test  Apagar un LED individual.
 *@test  Prender y apagar múltiples LED’s.
 *@test  Prender todos los LEDs de una vez.
 *@test  Apagar todos los LEDs de una vez.
 *@test  Consultar el estado de un LED que está encendido
 *@test  Consultar el estado de un LED que est apagado
 *@test  Revisar limites de los parametros.
 *@test  Revisar parámetros fuera de los limites
 *
 *
 *
 *
 * @author Luis Francisco Herrera Garay
 * @date 2025
 */

/* === Headers files inclusions =============================================================== */
#include "unity.h" /**< Archivo de cabecera para la definición de funciones principales. */
#include "leds.h" /**< */

/* === Macros definitions ====================================================================== */
#define LED_RED_BIT  7 /**< Número de bit del LED rojo en el puerto GPIO. */
#define LED_RED_PORT 1 /**< Puerto donde está conectado el LED rojo. */

/* === Private data type declarations ========================================================== */

/* === Private variable declarations =========================================================== */

/* === Private function declarations =========================================================== */

/* === Public variable definitions ============================================================= */

/* === Private variable definitions ============================================================ */

/* === Private function implementation ========================================================= */

/* === Public function implementation ========================================================== */

/**
 * @brief Función principal del programa.
 *
 * Esta es la función principal que se ejecuta al iniciar el programa. Su propósito es configurar un
 * puerto GPIO para controlar un LED rojo, configurándolo como salida y apagándolo al inicio.
 *
 * @return int Retorna 0 para indicar que el programa finalizó correctamente.
 */
 
 //! @test Con la inicialización todos los LEDs quedan apagados.
void test_todos_los_leds_inician_apagados(void){
  uint16_t leds_virtuales=0xffff;
  LedsInit(&leds_virtuales);
  TEST_ASSERT_EQUAL_HEX16(0X0000,leds_virtuales);
}

  //! @test  Prender un LED individual.
  void test_prender_led_individual(void){
  
  uint16_t leds_virtuales=0xffff;
  LedsInit(&leds_virtuales);
  LedTurnOnSingle(4);
  TEST_ASSERT_EQUAL_HEX16(0X0008,leds_virtuales); 
}

  //! @test  Apagar un LED individual.
  void test_apagar_led_individual(void){
  
  uint16_t leds_virtuales=0xffff;
  LedsInit(&leds_virtuales);
  LedTurnOnSingle(4);
  LedTurnOffSingle(4);
  TEST_ASSERT_EQUAL_HEX16(0X0000,leds_virtuales); 
}
/* === End of documentation ==================================================================== */
