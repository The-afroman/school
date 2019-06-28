
#include <iomanip>
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;
using std::setw;

namespace InventoryManagement
{
    const float TAX = 1.0825;
    const int ITEM_NUM = 5;
    const int COL_WIDTH = 26;

    struct Item
    {       
        string name;
        float price;
        int quantity;
    };

    class Inventory
    {
        public:
            Inventory();
            ~Inventory();
            
            Inventory(Item arrInv[]);   //takes in array of Items as parameter
                                        //to init data in pointer arrays p_pInvItems
                                        //and p_pAuditItems
            Inventory(Inventory &obj);

            void addItems(Item arrPurchases[]); //takes in array of Items as parameter
                                                //to modify data in pointer arrays p_pInvItems
                                                //and p_pAuditItems

            void Print();

        private:
            Item **p_pInvItems;
            Item **p_pAuditLog;
            float *invTotal;
            float *auditTotal;
    };
}