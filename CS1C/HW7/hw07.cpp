#include "Item.h"
using namespace InventoryManagement;

/* 
 * This program uses dynamic arrays to store inventory data and an audit list of
 * last transactions
 */

int main()
{   
    /* Arrays to hold data to pass into constuctor */
    Item *invArr = new Item[ITEM_NUM];
    Item *purchasesArr = new Item[ITEM_NUM];

    int i = 0;
    /* INV DATA */
    invArr[i] = Item{"Nike basketball shoes", 145.99, 22};
    i++;
    invArr[i] = Item{"Under Armour T-shirt ", 29.99, 33};
    i++;
    invArr[i] = Item{"Brooks running shoes", 111.44, 11};
    i++;
    invArr[i] = Item{"Acics running shoes", 165.88, 20};
    i++;
    invArr[i] = Item{"Nike Shorts", 45.77, 77};
    i = 0;

    /* PURCHASE DATA */
    purchasesArr[i] = Item{"Nike basketball shoes", 145.99, 2};
    i++;
    purchasesArr[i] = Item{"Under Armour T-shirt ", 29.99, 3};
    i++;
    purchasesArr[i] = Item{"Brooks running shoes", 111.44, 1};
    i++;
    purchasesArr[i] = Item{"Acics running shoes", 165.88, 0};
    i++;
    purchasesArr[i] = Item{"Nike Shorts", 45.77, 4};
    i = 0;

    Inventory inv(invArr);

    cout << "\nBefore purchase:\n";

    inv.Print();
    inv.addItems(purchasesArr);

    cout << "\nAfter purchase:\n";
    inv.Print();

    Inventory inv2(inv);

    cout << "\nAfter copy:\n";
    inv2.Print();
}
