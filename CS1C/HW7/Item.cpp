#include "Item.h"
namespace InventoryManagement
{
    Inventory::Inventory()
    {
        p_pInvItems = new Item*[ITEM_NUM];
        p_pAuditLog = new Item*[ITEM_NUM];
        invTotal = new float{0};
        auditTotal = new float{0};

        for(int i = 0; i < ITEM_NUM; i++)
        {
            p_pInvItems[i] = new Item{"NA", 0, 0};
            p_pAuditLog[i] = new Item{"NA", 0, 0};
        }
    }

    Inventory::~Inventory()
    {
        for(int i = 0; i < ITEM_NUM; i++)
        {
            delete p_pInvItems[i]; 
            delete p_pAuditLog[i];
        }

        delete p_pAuditLog;
        delete p_pInvItems;
        delete invTotal;
        delete auditTotal;
    }

    Inventory::Inventory(Inventory &obj)
    {
        p_pInvItems = new Item*[ITEM_NUM];
        p_pAuditLog = new Item*[ITEM_NUM];
        invTotal = new float;
        auditTotal = new float;

        *invTotal = *obj.invTotal;
        *auditTotal = *obj.auditTotal;

        for(int i = 0; i < ITEM_NUM; i++)
        {
            p_pInvItems[i] = new Item;
            p_pAuditLog[i] = new Item;
            *p_pInvItems[i] = *obj.p_pInvItems[i];
            *p_pAuditLog[i] = *obj.p_pAuditLog[i];
        }
    }

    Inventory::Inventory(Item arr[])
    {
        p_pInvItems = new Item*[ITEM_NUM];
        p_pAuditLog = new Item*[ITEM_NUM];
        invTotal = new float{0};
        auditTotal = new float{0};

        for(int i = 0; i < ITEM_NUM; i++)
        {
            p_pInvItems[i] = new Item;
            p_pAuditLog[i] = new Item;
            *p_pInvItems[i] = arr[i];
            p_pAuditLog[i]->name = arr[i].name;
            p_pAuditLog[i]->price = arr[i].price;
            p_pAuditLog[i]->quantity = 0;
            *invTotal += arr[i].price * arr[i].quantity;
    }
    }


    void Inventory::addItems(Item purchases[])
    {
        for(int i = 0; i < ITEM_NUM; i++)
        {
            p_pInvItems[i]->quantity += purchases[i].quantity;
            p_pAuditLog[i]->quantity += purchases[i].quantity;
            *invTotal += (purchases[i].price * purchases[i].quantity);
            *auditTotal += (purchases[i].price * purchases[i].quantity);
        }
    }

    void Inventory::Print()
    {

        cout << "Inventory:\n";
        cout << std::setfill('-') << setw(COL_WIDTH*2) << "-";
        cout << endl << std::setfill(' ');
        cout << std::left;
        cout << setw(COL_WIDTH) << "Equipment Name";
        cout << setw(COL_WIDTH/2) << "Cost";
        cout << setw(COL_WIDTH/2) << "Quantity";
        cout << endl;

        cout << std::fixed << std::setprecision(2);
        for(int i = 0; i < ITEM_NUM; i++)
        {
            cout << setw(COL_WIDTH) << p_pInvItems[i]->name;
            cout << setw(COL_WIDTH/2) <<  p_pInvItems[i]->price;
            cout << setw(COL_WIDTH/2) << p_pInvItems[i]->quantity;
            cout << endl;
        }
        cout << endl;
        cout << "Total: " << *invTotal << endl;
        cout << "Total & TAX: " << *invTotal * TAX << endl << endl;

        cout << "Audit Log:\n";
        cout << std::setfill('-') << setw(COL_WIDTH*2) << "-";
        cout << endl << std::setfill(' ');
        cout << std::left;
        cout << setw(COL_WIDTH) << "Equipment Name";
        cout << setw(COL_WIDTH/2) << "Cost";
        cout << setw(COL_WIDTH/2) << "Quantity";
        cout << endl;

        cout << std::fixed << std::setprecision(2);
        for(int i = 0; i < ITEM_NUM; i++)
        {
            cout << setw(COL_WIDTH) << p_pAuditLog[i]->name;
            cout << setw(COL_WIDTH/2) <<  p_pAuditLog[i]->price;
            cout << setw(COL_WIDTH/2) << p_pAuditLog[i]->quantity;
            cout << endl;
        }
        cout << endl;
        cout << "Total: " << *auditTotal << endl;
        cout << "Total & TAX: " << *auditTotal * TAX << endl << endl;

        cout << endl;
 
        cout << std::right;
        cout.unsetf(std::ios_base::fixed);
        cout << std::setprecision(6); 
    }
}
