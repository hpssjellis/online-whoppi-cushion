

void setup() {
  pinMode(D7, OUTPUT);      // set Pin to output
  Spark.function("whoopee", myWhoopee); // conect webpage with my function
}

void loop() {
    delay(1000);            // wait one second = 1000 ms
    digitalWrite(D7, 0);    // turn off power to D7

}

int myWhoopee(String noArgsNeeded) {  
   digitalWrite(D7, 1);    // turn on D7 or whoopee cushion with 3.3 Volts
   return 1;               // return that it was successfull
}


