/*************************************************************
Create with PROGRAMINO-IDE http://www.programino.com

Project:       Programino Plotter Demo (4)
Librarys:      
Author:        UlliS
Description:   Small Programino-Plotter example
**************************************************************/

void setup() {
    
    // Setup code
    Serial.begin(115200);            // set baudrate
    while(!Serial) {
        ; // wait for serial port to connect. Needed for Leonardo only
    }

}

void loop() {
    
    // Demo show analog values from ADC
    // Analog Demo (read the analog input A0, values between 0 and 1023)
    // -----------------------------------------------------------------
    Serial.println(analogRead(A0));
    delay(10);
    
}
