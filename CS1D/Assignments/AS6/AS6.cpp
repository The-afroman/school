/**************************
* Faris Hijazi
* CS1D
* Assignment 6
**************************/

/*
    DESCRIPTION:
        two maps dh and qh are created, dh uses double hashing to 
        deal with collisions while qh uses quadratic probing.
        nodes are added to both maps and keys are deleted along the way.
        The final maps are output at the end.
*/

#include "maps.h"

/*
OPERATIONS
----------------
18 Laguna Niguel
41 Mission Viejo
22 San Clemente 
44 Irvine
Delete key 41
58 Lake Forest
32 San Diego
49 Anaheim
Delete key 58
31 Los Angeles
17 Orange
72 Palms Springs
41 Riverside
Delete key 72
19 Brea
60 Santa Ana
35 Tustin
103 Oceanside
11 La Jolla
18 Del Mar
22 Aliso Viejo
49 Laguna Beach
Delete key 41
42 Vista
49 San Diego
99 San Juan
29 Dana Point
88 El Segundo
41 San Clemente
62 Laguna Hills
*/
int main()
{
    DoubleHash dh;
    QuadraticHash qh;

    dh.insertHash(18, "Laguna Niguel");
    dh.insertHash(22, "San Clemente");
    dh.insertHash(44, "Irvine");
    
    //dh.displayHash();
    dh.remKey(41);
    //dh.displayHash();
    
    dh.insertHash(58, "Lake Forrest");
    dh.insertHash(32, "San Diego");
    dh.insertHash(49, "Anaheim");
    
    //dh.displayHash();
    dh.remKey(58);
    //dh.displayHash();
    
    dh.insertHash(31, "Los Angeles");
    dh.insertHash(17, "Orange");
    dh.insertHash(72, "Palm Springs");
    dh.insertHash(41, "Riverside");

    //dh.displayHash();
    dh.remKey(72);
    //dh.displayHash();
    
    dh.insertHash(19, "Brea");
    dh.insertHash(60, "Santa Ana");
    dh.insertHash(35, "Tustin");
    dh.insertHash(103, "Oceanside");
    dh.insertHash(11, "La Jolla");
    dh.insertHash(18, "Del Mar");
    dh.insertHash(22, "Aliso Viejo");
    dh.insertHash(49, "Laguna Beach");

    //dh.displayHash();
    dh.remKey(41);
    //dh.displayHash();
    
    dh.insertHash(42, "Vista");
    dh.insertHash(49, "San Diego");
    dh.insertHash(99, "San Juan");
    dh.insertHash(29, "Dana Point");
    dh.insertHash(88, "El Segundo");
    dh.insertHash(41, "San Clemete");
    dh.insertHash(62, "Laguna Hills");


/*
    QUADRATIC MAP
*/

    qh.insertHash(18, "Laguna Niguel");
    qh.insertHash(22, "San Clemente");
    qh.insertHash(44, "Irvine");
    
    //qh.displayHash();
    qh.remKey(41);
    //qh.displayHash();
    
    qh.insertHash(58, "Lake Forrest");
    qh.insertHash(32, "San Diego");
    qh.insertHash(49, "Anaheim");
    
    //qh.displayHash();
    qh.remKey(58);
    //qh.displayHash();
    
    qh.insertHash(31, "Los Angeles");
    qh.insertHash(17, "Orange");
    qh.insertHash(72, "Palm Springs");
    qh.insertHash(41, "Riverside");

    //qh.displayHash();
    qh.remKey(72);
    //qh.displayHash();
    
    qh.insertHash(19, "Brea");
    qh.insertHash(60, "Santa Ana");
    qh.insertHash(35, "Tustin");
    qh.insertHash(103, "Oceanside");
    qh.insertHash(11, "La Jolla");
    qh.insertHash(18, "Del Mar");
    qh.insertHash(22, "Aliso Viejo");
    qh.insertHash(49, "Laguna Beach");

    //qh.displayHash();
    qh.remKey(41);
    //qh.displayHash();
    
    qh.insertHash(42, "Vista");
    qh.insertHash(49, "San Diego");
    qh.insertHash(99, "San Juan");
    qh.insertHash(29, "Dana Point");
    qh.insertHash(88, "El Segundo");
    qh.insertHash(41, "San Clemete");
    qh.insertHash(62, "Laguna Hills");
    
    cout << "\n\nFINAL QUADRATIC MAP\n";
    qh.displayHash();
    cout << "\n\nFINAL DOUBLE MAP\n";
    dh.displayHash();

    return 0;
}
