#include<math.h>
#include"utlis.h"

double degreesToRadians(double degree) {
  return (degree/180)*M_PI;
}
double getAirDistance(double originLatitude, double originLongitude, destinationLatitude, destinationLongitude) {
  double originLatitudeR = degreesToRadians(originLatitude);
  double originLongitudeR = degreesToRadians(originLongitude);
  double destinationLatitudeR = degreesToRadians(destinationLatitude);
  double destinationLongitudeR = degreesToRadians(destinationLongitude);
  return acos(sin(originLatitudeR)*sin(destinationLatitudeR)+cos(originLatitudeR)*cos(destinationLatitudeR)*cos(destinationLongitudeR-originLongitudeR) * 6371;
}
double lorentzTimeDilation(double t, double percentC) {
  return t/sqrt((1)-(percentC*percemtC));
}
