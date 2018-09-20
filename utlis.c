#include<math.h>
#include"utlis.h"

double degreesToRadians(double degree) {
  return (degree/180)*M_PI;
}
double getAirDistance(double originLatitude, double originLongitude, destinationLatitude, destinationLongitude) {
  return acos(sin(originLatitude)*sin(destinationLatitude)+cos(originLatitude)*cos(destinationLatitude)*cos(destinationLongitude-originLongitude) * 6371;
}
double lorentzTimeDilation(double t, double percentC) {
  return t/sqrt((1)-(percentC*percemtC));
}
