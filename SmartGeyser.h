class SmartGeyser
{
public:
    EnvSensor E;
    WaterHeater W;
    int geyserstatus;
public:
    void geyseron()
    {
        geyserstatus=1;

        cout<<"\nThe geyser is on";
        cout<<"\nGEYSER INFORMATION";
        cout<<"\nThe heating temp is:"<<W.heatingtemp;
        cout<<"\nThe season is:"<<E.season1;
        cout<<"\nThe weather temperature is:"<<E.temp<<endl;
    }
    void geyseroff()
    {

        geyserstatus=0;
        cout<<"\nThe geyser is off"<<endl;
    }

};

