// Intel 8008 Emulator
// https://en.wikichip.org/wiki/intel/mcs-8/isa
// http://www.bitsavers.org/components/intel/MCS8/Intel_8008_8-Bit_Parallel_Central_Processing_Unit_Rev1_Apr72.pdf
#include <iostream>
using std::cout;
using std::endl;

typedef unsigned char Byte;
typedef unsigned short Word;

struct Mem
{
    static constexpr unsigned MAX_SIZE = 0x3FFF;
    Byte Data[MAX_SIZE];

    void Initialise()
    {
        for (unsigned i = 0; i < MAX_SIZE; ++i)
        {
            Data[i] = 0;
        }
    }
};

struct CPU
{
    Word PC;

    Byte A,         // Accumulator
      B, C, D, E,   // General Purpose
      H, L;         // High-Low order word (bit addresses)

    Byte Carry, Parity, Zero, Sign; // Flags


};

int main()
{
    CPU cpu;
    Mem mem;
    mem.Initialise();
    cout << mem.MAX_SIZE << endl;

    return 0;
}
