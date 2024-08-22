void setup()
{
    Serial.begin(9600);
}

void loop()
{
  // Reading in analog
    int LDR_Reading = analogRead(A0);
  //Voltage reading convertion - Max voltage cap to 5V
    float voltage = LDR_Reading * (5.0 / 1023.0);

    Serial.print("Raw:  ");
    Serial.print(LDR_Reading);
    Serial.print("    Voltage: ");
    Serial.println(voltage);

    Serial.println(voltage);
}

