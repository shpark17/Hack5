#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include"utlis.h"

int main(int argc, char **argv) {
  
  double E = 0.00000001
  double degree = 90;
  double rad;
  double radExpected = M_PI/2
  rad = degreesToRadians (degree);
  printf("%f\n", rad);
  
  if(fabs(radExpected - rad) <= E) {
    printf("PASSED\n");
  } else {
    printf("FAILED\n");
  }
  
  double degree1 = 180;
  double rad1;
  double radExpected1 = M_PI
  rad1 = degreesToRadians (degree);
  printf("%f\n", rad1);
  
  if(fabs(radExpected - rad) <= E) {
    printf("PASSED\n");
  } else {
    printf("FAILED\n");
  }
  
  double latA, latB, longA, longB;
  latA = 40.825800
  latB = 41.252400
  longA = -96.685200
  longB = -95998000
  
  double airDistance;
  airDistance = getAirDistance (double originLatitude, double originLongitude, destinationLatitude, destinationLongitude);
  double distanceExpected = 74.645402;
  if(fabs(distanceExpected-airDistance) <= E) {
    printf("PASSED\n");
 } else {
   printf("FAILED\n");
 }
 
 double t, percentC
 t = 20;
 percentC = .25
 double TExpected = 20.65591118
 double T
 T = lorentzTimeDilation (t, percentC)
 if(fabs(Texpected-T)<=E) {
   printf("PASSED\n");
 } else {
   printf("FAILED\n");
   
 return 0
 }
