/*************************************************************
Create with PROGRAMINO-IDE http://www.programino.com

Project:       Programino Plotter Demo (2)
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
    
    // 1 Channel Demo
    // Sinus Demo (values between -10 and +10)
    // ---------------------------------------
    for(int j=0;j<360;j++)
    {
            Serial.println(sin(j*(PI/180))*100);
            delay(10);
    }   

}
