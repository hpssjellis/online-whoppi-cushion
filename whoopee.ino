

void setup() {
  Spark.function("whoopee", myWhoopee); // conect webpage with my function
}

void loop() {
   // nothing here
}

int myWhoopee(String noArgsNeeded) {  
    pinMode(D0, OUTPUT);
    digitalWrite(D0, 1);    // turn on whoopee cushion with 3.3 Volts
    delay(1000);            // wait one second = 1000 ms
    digitalWrite(D0, 0);    // turn off power
  return 1;                 // return that it was successfull
}


