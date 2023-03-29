#include <iostream>

using namespace std;

int functun();

int main()  //x=16, y=17, z=18, s=8
{
    setlocale(LC_ALL, "ru");
    bool firstP = false;
    bool secondP = true;

    char charName_Eng = 'e';
    char charName2_Rus = 'е';

    wchar_t wchar_t_name_Eng = L'n';
    wchar_t wchar_t_name_Rus = L'н';

    short short_Name_Pos = 16;  // ->  10
    short short_Name_Neg = -16; // -> - 10

    short biggest_Pos = 32767;     // -> 7f ff;
    short biggest_Neg = -32768;    // -> -80 00;

    unsigned short d = 65535;   // -> ff ff
    unsigned short n = 0;       // -> 00 00

    int integer_Value_Pos = 17;		// ->  11
    int integer_Value_Neg = -17;	// -> - 11

    int integer_Biggest_Value_Pos = 2147483647;		// -> 7f ff ff ff
    int integer_Biggest_Value_Neg = -2147483648;	// -> -80 00 00 00

    unsigned int unsigned_Integer_Biggest_Value = 4294967295;	// -> ff ff ff ff
    unsigned int unsigned_Integer_Smallest_Value = 0;	        // -> 00 00

    long long_Value_Pos = 18;   // -> 12
    long long_Value_Neg = -18;  // -> -12

    long long_Biggest_Value_Pos = 2147483647;   // -> 7f ff ff ff 
    long long_Biggest_Value_Neg = -2147483648;  // -> -80 00 00 00

    unsigned long unsigned_Long_Biggest_Value = 4294967295;	// -> ff ff ff ff
    unsigned long unsigned_Long_Smallest_Value = 0;	        // -> 00 00

    float float_Value_Pos = 8.0;   // -> 8.0
    float float_Value_Neg = -8.0;  // -> -8.0


    char* char_Link = &charName_Eng;              // -> 14 f3 10 a9 b0 00 00 00
    wchar_t* wchar_t_Link = &wchar_t_name_Eng;    // -> 54 f3 10 a9 b0 00 00 00
    short* short_Link = &short_Name_Pos;          // -> 94 f3 10 a9 b0 00 00 00
    int* int_Link = &integer_Value_Pos;           // -> e4 f3 d0 40 83 00 00 00
    long* long_Link = &long_Value_Pos;            // -> 34 f8 7e 25 82 00 00 00

    cout << int_Link << " ->\t" << *int_Link << endl;
    int_Link += 3;
    cout << int_Link << " ->\t" << *int_Link << endl;


    int(*kkoala)();
    kkoala = functun;
    kkoala();
    //60 14 33 67 f7 7f 00 00
}


int functun()
{
    float x{}, y{ 9999999 }, z{}, o{};
    x = pow(2, y);
    cout << x << endl;
    z = -x;
    cout << z << endl;
    o = x / z;
    cout << o;

    return 0;
}