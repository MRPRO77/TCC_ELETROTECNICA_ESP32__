/*********************Função que configura Pinos do MCU*************************

                       configuração para ROBOCORE
*******************************************************************************/
/******************************************************************************/
                    /* Arquivos de Bibliotecas */
// ========================================================================================================
// --- Bibliotecas Auxiliares ---
#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include <DHT.h>   
#include <Adafruit_Sensor.h>
#include <BluetoothSerial.h>
#include <WIFI.h>
#include <BLEDevice.h>
#include <BLEServer.h>
#include <BLEUtils.h>
#include <BLE2902.h>


/*******************************************************************************/

#include "Config_ESP.h"

/*******************************************************************************/

// ========================================================================================================
// --- Definições ---

//Declaracao da variavel do pino do LED
const int LED_Sinalizacao = 2;


const int RelePin1  = 33;

// ======================================================================================================
// --- Função de inicialização do Display ---
// ======================================================================================================
// --- Objetos ---

void Config_ESP ()
{
                                    Serial.begin(9600);
                                 
                       Serial.println("Initializing...");

                       //Declaracao do pino como saida
                        pinMode(LED_Sinalizacao, OUTPUT);
                     digitalWrite(LED_Sinalizacao, HIGH);


                 pinMode(33, OUTPUT);                // configura digital 33 como saida
            digitalWrite(33,   HIGH);                // pino configurado nivel baixo


                 pinMode(25, OUTPUT);                // configura digital 25 como saida
            digitalWrite(25,   HIGH);                // pino configurado nivel baixo

}

