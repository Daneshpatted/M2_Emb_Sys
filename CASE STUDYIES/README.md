# CASE STUDY-1 (low level application)

![weight measurement 2](https://user-images.githubusercontent.com/98831772/154840632-d4695296-df00-4d6f-a16e-eea468ce21de.png)
                                        BLOCK DIAGRAM

## EXPLANATION:
1) Load Cell → 
-	It is essentially force sensor or force transducer.
-	 It is used principally to measure weight.
-	 It converts a load or force acting on it into an electronic signal. 
-	When load, force or stress is applied to the sensor. It changes its resistance.
-	This change in resistance leads to a change in output voltage when a input voltage is applied.

2) Signal Amplifier→
-	Load cell output signal is very weak.
-	So it’s required for this signal to amplified up to convertible range to convert analog to digital signal.

3)	ADC→
-	Microcontroller can’t understand analog signal directly so use ADC.
-	Amplified signal filter to avoiding damping signals for constant and accurate reading. 
-	Analog to digital converter resolution define final scale resolution, so ADC resolution must be high.

4)	Microcontroller→
-	Digital signal received by microcontroller and process it after processing signal it’s provide final output of weight in digital display.

5) Display & Memory→
-	LCD display received signal by microcontroller and process it after processing signal it’s provide final output of weight in LCD display.
-	This is a nonvolatile memory that is often used to store system configuration parameters for an microcontroller application.

6) Power supply→
-	Power supply unit provide to all section of main control unit of microcontroller, display unit, amplifier and ADC.
-	Power supply unit is very important just like food for all electronics circuit.
-	If power is best filtered and regulated then working more effectively and life of circuits is improve.


# CASE STUDY -2 (medium level application)

![AVWM](https://user-images.githubusercontent.com/98831772/154840728-1971e141-ef00-43ce-98bd-38738846f3df.png)

BLOCK DIAGRAM

## EXPLANATION:
1)	Flow sensor→
-	The main components are the flow sensors are turbine wheel, and magnet.
-	 The water flows in through the inlet and out through the outlet flow sensor.
-	 The water current drove the wheel to turn, and the magnet on the wheel turned with it.
-	 Magnetic field rotation triggers the flow sensor, which outputs high and low level square waves For every round of the wheel, 
-	 To measure the volume of water flowing through is a certain amount, based on the number of square waves output. 
-	Therefore, we can calculate the flow of water by counting the number of square waves.

2)	RFID Tag & Reader→
-	Radio Frequency Identification device Tag and Reader (RFID).
-	It is a device which consists of a small chip and an antenna. And similar to the barcode which provides a unique identifier for the object.
-	RFID device is scanned to retrieve the information of card holder. And debit amount and then do next procedure in the microcontroller.
-	The RFID Reader is capable of scanning the RFID tag if it is within the range of the reader.

3)	Relay →
-	A Relay driver is a circuit which can drive, or operate, a relay so that it can function appropriately in a circuit.
-	The relay driver can then operate a relay for switching operation in the circuit which can open or close, according to the needs of the circuit and it drives the motor.

4)	Solenoid valve→
-	A solenoid valve will be used to control the flow of water.
-	When it is energized the water will flow out and when it is de-energized the water will be stopped.

5)	DAC/ADC→
-	Digital to Analog Converter (DAC) is a device that transforms digital data into an analog signal. So hence it’s operates based on the signal of analog devices.
-	A DAC can reconstruct sampled data into an analog signal with precision. 
-	An analog to digital converter (ADC) as its name indicates is an electronic device which converts continuous time-varying analog signals into discrete-time digital signals so that they can easily be read by the digital devices like microcontroller, FPGA, ASIC, etc.
-	 ADC converts the physical quantities of a real-world phenomenon into a digital language which is used in control systems for that particular application.
-	In this project DAC/ADC are used near flow sensor, cion sensor and relay. So these converters do their particular work based on the instructions.

6)	Coin sensor→
-	The Coin acceptor module acts as the input device which gives the signal to microcontroller. When it detects a valid Coin inserted within it. Microcontroller receives the signal and then gives signal to the relay.
-	While the RED LED is on, display shows welcome text in the LCD, when insert the coin we want to program it. For example, if we want to program it for 1, 2, or 5 Rupees coins, then we will insert only 1, 2, or 5 Rupees coins while we program it.
-	Based upon our requirement one particular coin insert program is set, so then if the coin inserted valid go through the next procedure otherwise reject it.

7)	Power supply→
-	Power supply unit provide to all section of main control unit of microcontroller, display unit, amplifier and ADC.
-	Power supply unit is very important just like food for all electronics circuit.
-	If power is best filtered and regulated then working more effectively and life of circuits is improve.




# REQUIREMENTS

## High level requirements:
|RID| Description|
|-----|----------|
|HLR 1|Water will dispense if coin inserted is accepted|
|HLR 2|Water will dispense if smart card is scanned or read|




## Low level requirements:
|RID| Description|
|----|------------|
|LLR 1|Coin sensor|
|LLR 2|RFID Reader|
|LLR 3|RFID Tag|
|LLR 4|Solenoid valve|
|LLR 5|Flow sensor|
|LLR 6|LCD display|
 
