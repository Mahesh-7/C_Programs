#include <stdint.h>
#include <stdio.h>
//Menu state
typedef enum
{
    Menustate1 = 0,
    Menustate2,
    Menustate3,
    Menustate4,
    LastMenustate
} MenuStates;
//Substates
typedef enum
{
    MenuSubState1 = 0,
    MenuSubState2,
    MenuSubState3,
    MenuSubState4,
    MenuSubState5,
    MenuSubState6,
    MenuSubState7,
    MenuSubState8,
    MenuSubState9,
    MenuSubState10,
    LastMenuSubState
} MenuSubStates;
/*Prototype of Function which select transaction and processing
method on the basis of Menustate and substate */
void Transaction(MenuStates State, MenuSubStates SubState);
/*Prototype of Functions which are called from nested switch statement.*/
void SaleCreditTransaction(void);
void SaleDebitTransaction(void);
void SaleCashTransaction(void);
void RefferalCreditTransaction(void);
void VoidTransaction(void);
void RefundTransaction(void);
void SaleReprintReceipt(void);
void VoidReprintReceipt(void);
void RefundReprintReceipt(void);
void RefferalReprintReceipt(void);
void main(void)
{
    MenuStates  eMenuState; //Menu State
    MenuSubStates eMenuSubState; // Sub State
    //Trasaction type is selected by on the basis of menustate and substate
    for (eMenuState = Menustate1; eMenuState < LastMenustate; eMenuState ++)
    {
        for( eMenuSubState = MenuSubState1; eMenuSubState < LastMenuSubState; eMenuSubState++)
        {
            Transaction (eMenuState, eMenuSubState);
        }
    }
}
void Transaction(MenuStates State, MenuSubStates SubState)
{
    switch (State)
    {
    case Menustate1:
        switch (SubState)
        {
        case MenuSubState1:
            SaleCreditTransaction();
            break;
        case MenuSubState2:
            SaleDebitTransaction();
            break;
        case MenuSubState3:
            SaleCashTransaction();
            break;
        case MenuSubState5:
            SaleReprintReceipt();
            break;
        default:
            break;
        }
        break;
    case Menustate2:
        switch (SubState)
        {
        case MenuSubState6:
            RefferalCreditTransaction();
            break;
        case MenuSubState9:
            RefferalReprintReceipt();
            break;
        default:
            break;
        }
        break;
    case Menustate3:
    {
        switch (SubState)
        {
        case MenuSubState4:
            VoidTransaction();
            break;
        case MenuSubState8:
            VoidReprintReceipt();
            break;
        default:
            break;
        }
    }
    break;
    case Menustate4:
    {
        switch (SubState)
        {
        case MenuSubState7:
            RefundTransaction();
            break;
        case MenuSubState10:
            RefundReprintReceipt();
            break;
        default:
            break;
        }
    }
    default:
        break;
    }
}
void SaleCreditTransaction(void)
{
    printf("Sale Credit Transaction\n");
}
void SaleDebitTransaction(void)
{
    printf("Sale Debit Transaction\n");
}
void SaleCashTransaction(void)
{
    printf("Sale Cash Transaction\n");
}
void SaleReprintReceipt(void)
{
    printf("Sale Receipt Reprint\n");
}
void RefferalCreditTransaction(void)
{
    printf("Refferal Credit Transaction\n");
}
void RefferalReprintReceipt(void)
{
    printf("Refferal Receipt Reprint\n");
}
void VoidTransaction(void)
{
    printf("Void Transaction\n");
}
void VoidReprintReceipt(void)
{
    printf("Void Receipt Reprint\n");
}
void RefundTransaction(void)
{
    printf("Refund Transaction\n");
}
void RefundReprintReceipt(void)
{
    printf("Refund Receipt Reprint\n");
}
