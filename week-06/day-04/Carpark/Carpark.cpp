#include "Carpark.h"

void Carpark::addCar(Car car) {
    _cars.push_back(car);
}

bool Carpark::modifyTicket(int id, bool validity){
    for (int i = 0; i <_cars.size() ; ++i) {
        if(id == _cars[i].getId()){
            _cars[i].setId(validity);
        }
    }
}

void Carpark::removeCar(int id) {
    for (int i=0; i<_cars.size(); i++){
        if(id == _cars[i].getId()){
            _cars.erase(_cars.begin()+i);
        }
    }
}

std::string Carpark::getOldest() {
    int oldest = _cars[0].getYear();
    int index = 0;
    for (int i = 1; i <_cars.size() ; ++i) {
        if(_cars[i].getYear() < oldest){
            oldest = _cars[i].getYear();
            index = i;
        }
    }
    return _cars[index].getLicencePlate();
}

std::vector<Car>Carpark::getPenalties() {
    std::vector <Car> carsWithNoValidTicket;
    for (int i = 0; i <_cars.size() ; ++i) {
        if(!_cars[i].hasParkingTicket()){
            carsWithNoValidTicket.push_back(_cars[i]);
        }
    }
    return carsWithNoValidTicket;
}

std::map<int, int> Carpark::getPenaltiesByYear() {
    std::map<int, int> penaltiesByYear;
    for (int i = 0; i < _cars.size(); ++i) {
        if (!_cars[i].hasParkingTicket()) {
            if (penaltiesByYear.find(_cars[i].getYear()) == penaltiesByYear.end()) {
                penaltiesByYear.insert(std::pair<int, int>(_cars[i].getYear(), 1));
            } else {
                penaltiesByYear[_cars[i].getYear()]++;
            }
        }

    }
    return penaltiesByYear;
}

const std::vector<Car> &Carpark::getCars() const {
    return _cars;
}
