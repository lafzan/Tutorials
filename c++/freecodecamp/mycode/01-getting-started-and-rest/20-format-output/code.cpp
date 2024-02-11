#include <iostream>
#include <iomanip>
int main() {

    
    //std::Flush

    std::cout << " this is a nice message.." << std::endl << std::flush;
    //setw() :Adjust the field with or the item about to be printed.

    std::cout << "Unformatted table : " << std::endl;
    std::cout << "Daniel" << " Gray" << " 25" << std::endl;
    std::cout << "Stanley" << " " << "Woods" << " 33" << std::endl;
    std::cout << "Jordan" << " " << "Parker" << " 45" << std::endl;
    std::cout << "Joe"  << " " << "Ball" << " 21" << std::endl;
    std::cout << "Josh" << " " << "Carr" << " 27" << std::endl;
    std::cout << "Izaiah" << " " << "Robinson" << " 29" << std::endl;


    std::cout << std::endl;
    std::cout << std::setw(10) << "Formatted table : " << std::setw(10) << std::endl;
    std::cout << std::setw(10) << "Daniel" << std::setw(10) << " Gray" << std::setw(10) << " 25" << std::endl;
    std::cout << std::setw(10) << "Stanley" << std::setw(10) << "Woods" << std::setw(10) << " 33" << std::endl;
    std::cout << std::setw(10) << "Jordan" << std::setw(10) << "Parker" << std::setw(10) << " 45" << std::endl;
    std::cout << std::setw(10) << "Joe"  << std::setw(10) << "Ball" <<  std::setw(10) <<" 21" << std::endl;
    std::cout << std::setw(10) << "Josh" << std::setw(10) << "Carr" <<   std::setw(10) <<" 27" << std::endl;
    std::cout << std::setw(10) << "Izaiah" << std::setw(10) << "Robinson" << std::setw(10) << " 29" << std::endl;

    int col_width{14};

   std::cout << std::endl;
      std::cout << std::right;

    std::cout << std::setw(col_width) << "Formatted table : " << std::setw(col_width) << std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << " Gray" << std::setw(col_width) << " 25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(col_width) << " 33" << std::endl;
    std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(col_width) << " 45" << std::endl;
    std::cout << std::setw(col_width) << "Joe"  << std::setw(col_width) << "Ball" <<  std::setw(col_width) <<" 21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" <<   std::setw(col_width) <<" 27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width) << " 29" << std::endl;


  std::cout << std::endl;
      std::cout << std::left;

    std::cout << std::setw(col_width) << "Formatted table : " << std::setw(col_width) << std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << " Gray" << std::setw(col_width) << " 25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(col_width) << " 33" << std::endl;
    std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(col_width) << " 45" << std::endl;
    std::cout << std::setw(col_width) << "Joe"  << std::setw(col_width) << "Ball" <<  std::setw(col_width) <<" 21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" <<   std::setw(col_width) <<" 27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width) << " 29" << std::endl;


    //internal justified

    std::cout << std::endl;
    std::cout << "Internal Justified : " << std::endl;
    std::cout << std::right;
    std::cout << std::setw(10) << -123.45 << std::endl;

    std::cout << std::internal;
    std::cout << std::setw(10) << -123.45 << std::endl;

    std::cout << std::setw(10) << -1231.23 << std::endl;
    std::cout << std::endl;


// setfill


    std::cout << std::endl;
    std::cout << std::left;
    std::cout << std::setfill('-');

    std::cout << std::setw(col_width) << "Formatted table : " << std::setw(col_width) << std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << " Gray" << std::setw(col_width) << " 25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(col_width) << " 33" << std::endl;
    std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(col_width) << " 45" << std::endl;
    std::cout << std::setw(col_width) << "Joe"  << std::setw(col_width) << "Ball" <<  std::setw(col_width) <<" 21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" <<   std::setw(col_width) <<" 27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width) << " 29" << std::endl;

    // std::boolalpha
    // std::noboolalpha

    // showpos

    float pos_num{34.343f} ;
    float neg_num {-45.234};
    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl;

    std::cout << std::endl;
    std::cout << std::showpos;
    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl;

    std::cout << std::endl;
    std::cout << std::noshowpos;
    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl;

    // different number systems 

    int pos_int {717171};
    int neg_int {-47347};

    double double_var {498.32};

    std::cout << std::endl;

    std::cout << "default base format : " << std::endl;
    std::cout << "pos_int : " << pos_int << std::endl;
    std::cout << "neg_int : " << neg_int << std::endl;


    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (dec) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (dec) : " << std::oct << pos_int << std::endl;

    
    std::cout << std::endl;
    std::cout << "neg_int (dec) : " << std::dec << neg_int << std::endl;
    std::cout << "neg_int (dec) : " << std::hex << neg_int << std::endl;
    std::cout << "neg_int (dec) : " << std::oct << neg_int << std::endl;


    std::cout << std::endl;
    std::cout << "double_var (dec) : " << std::dec << double_var << std::endl;
    std::cout << "double_var (dec) : " << std::hex << double_var << std::endl;
    std::cout << "double_var (dec) : " << std::oct << double_var << std::endl;


    std::cout << std::uppercase;
    std::cout << std::endl;
    std::cout << "neg_int (dec) : " << std::dec << neg_int << std::endl;
    std::cout << "neg_int (dec) : " << std::hex << neg_int << std::endl;
    std::cout << "neg_int (dec) : " << std::oct << neg_int << std::endl;

    std::cout << std::dec;
    double a {3.14153534534346345225252625};
    double b {2006.0};
    double c {1.34e-10};

    std::cout << "double values (default : use scientific where necessary) : " << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    std::cout << "double values (fixed) " << std::endl;
    std::cout << std::fixed;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    std::cout << "double values (scientific) " << std::endl;
    std::cout << std::scientific;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout.unsetf(std::ios::scientific | std::ios::fixed); //hack

    float randonumber {2342.2f} ;

    std::cout << randonumber << std::endl;

    //setprecision
    
    double d {34.1};
    double e {101.99};
    double f {12.0f};
    auto randinta {45};

    std::cout<< std::endl;
    
    std::cout << "noshowpoint (default) : " << std::endl;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl;
    std::cout << "randinta : " << randinta << std::endl;

    std::cout<< std::endl;
    std::cout << "showpoint : " << std::endl;
    std::cout << std::showpoint;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl;
    std::cout << "randinta : " << randinta << std::endl;
    return 0;
}