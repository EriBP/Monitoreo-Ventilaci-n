
/*Monitoreo de CO2, Presencia y ventilación
 * Envio de datos de los sensores MQ135 (CO2) y Pir Hcsr501 (presencia) por MQTT
 * por: Jose Luis Oviedo Barriga
 * Fecha: 15 de junio de 2022
 * 
 * Este programa lee los sensores MQ135 (CO2) y Pir Hcsr501 (presencia) por MQTT
 * ritmo cardiaco (HR) y oxigenación (SpO2) por MQTT.
 * 
 * ESP32      MQ135      ESP32      Pir Hcsr501      
 * I04 ------ ánodo          I02 ------ ánodo      
 * GND ------ cátodo         GND ------ cátodo         
 *                                                                         
 * 

 * 
 * Esto es una muestra de la estructura básica de un programa
 */

// Bibliotecas

// Constantes
//float sensorValue; //CO2Value; variable para guardar el valor analógico del sensor
//int relayPin=13;    //RelayFan
int Flash = 4;        //ReleyFocoFlash
int ValorPIR=0;


// Definición de objetos
//#define MQ135pin 12     //#define CO2PIN 12
  #define PIR 14

// Condiciones iniciales - Se ejecuta sólo una vez al energizar
void setup() {
//     Serial.begin (115200);
     pinMode(PIR, INPUT);
     pinMode(Flash, OUTPUT);

}// Fin de void setup


void loop(){                       //VOID LOOP
ValorPIR = digitalRead(PIR);
if (ValorPIR == HIGH){
   digitalWrite(Flash, 1);
   delay(1000);
   } else{
      digitalWrite(Flash, 0);
      }
}                                // Fin de void loop

// Funcioes del usuario
