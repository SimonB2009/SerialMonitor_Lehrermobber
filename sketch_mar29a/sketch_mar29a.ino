String name = "Lehrername";
int anzahl = 1;


void setup() {
  Serial.begin(9600);

}

void loop() {
 
  for(; anzahl == 0; anzahl=-1) {

     Serial.println("Die/Der schrecklichste Lehrer/-in ist:");
     Serial.println(name);
  }
}
