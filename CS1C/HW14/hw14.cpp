#include "dLinkedList.h"
using std::cout;
using std::endl;

int main()
{
    cout << "\ntesting ints\n\n";
    /* test ints */
    dLinkedList<int> LL1;
    dLinkedList<int> LL2;
    /* Pt. 1 */
    LL1.push(60);
    LL1.push(143);
    LL1.push(62);
    LL1.push(78);
    LL1.push(88);
    LL1.print();
    /* Pt. 2 */
    dLinkedList<int> LL3(LL1);
    LL2 = LL1;
    LL2.print();
    LL3.print();
    /* Pt 3 */
    LL2.copyRev(LL1);
    LL2.print();
    /* Pt. 4 */
    LL1.pop_3rd();
    LL2.pop_3rd();
    LL1.print();
    LL2.print();
    /* Pt. 5 */
    LL1.pushMid(70);
    LL2.pushMid(70);
    LL1.print();
    LL2.print();




    cout << "\ntesting doubles\n\n";
    /* test doubles */
    dLinkedList<double> LLD1;
    dLinkedList<double> LLD2;
    /* Pt. 1 */
    LLD1.push(60.1);
    LLD1.push(143.2);
    LLD1.push(62.3);
    LLD1.push(78.4);
    LLD1.push(88.5);
    LLD1.print();
    /* Pt. 2 */
    dLinkedList<double> LLD3(LLD1);
    LLD2 = LLD1;
    LLD2.print();
    LLD3.print();
    /* Pt 3 */
    LLD2.copyRev(LLD1);
    LLD2.print();
    /* Pt. 4 */
    LLD1.pop_3rd();
    LLD2.pop_3rd();
    LLD1.print();
    LLD2.print();
    /* Pt. 5 */
    LLD1.pushMid(70.7);
    LLD2.pushMid(70.7);
    LLD1.print();
    LLD2.print();
    return 0;
}