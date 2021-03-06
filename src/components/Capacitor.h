class Capacitor : public virtual Component {
public:
    void setCapacitance(double _capacitance);
    double getCapacitance();
    double calculateVoltage() {
        //Only for examples. Put your implementation here.
        return 1.0;
    };
    double calculateCurrent() {
        //Only for examples. Put your implementation here.
        return 1.0;
    };
    double calculatePotency() {
        //Only for examples. Put your implementation here.
        return 1.0;
    };
private:
    double capacitance;
};

void Capacitor::setCapacitance(double _capacitance) {
    capacitance = _capacitance;
}

double Capacitor::getCapacitance() {
    return capacitance;
}