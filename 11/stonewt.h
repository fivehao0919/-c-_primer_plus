// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
class Stonewt
{
public:
    enum Mode {STN, PDS};
private:

    enum {Lbs_per_stn = 14};        // pounds per stone
    int stone;                      // whole stones
    double pds_left;                // fractional pounds
    double pounds;                  // entire weight in pounds
    Mode status;
public:
    Stonewt(double lbs, Mode s = STN);            // constructor for double pounds
    Stonewt(int stn, double lbs, Mode s = STN);   // constructor for stone, lbs
    Stonewt();                      // default constructor
    ~Stonewt();
    void set_status(Mode m);

    Stonewt operator+(const Stonewt & st) const;
    Stonewt operator-(const Stonewt & st) const;
    Stonewt operator*(double n) const;
    bool operator>=(const Stonewt & st) const;
    bool operator<=(const Stonewt & st) const;

    friend Stonewt operator*(double n, const Stonewt & st) {return st * n;};
    //void show_lbs() const;          // show weight in pounds format
    //void show_stn() const;          // show weight in stone format
    friend std::ostream &
                operator<<(std::ostream & os, const Stonewt & v);
};
#endif