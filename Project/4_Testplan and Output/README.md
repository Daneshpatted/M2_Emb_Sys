  # 4. Testplan  
   
   ## 4.1 HIGH LEVEL TEST PLAN

| Test ID | Description | Input | Expected output | Actual Output | Passed Or Not |
| --- | --- | --- | --- | --- | --- |
|1|servo motor| suuply|rotate motor|rotate motor|pass|
|2|IR sensor| supply|detect motion|detect motion|pass|
|3|ultrasonic sensor|supply|detect space|detect space|pass|


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




