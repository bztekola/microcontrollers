

#include <SPI.h>
#include <Adafruit_DotStar.h>

#define NUMPIXELS 60

//Create the strip

Adafruit_DotStar strip = Adafruit_DotStar(NUMPIXELS, DOTSTAR_BRG) ;

void setup() {
  // put your setup code here, to run once:
  strip.begin() ; //initializes the strip
  strip.show() ; //turn off LEDS within NUMPIXELS
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int tail = 0 ;
  int head = 60 ;
  uint32_t color = 0x006565 ;

  for (int i=tail; i<head; i++){
    strip.setPixelColor(i, color) ;
    }
    strip.show() ;
  
}
