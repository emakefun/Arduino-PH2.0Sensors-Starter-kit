/***********************************************************************
 *       __                                                          _
 *      / /        _____  __    __  _          _   (_)   ________   | |
 *     / /____   / _____) \ \  / / | |   __   | |  | |  (  ______)  | |_____
 *    / / ___/  | |_____   \ \/ /  | |  /  \  | |  | |  | |______   |  ___  |
 *   / /\ \     | |_____|   \  /   | | / /\ \ | |  | |  (_______ )  | |   | |
 *  / /  \ \__  | |_____    / /    | |/ /  \ \| |  | |   ______| |  | |   | |
 * /_/    \___\  \______)  /_/      \__/    \__/   |_|  (________)  |_|   |_|
 *
 *
 * KeyWay Tech firmware
 *
 * Copyright (C) 2015-2020
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, in version 3.
 * learn more you can see <http://www.gnu.org/licenses/>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.
 *
 *
 * [Title]    keypad control led light
 * [diagram]
 *         Arduino PIN A2  ===================  led control gpio
 *         Arduino PIN A3   ===================  keypad pin
 */
int led_out = A2 ;  //GPIO A2  LED pin
int keypad_pin = A3; //GPIO A3 key pin
int value;
void setup()
{
    pinMode(led_out,OUTPUT);               // init led pin output
    pinMode(keypad_pin,INPUT);          // init key pin input
}
void loop()
{
        value = digitalRead(keypad_pin);    // read key pad pin vaule
        if( value == HIGH )
        {
            digitalWrite(led_out,LOW);      // if key value is down  turn on LED
        }
        else
        {
            digitalWrite(led_out,HIGH);     // if key value is down  turn off LED
        }
}

