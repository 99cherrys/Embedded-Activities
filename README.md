# LTTS stepin Mini Project-2
# Embedded C Programming Activities with Continuous Integration and Code Quality


##### CI and Code Quality

|Build|Cppcheck|Codacy|
|:--:|:--:|:--:|
|[![Compile-Linux](https://github.com/99cherrys/Embedded-Activities/actions/workflows/compile.yml/badge.svg)](https://github.com/99cherrys/Embedded-Activities/actions/workflows/compile.yml)|[![Cppcheck](https://github.com/99cherrys/Embedded-Activities/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/99cherrys/Embedded-Activities/actions/workflows/cppcheck.yml)| [![Codacy Badge](https://app.codacy.com/project/badge/Grade/e67c356d365c44ab8034f155c7f1e93a)](https://www.codacy.com/gh/99cherrys/Embedded-Activities/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=99cherrys/Embedded-Activities&amp;utm_campaign=Badge_Grade) |

# Activity 1 
   ## If car seat is occupied and heater is ON indicate by turning on a LED using AVR programming
   
### In Action

#### 1. Car seat vacant (button pulled up) and heater switch is off: LED is OFF
![OFF](Simulation/Activity1/1.png)

#### 2. Car seat vacant and heater switch is on: LED is OFF
![OFF](Simulation/Activity1/2.png)

#### 3. Car seat is occupied (button pushed down) and heater switch is off: LED is OFF
![OFF](Simulation/Activity1/3.jpeg)

#### 4. Car seat is occupied and heater switch is on: LED is turned ON
![ON](Simulation/Activity1/4.jpeg)

# Activity 2
   ## Use Potentiometer as a temperature sensor and convert the Analog values read from the sensor to Digital values
   
### In Action

#### 1. ADC conversion of temperature sensor 
![ADC](Simulation/Activity2/activity2.PNG)

# Activity 3 
   ## To obtain PWM signal from a Temperature sensor (Potentiometer)

### In Action

#### 1. PWM signal of Duty cycle (D) = 35% 
![35D](Simulation/Activity3/35D.PNG)

#### 2. PWM signal of Duty cycle (D) = 50% 
![50D](Simulation/Activity3/50D.PNG)

#### 3. PWM signal of Duty cycle (D) = 75% 
![75D](Simulation/Activity3/75D.PNG)

# Activity 4
   ## Seat heating app using UART Protocol
   
   ### In Action
   #### 1. When seat button and heater switch are off the system is in OFF state
   ![OFF state](Simulation/Activity4/off.PNG)
   
    #### 2. When seat button and heater switch are turned on the LED indicator turns on
    #### Potentiometer is varied and temperature is read and the value is displyed on the serial monitor in degree centigrade
    ##### (i) 20 degree celcius
   ![20C](Simulation/Activity4/20.PNG)
