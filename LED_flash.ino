#include <Time.h>
#include <TimeLib.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
//  Serial.print(now());
Serial.begin(9600); /*9600 bpsで接続*/
Serial.println(now());  /*今のタイムは0*/
Serial.println(hour()); /*現在時刻*/

}

void loop() {
  // put your main code here, to run repeatedly:
//  Serial.print("test");
//  digitalWrite(13, HIGH);
//  delay(1000);
//  digitalWrite(13, LOW);
//  delay(1000);
  Serial.println("Hello world!!"); /* Hello world!! を表示 */
  delay(1000);    
  Serial.println(now());
}
