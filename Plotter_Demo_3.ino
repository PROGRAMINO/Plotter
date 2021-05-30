/*************************************************************
Create with PROGRAMINO-IDE http://www.programino.com

Project:       Programino Plotter Demo (3)
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
    
    // Demo negative and positiv values
    // Digital Demo (value -10 or +10)
	// Set Scale to ~ +/- 20
    // -------------------------------
    delay(500); 
    Serial.println("10");  
    delay(500);
    Serial.println("0");
    delay(500)
    Serial.println("-10");
    delay(500);
    
}
