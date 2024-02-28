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
  int var1;


  cout<<h1.getownerinfo();
  E.settemp();
  cout<<"Enter 1 to on the geyser and  0 for geyser off"<<endl;
  cin>>var1;

  if(var1==1)
  {S.geyseron();}
  if(var1==0)
  {

      S.geyseroff();
  }


  return 0;
}
