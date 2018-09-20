double degreesToRadians(double degree) {
  return (degree/180)*M_PI
}
double getAirDistance(double originLatitude, double originLongitude, destinationLatitude, destinationLongitude) {
  return acos(sin(originLatitude)*sin(destinationLatitude)+cos(originLatitude)*cos(destinationLatitude)*cos(destinationLongitude-originLongitude) * 6371
}
double loretzTimeDilation(double t, double percentC) {
}
