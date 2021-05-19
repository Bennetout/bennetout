#include "sensorValuesGenerator.h"

#define INCREMENTATION 1
#define DECREMENTATION -1

float lastPorte = 0;        // Entre 0 et 90
int porteDirection = INCREMENTATION;

float lastFleche = -30;     // Entre -30 et 30
int flecheDirection = INCREMENTATION;

float lastLevage = 0;       // Entre 0 et 45
int levageDirection = INCREMENTATION;

float lastInclinoX = -10;   // Entre -10 et 10
int inclinoXDirection = INCREMENTATION;

float lastInclinoY = -10;   // Entre -10 et 10
int inclinoYDirection = INCREMENTATION;

int rand_a_b(int a, int b);
float float_rand(float min, float max);

int getRandomValues(char* buf) {
    int i;
    int ret;
    
    float randomPorte = float_rand(0.0, 90.0);
    float randomFleche = float_rand(-30.0, 30.0);
    float randomLevage = float_rand(0.0, 45.0);
    float randomInclinoX = float_rand(-10.0, 10.0);
    float randomInclinoY = float_rand(-10.0, 10.0);
   
    snprintf(buf, MAX_RETURN_BUF_SIZE, "/%.1f/%.1f/%.1f/%.1f/%.1f/", randomFleche, randomLevage, randomPorte, randomInclinoX, randomInclinoY);
    ret = strlen(buf);
    
    /*for (i = 0; i < ret; i++) {
        printf("%c", buf[i]);
    }
    printf("\n");*/
    
    return ret;
}

int getRandomValuesLogic(char* buf) {
    
    int i;
    int ret;
    
    if (lastPorte == 90)
        porteDirection = DECREMENTATION;
    if (lastPorte == 0)
        porteDirection = INCREMENTATION;
    lastPorte += porteDirection;
    
    if (lastFleche == 30)
        flecheDirection = DECREMENTATION;
    if (lastFleche == -30)
        flecheDirection = INCREMENTATION;
    lastFleche += flecheDirection;
    
    if (lastLevage == 45)
        levageDirection = DECREMENTATION;
    if (lastLevage == 0)
        levageDirection = INCREMENTATION;
    lastLevage += levageDirection;
    
    if (lastInclinoX == 10)
        inclinoXDirection = DECREMENTATION;
    if (lastInclinoX == -10)
        inclinoXDirection = INCREMENTATION;
    lastInclinoX += inclinoXDirection;
    
    if (lastInclinoY == 10)
        inclinoYDirection = DECREMENTATION;
    if (lastInclinoY == -10)
        inclinoYDirection = INCREMENTATION;
    lastInclinoY += inclinoYDirection;
    
    snprintf(buf, MAX_RETURN_BUF_SIZE, "/%.1f/%.1f/%.1f/%.1f/%.1f/", lastFleche, lastLevage, lastPorte, lastInclinoX, lastInclinoY);
    ret = strlen(buf);
    
    /*for (i = 0; i < ret; i++) {
        printf("%c", buf[i]);
    }
    printf("\n");*/
    
    return ret;
}

// On suppose a<b
int rand_a_b(int a, int b){
    return rand()%(b-a) +a;
}

float float_rand(float min, float max) {
    float scale = rand() / (float) RAND_MAX; /* [0, 1.0] */
    return min + scale * ( max - min );      /* [min, max] */
}