#include <iostream>
using namespace std;

class AttikiOdos
{
        int N_Segs, Num_Of_Cars = 0;
    
    public:
        AttikiOdos();
        
};

AttikiOdos::AttikiOdos()
{
    cout << "Αυτοκινητόδρομος σε λειτουργία" << "\n";
}

class Segment
{
        int Capacity, Num_Of_Cars = 0;
        Segment &next, &prev;

        public:
            void enter();
};

void Segment::enter()
{

}