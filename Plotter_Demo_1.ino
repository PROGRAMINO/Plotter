/*************************************************************
Create with PROGRAMINO-IDE http://www.programino.com

Project:       Programino Plotter Demo (1)
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
    
    // 4 Channel Demo
    // Channel 1 = read analog A0
    // Channel 2 = sin wave 1
    // Channel 3 = sin wave 2
    // Channel 4 = saw tooth
    // ---------------------------------------
    for(int j=0;j<360;j++)
    {
        Serial.print(analogRead(A0));
        Serial.print(",");
        
        Serial.print(sin(j*(PI/180))*100);
        Serial.print(",");
        
        Serial.print(sin((j*(PI/180))-90)*100);
        Serial.print(",");
        
        Serial.println(240+(j/6)); // last channel use "println"
        delay(10);
    }
}
