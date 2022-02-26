 # 1. About the AUTOMATIC CAR PARKING SYSTEM
  ## 1.1 Description
  * Automatic Smart car parking project aims at providing a confusion free and easy parking. This concept
helps the drivers of the cars to park their vehicles with minimum wastage of time with accurate information of 
the availability of the space to park vehicle.Everything in the modern world is moving automatic system,
we have built a system like that which can automatically sense the entry 
and exit of cars through the gate and then display the number of cars in the parking lot. 
This automated car parking system reduce the time taken to check the space for the 
vehicle by displaying the available space for parking on a LCD displayer.
This project is developed using micro-controller arduino uno. 
 ------    
 
 ## 1.2 Identifying features
 * Servo motor shall be provided to enter and exit of the car.
* Automatic gate opening and closing shall be provided  by gate sensor along with IR signal.
* LCD Display shall be provided to know the working of the system.
* IR sensor shall be provided to detect the car that comes in front of the gate.
 -----------------
  ## 1.3 State of art 
   * An automated parking system is a area or volume required for parking cars. 
  Automated Parking System provides parking for cars on multiple levels stacked 
  vertically to maximize the number of parking spaces while minimizing land usage.
    so we have deployed a microcontroller which is used to sense the movement
of cars and it either Free space is there or not. It is possible to free
space when any car enters in the parking lot or close the gate when
a car exits from the parking lot. The sensing of entry and exit of
cars is done with the help of IR transmitters and receivers.
 This change in output is sensed by the microcontroller and
accordingly it increments and decrement the count and opens the gate if there is
space. The procedure for the exit of the cars is similar as
the entry.
-----

## 1.4 S.W.O.T analysis
![SWOT](https://user-images.githubusercontent.com/98831772/155770786-3a558fd6-2ec1-42ae-9a45-ab5a8061d2e3.png)
------------------

## 1.5 5W's & 1H
1) what ?
  * the automatic parking system aims to enhance the comfort and safety of driving in constrained environments.
2) who ?
  * person who need's to be parking
3) why ?
  * it mainly focuses on reducing the time in finding the parking lots in the parking area.
4) when ?
  * APS is used to navigate the driver to reach the desired space and in an effective manner, thus reducing search time.  
5) where ?
  * APS is required for malls,hospitals,IT companyies,restaurants,etc...
6) how ?
  * In APS the cars entering and exiting with sensors and actuators process.
  --------
 
 # 2. Requirements

## 2.1 High Level Requirements

| ID | High Level Requirements |
| -------- | -------------- |
|HLR 1|It shall controll automatic entry and exit of the car.|
|HLR 2|It shall count the available space for parking.|

## 2.2 Low Level Requirements

| ID | Low Level Requirements for HLR 1|       |ID | Low Level Requirements for HLR 2|
| ----- | ----- | ---- |----- | ----- |
|LLR 1.1|SERVO motor operates based on the instructions of IR signal|                               |LLR 2.1|Ultra sonic sensor count the available space for parking| 
|LLR 1.2| IR sensor detects the motion of the car|                                                  |LLR 2.2|LCD display's output of working for the instructions of sensors|
|LLR 1.3|Gate sensor to  automaticaly open and close gate based on the instruction of IR signal|
----------------

