# StatTrak-Can-Crusher
The problem is that my roommate and I have a wild soda addiction and we want to recycle the cans for some extra $$$. I know that crushing the cans is more effective and my roommate plays a lot of csgo so I thought it would be funny to have a StatTrak-style display on the crusher so that every time we crushed a can it would show us how many we have crushed. The plan is to use an arduino to handle the sensors, accumulation, and display. The code shouldn't be difficult, I will just have to find/design a decoder if I want any more than 2 digit long numbers to be displayed. 

I will make use of i2c to communicate with this 4 digit 7-segment display: https://www.adafruit.com/product/878
This sensor will be used ot determine if the can is crushed: https://www.adafruit.com/product/375

Side note: I may want to use a force sensor under the can so that the system will only increment when a can is crushed and not when the sensor is tripped.