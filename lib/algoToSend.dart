// Input will be a list, and calculate max of accelerometer in all directions
// in  time period of 500ms
// Output will be a maximum of all numbers and with a symbol.

import 'dart:async';

import 'package:sensors_plus/sensors_plus.dart';

void main() {
  final _streamSubscriptions = <StreamSubscription<dynamic>>[];
  List<double>? _userAccelerometer;
  List<double>? _gryoMeter;
  _streamSubscriptions.add(userAccelerometerEvents.listen((event) {
    _userAccelerometer = <double>[event.x, event.y, event.z];
  }));
  
}


