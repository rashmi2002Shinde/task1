class WaterHeater
{
   public:
       int heatingtemp;
       EnvSensor E;

    int calculateheat()
    {
        if(E.temp>20)
        {heatingtemp=20;}
        if(E.temp<40)
        {
           heatingtemp=50;
        }
       // cout<<"\nThe heating temp is (in degree celsius):"<<endl;
        //cout<<heatingtemp<<endl;
    }
};
