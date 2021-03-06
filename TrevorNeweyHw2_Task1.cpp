/*
 * =====================================================================================
 *
 *       Filename:  TrevorNeweyHw2_Task1.cpp
 *       	Usage:  ./housePrice.cpp
 *    Description:  Ask user to specify the address and price
 *    				of two house that are on sale
 *    				It prints out which of the two houses is cheaper
 *       Compiler:  g++
 *         Author:  Dr. Hugo Valle (), hugovalle1@weber.edu
 *                  Edited by Trevor Newey
 *   Organization:
 * =====================================================================================
 */
#include <iostream>
using namespace std;
/*  Structures/Constants */
struct house
{
    int streetNum;
    char streetName[30];
    double price;
};

// Function prototypes
struct house InputHouse(void);
void PrintHouse(int houseNum, struct house h);
int ComparePrices(struct house h1, struct house h2);

/* Main Program */
int main(int argc, char* argv[])
{
    cout<<"Enter info for first house\n";
    struct house firstHouse = InputHouse();
    cout<<"\nEnter info for second house\n";
    struct house secondHouse = InputHouse();

    PrintHouse(1, firstHouse);
    printf("\n\n");
    PrintHouse(2, secondHouse);
    printf("\n\n");

    int comparison = ComparePrices(firstHouse, secondHouse);
    /* Based on comparison value, use a switch
     * statement to display all posibilities:
     * 1) "the first house is cheaper"
     * 2) "the two houses are equally expensive"
     * 3) "the second house is cheaper"
     * 4) "invalid comparison value there must be a bug"
     */
    switch(comparison) {
        case 1:
            cout << "The first house is cheaper";
            break;
        case 2:
            cout << "The two houses are equally expensive";
            break;
        case 3:
            cout << "The second house is cheaper";
            break;
        case 4:
            cout << "Invalid comparison value there must be a bug";
    }
    return 0;
}
/* Function Defenitions */
struct house InputHouse(void){
    house  h;
    cout << "Please enter the street number: " << endl;
    cin >> h.streetNum;
    cout << "Please enter the street name: " << endl;
    cin >> h.streetName;
    cout << "Please enter the house price: " << endl;
    cin >> h.price;
    house houseInput = {h.streetNum, h.streetName[30], h.price};
    return h;
}

void PrintHouse(int houseNum, struct house h){
cout << houseNum << " house at " << h.streetNum << " " << h.streetName << " " << " for "<< "$" <<h.price;
}

int ComparePrices(struct house h1, struct house h2){
    int i = 4;
    if(h1.price < h2.price){
        i = 1;
    }
    else if (h1.price == h2.price){
        i = 2;
    }
    else if (h2.price < h1.price){
        i = 3;
    }
    else{
        i = 4;
    }
    return i;
}
