//
// Created by Sivasubramani on 15/01/23.
//
#include "functions.h"

void commandPage() {
    cout<<"Commands for Below Operations\n";
    cout<<"0. Length of the List\n";
    cout<<"1. Add the Elements at End\t\t";
    cout<<"2. Add the Element at Begin\n";
    cout<<"3. Remove the Element by Value\t\t";
    cout<<"4. Remove the Element by Position\t\t";
    cout<<"5. Print the List in Order\n";
    cout<<"6. Print the List in Reverse Order\t\t";
    cout<<"7. Search the Element from List\n";
    cout<<"8. Add the Mid Element from List\t\t";
    cout<<"9. Swap the Element by value \n";
    cout<<"10. Swap the Element by postion \t\t";
    cout<<"11. Get the Head\n";
    cout<<"12. Get the Tail\t\t";
    cout<<"13. Sort the List\n";
    cout<<"14. Exit the process\n";
}

void callGetLengthFuntion(DoublyLinkedList *Dlist){
    if(Dlist == nullptr){
        cout<<"List not generated\n";
        return;
    }
    cout<<"Length of List is "<<Dlist->getLength()<<"\n";
}
void callAddFuntion(DoublyLinkedList *Dlist){
    if(Dlist != nullptr){
        cout<<"Enter the value to add at end\n";
        int userInput;
        cin>>userInput;
        Dlist->add(userInput);
        Dlist->print();
        Dlist->printReverse();
        return;
    }
    cout<<"List not generated\n";
}

void callAddAtBeginFuntion(DoublyLinkedList *Dlist){
    if(Dlist != nullptr){
        cout<<"Enter the value to add at Begin\n";
        int userInput;
        cin>>userInput;
        Dlist->addAtBegin(userInput);
        Dlist->print();
        Dlist->printReverse();
        return;
    }
    cout<<"List not generated\n";
}

void callRemoveByValueFuntion(DoublyLinkedList *Dlist){
    if(Dlist != nullptr){
        cout<<"Enter the value to Remove from List\n";
        int userInput;
        cin>>userInput;
        if(Dlist->removeByValue(userInput)) cout << "Successfully deleted " << userInput << endl;
        else cout<<" Delete fail "<<userInput<<endl;
        Dlist->print();
        Dlist->printReverse();
        return;
    }
    cout<<"List not generated\n";
}
void callRemoveFromPostionFuntion(DoublyLinkedList *Dlist){
    if(Dlist != nullptr){
        cout<<"Enter the Position to Remove from List\n";
        int userInput;
        cin>>userInput;
        if(Dlist->removeFromPostion(userInput)) cout << "Successfully deleted  at pos " << userInput << endl;
        else cout<<" Delete fail "<<userInput<<endl;
        Dlist->print();
        Dlist->printReverse();
        return;
    }
    cout<<"List not generated\n";
}

void callSearchFuntion(DoublyLinkedList *Dlist){
    if(Dlist != nullptr){
        cout<<"Enter the Element to Search from List\n";
        int userInput;
        cin>>userInput;
        Dlist->searchElement(userInput);
        Dlist->print();
        Dlist->printReverse();
        return;
    }
    cout<<"List not generated\n";
}
void callAddMidElementFuntion(DoublyLinkedList *Dlist){
    if(Dlist != nullptr){
        cout<<"Enter the Element to Add mid in List\n";
        int userInput;
        cin>>userInput;
        Dlist->addAtMiddle(userInput);
        Dlist->print();
        Dlist->printReverse();
        return;
    }
    cout<<"List not generated\n";
}
void callSwapFuntion(DoublyLinkedList *Dlist){
    if(Dlist != nullptr){
        cout<<"Enter the Element to Swap from List\n";
        int userInput1, userInput2;
        cin>>userInput1;
        cin>>userInput2;
        Dlist->swapElements(userInput1,userInput2);
        Dlist->print();
        Dlist->printReverse();
        return;
    }
    cout<<"List not generated\n";
}
void callSwapPostionFuntion(DoublyLinkedList *Dlist){
    if(Dlist != nullptr){
        if(Dlist != nullptr){
            cout<<"Enter the Element to Swap from List by position\n";
            int userInput1, userInput2;
            cin>>userInput1;
            cin>>userInput2;
            Dlist->swapElementsByPostion(userInput1,userInput2);
            Dlist->print();
            Dlist->printReverse();
            return;
        }
        cout<<"List not generated\n";
        return;
    }
    cout<<"List not generated\n";
}