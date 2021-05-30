/*************************************************************
Create with PROGRAMINO-IDE http://www.programino.com

Project:       Programino Plotter Demo (5)
Librarys:      
Author:        UlliS
Description:   Small Programino-Plotter example
**************************************************************/

byte const Button = 8;

void setup() {
    
    // Setup code
    Serial.begin(115200);            // set baudrate
    while(!Serial) {
        ; // wait for serial port to connect. Needed for Leonardo only
    }
    
    pinMode(Button,INPUT);           // pin 8 is input
    digitalWrite(Button,HIGH);       // activate internal pullup restister
    
}

void loop() {
    
    // Demo show button state
    // Digital Demo (read the button on pin 8 switch to ground, value 0 or 1)
	// Set Scale to +/- 1
    // ----------------------------------------------------------------------
    Serial.println(digitalRead(Button));
    delay(10);
    
}
