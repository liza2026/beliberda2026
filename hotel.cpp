#include "hotel.h"

#include "hotel.h"

hotel::hotel()
    : numberRoom(1), floor(1), Sea(false), people(1), freespace(0), price(100), have(false) {
    klass = 0; // 0 для 1 класса
    occupaid[0] = 0; // 0 для пустого
    occupaid[1] = 1; // 1 для мужского
    occupaid[2] = 2; // 2 для женского
}

bool hotel::operator==(const hotel &other) const {// hello who read
    return numberRoom == other.numberRoom &&
           floor == other.floor &&
           klass == other.klass &&
           Sea == other.Sea &&
           people == other.people &&
           freespace == other.freespace &&
           occupaid[0] == other.occupaid[0] &&
           price == other.price &&
           notes == other.notes &&
           have == other.have;
}

bool hotel::operator!=(const hotel &other) const {
    return !(*this == other);
}

bool hotel::operator<(const hotel &other) const {
    if (klass != other.klass) return klass < other.klass;
    if (floor != other.floor) return floor < other.floor;
    if (numberRoom != other.numberRoom) return numberRoom < other.numberRoom;
    return false;
}

bool hotel::operator>(const hotel &other) const {
    if (klass != other.klass) return klass > other.klass;
    if (floor != other.floor) return floor > other.floor;
    if (numberRoom != other.numberRoom) return numberRoom > other.numberRoom;
    return false;
}

bool hotel::operator<=(const hotel &other) const {
    return !(other > *this);
}

bool hotel::operator>=(const hotel &other) const {
    return !(*this < other);
}

hotel& hotel::operator=(const hotel &other) {
    if (this != &other) {
        this->numberRoom = other.numberRoom;
        this->floor = other.floor;
        this->klass = other.klass;
        this->Sea = other.Sea;
        this->people = other.people;
        this->freespace = other.freespace;
        this->occupaid[0] = other.occupaid[0];
        this->price = other.price;
        this->notes = other.notes;
        this->have = other.have;
    }
    return *this;
}

