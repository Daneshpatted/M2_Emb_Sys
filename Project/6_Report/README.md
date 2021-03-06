# AUTOMATIC CAR PARKING SYSTEM


## Table of Contents

1. About the AUTOMATIC CAR PARKING SYSTEM
    1. Description
    1. Identifying features
    1. State of art
    2. S.W.O.T analysis
    3. 5W's & 1H
1. Requirements
    1. High level requirements
    1. Low level requirements
1. Block Diagram and Blocks explination
    1. Block Diagram
    1. Sensors
    1. Actuators
    1. Micro controller and memory
    2. Flow chart
    3. UML diagram
    4. Use case structural diagram
    5. Schemetic diagram
    
1. Test plan and Output
    1. High level test plan
    1. Low level test plan
1. Application and Advantages
2. References
---------
      
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

----------------

  # 3. Block Diagram and Blocks explination
   ## 3.1 Block daigram
  
  ![Untitled Diagram](https://user-images.githubusercontent.com/98831772/155781662-5d3a7bac-73cc-4588-a772-1342c4873179.png)
--------

 ## 3.2 Sensors
 * ### Infrared sensor
     * IR sensor which emits in order to sense some aspects of the surroundings.and it can can measure the heat of an object-as well as detects the motion.

 * ### Ultrasonic sensor
     * It is economical sensor provides 2.5cm to 400cm of non-contact measurement functionality with a ranging accuracy that can reach upto 3mm.and it includes an ultrasonic transmitter,a receiver and a control circuit.
 --------
 ## 3.3  Actuators
 * ### Servo motor
     * A servo motor is rotary actuator or linear actuator that allows for precise control of angular or linear position, velocity and acceleration.servo can rotate approximately 180 degree,it hasan operating voltage of 5 volt.
 * ### LCD Display
     * LCD screen is flat-panel display, electronic visual display that uses the light-modulating properties of liquid crystals and LCD's are available to display arbitrary images,preset words,digits,and 7-segment displays.
     -------
  ## 3.4 Micro controller and memory
  * ### EEPROM
    * Here this is actually inside the microcontroller.
* ### Micro Controller 
    * This is the brain of the system here we use arduino uno every computation is done inside this controller it converts analog to digital and maps certain values, it controls LCD display, it sends PWM signals to servo motor.
     ---------------------
 
 ## 3.5 Flow chart
  
  ![CARparkFC](https://user-images.githubusercontent.com/98831772/155834454-6f89fee3-2eca-4dbc-a2d1-6ee1d5007b8c.png)


---
## 3.6 UML Diagram

![uml](https://user-images.githubusercontent.com/98831772/156926885-f13da2f1-21c2-4f00-a89f-cc05442899d8.png)


-------------------

## 3.7 Use case structural Diagram

![use case](https://user-images.githubusercontent.com/98831772/156926917-c20e2758-2d7c-4170-a3c4-c9a83efe4cce.png)


---------------------------

## 3.8 Schemetic Diagram

![schemetic](https://user-images.githubusercontent.com/98831772/157231052-3d1dd63c-0739-46d9-b0c4-a05358cde329.png)

--------------------------

   # 4. Testplan  
   
   ## 4.1 HIGH LEVEL TEST PLAN

| Test ID | Description | Input | Expected output | Actual Output | Passed Or Not |
| --- | --- | --- | --- | --- | --- |
|1|servo motor| suuply|rotate motor|rotate motor|pass|
|2|IR sensor| supply|detect motion|detect motion|pass|
|3|Ultrasonic sensor|supply|detect space|detect space|pass|


  ##  4.2 LOW LEVEL TEST PLAN

| Test ID(LCD) | Description | Input | Expected output | Actual Output | Passed Or Not |
| --- | --- | --- | --- | --- | --- |
| 01 |Check for LCD_Char()|C|C|C|pass|
| 02 |Check for LCD_String()|Parking|Parking|Parking|pass|


| Test ID (ADC)| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 |Check for ADC_Read()|supply |transfer signal|transfer the signal |pass|
| 02 |Check for DAC_Read()|supply|transfer signal|transfer signal|pass|

----------------------------------

 - # Output
 
## Circuit Simulation

![ckt](https://user-images.githubusercontent.com/98831772/156919135-de71bf45-d3d1-4be2-b37f-ac487f7478b5.PNG)



## Workflow of automatic car parking system

* ### (example) Two cars entered in the parking system

![entering](https://user-images.githubusercontent.com/98831772/156920013-84df4ca3-924f-4b2e-a479-036ab2474640.PNG)

* ###  (example) One car exited from the parking system

![exiting](https://user-images.githubusercontent.com/98831772/156920602-73193335-4a99-458e-a1d7-f48e38cb04be.PNG)



* ### ( example) Parking system is full

![full](https://user-images.githubusercontent.com/98831772/156920662-ba5dec10-00cb-4f6a-9826-1a7bd86bedec.PNG)




     
  
----------------------------------

     
# 5. Applications and Advantages
* The advantage of automated car parking are efficient usage of spaces.
* And decreasing the land space and increasing the number of parked vehicles,saving time.
* Providing security and safety for the car from theft and damages while parking.
* The automatic car parking system could be used for residential buildings,hotels,offices,shopping center,show rooms,universities,government buildings,airports,hospitals,and stadium,etc.
* The scope of this project is vast in the area automatic of car parking and vehicle security. 
---------------------

# 6. References
* https://www.ijntr.org/download_data/IJNTR03060017.pdf
* https://www.academia.edu/47530229/AUTOMATIC_CAR_PARKING_SYSTEM
---------
     


     

  
  
    

