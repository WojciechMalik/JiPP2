/* Polecenie:
 Dla przykładu z części pierwszej stwórz gettery i settery zgodnie z powyższymi informacjami.*/

class ExampleClass{
private:
    double p1;
    double *p2;

public:
    //konstruktor
    ExampleClass() {
        p2 = new double;
    }
    //konstruktor kopiujacy
    ExampleClass(ExampleClass& exampleClass) {
        p1 = exampleClass.p1;
        p2 = new double;
        *p2 = *exampleClass.p2;
    }

    //gettery
    double get_p1() const {
        return p1;
    }
    double get_p2() const{
        return *p2;
    }
    //settery
    void set_p1(const double p1a){
        p1 = p1a;
    }
    void set_p2(const double p2a){
        *p2 = p2a;
    }
    //destruktor
    ~ExampleClass() {
        delete p2;
    }
};
