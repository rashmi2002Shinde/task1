#include<iostream>
using namespace std;
#include "HomeOwner.h"
#include "EnvSensor.h"
#include "WaterHeater.h"
#include "SmartGeyser.h"


int main() {
  HomeOwner h1;
  EnvSensor E;
  SmartGeyser S;


  cout<<h1.getownerinfo();
  E.settemp();
  S.geyseron();


  return 0;
}
