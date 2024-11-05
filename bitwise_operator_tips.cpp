/**
 * AND -> &
 * OR -> |
 * XOR -> ^
 * NOT -> ~
 * Left Shift -> <<
 * Right Shift -> >>
 * 
 * 1. AND Examples:
 *  1 & 1 = 1
 *  1 & 0 = 0
 *  0 & 1 = 0
 *  0 & 0 = 0
 * 
 * 2. OR Examples:
 *  1 | 1 = 1
 *  1 | 0 = 1
 *  0 | 1 = 1
 *  0 | 0 = 0
 * 
 * 3. XOR Examples:
 *  1 ^ 1 = 0
 *  1 ^ 0 = 1
 *  0 ^ 1 = 1
 *  0 ^ 0 = 0
 * 
 * 4. NOT Examples:
 *  ~1 = 0
 *  ~0 = 1
 *  ~2 = -3
 *  ~-3 = 2
 * 
 * 5. Left Shift Examples:
 * 
 *  1 << 1 = 2
 *  1 << 2 = 4
 *  1 << 3 = 8
 * 
 * Note: Also used for multiplication by 2.
 * Example: 10 << 1 = 20 -> (10*2)
 * 10 << 2 = 40 -> (10*2*2)
 * 
 * Therefore -> n << x = n*2^x
 * 
 * 
 * 
 * 6. Right Shift Examples:
 *  8 >> 1 = 4
 *  8 >> 2 = 2
 *  8 >> 3 = 1
 * 
 * Note: Also used for division by 2.
 * Example: 10 >> 1 = 5 -> (10/2)
 * 10 >> 2 = 2 -> (10/2/2)
 * Therefore -> n >> x = n/2^x
 */

#include<iostream>
using namespace std;

int main() {

    int a = 4;
    int b = 6;
    cout<<"a&b = "<<(a&b)<<endl;
    cout<<"a|b = "<<(a|b)<<endl;
    cout<<"a^b = "<<(a^b)<<endl;
    cout<<"~a = "<<~a<<endl;



    //left shift
    cout<<"(10<<1) = "<<(10<<1)<<endl; //20

    //right shift
    cout<<"(10>>1) = "<<(10>>1)<<endl; //5
    return 0;
}