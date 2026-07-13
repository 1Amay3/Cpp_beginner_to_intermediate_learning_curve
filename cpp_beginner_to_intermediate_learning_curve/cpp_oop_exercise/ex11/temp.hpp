#include <iostream>

class Temperature{
    private:
        double celcius;
    public:
        Temperature(double c):celcius(c){
            std::cout<<"Celcius set to: "<<celcius<<"\n";

        }
        void set_celcius(double temp){
            celcius = temp;
            std::cout<<"Celcius set to: "<<celcius<<"\n";
        }
        double get_farenheit(){
            double far = (9*celcius/5)+32;
            std::cout<<"Farenheit: "<<far<<"\n";
            return far;
        }
};