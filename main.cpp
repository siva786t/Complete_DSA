#include <iostream>
//#include <vector>

#include "DoublyLinkedList.h"
#include "functions.h"

int main() {
    DoublyLinkedList *DList = new DoublyLinkedList();
    int userInput;
    cout<<"Generate linked list using \n1.Order \t \t2.Random\n";
    cin>>userInput;
    if(userInput == 1){
        for(int i=0;i<10;i++){
            DList->add(i+1);
        }
    }
    else if(userInput == 2){
        for(int i=0;i<10;i++){
            DList->add(rand()%10+1);
        }
    }
    else{
        cout<<"Wrong input Run the program again\n";
    }
    while (1){
        commandPage();
        cin>>userInput;
        switch(userInput){
            case 0: callGetLengthFuntion(DList);
                break;
            case 1: callAddFuntion(DList);
                break;
            case 2: callAddAtBeginFuntion(DList);
                break;
            case 3: callRemoveByValueFuntion(DList);
                break;
            case 4: callRemoveFromPostionFuntion(DList);
                break;
            case 5: DList->print();
                break;
            case 6: DList->printReverse();
                break;
            case 7: callSearchFuntion(DList);
                break;
            case 8:callAddMidElementFuntion(DList);
                break;
            case 9: callSwapFuntion(DList);
                break;
            case 10: callSwapPostionFuntion(DList);
                break;
            case 11: DList->getHead();
                break;
            case 12: DList->getTail();
                break;
            case 13: DList->sort();
                break;
            case 14: cout<<"Thanks for using\n";
            break;
            default: cout<<"Try again other options\n";
                break;
        }
        if(userInput == 14) break;


    }

    DList->print();
    DList->printReverse();
    return 0;
}

