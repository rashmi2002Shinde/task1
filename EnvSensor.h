class EnvSensor
{
   public:

       int temp;
       string season1;
    public:
    void settemp()
    {
        int temp1;
        string season1;
        cout<<"\nenter temperature"<<endl;
        cin>>temp1;
         cout<<"\nenter season"<<endl;
        cin>>season1;
        temp=temp1;

        cout<<"\nsensor temperature and season are"<<endl;
        cout<<temp<<endl;
        cout<<season1<<endl;

    }

};
