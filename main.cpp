//
//  main.cpp
//  AVLtree.. update June27 with ui
//
//  Created by Mohamed Mahmoud on 27/06/2022.
//

#include <iostream>
#include "AVLtree.h"
using namespace std;

AVLtree <int> tree;

void takeNewItem()
{
   
}

void menu()
{
    cout<<endl;
    cout<<"Please enter:"<<endl;
    cout<<"1: Insert a new value"     <<endl;
    cout<<"2: Search for an item"     <<endl;
    cout<<"3: Delete an item"         <<endl;
    cout<<"4: Inorder traverse"       <<endl;
    cout<<"5: preorder traverse"      <<endl;
    cout<<"6: postorder traverse"     <<endl;
    cout<<"7: graph representation"   <<endl;
    cout<<"8: exit"                  <<endl;
    
    int userChoice;
    cin>>userChoice;
    
    if ( userChoice == 1)
    {
        cout<<endl<<"please enter the new item: ";
        int newItem;
        cin>>newItem;
        tree.insertRec(newItem);
    }
    
    else if( userChoice == 2)
    {
        cout<<endl<<"please enter the item to search for: ";
        int item;
        cin>>item;
        bool found = tree.search(item);
        if (found)
            cout<<endl<<item<<" is in the tress ^_^"<<endl;
        else
            cout<<endl<<item<<" is not in the tress :("<<endl;
    }
       
    else if( userChoice == 3)
    {
        cout<<endl<<"please enter the item to be deleted: ";
        int item;
        cin>>item;
        tree.removeRec(item);
    }
    
    else if( userChoice == 4)
    {
        cout<<endl;
        tree.inorder(cout);
        cout<<endl;
    }
    
    else if( userChoice == 5)
    {
        cout<<endl;
        tree.preorder(cout);
        cout<<endl;
    }
    
    else if( userChoice == 6)
    {
        cout<<endl;
        tree.postorder(cout);
        cout<<endl;
    }
    
    else if( userChoice == 7)
    {
        cout<<endl;
        tree.graph(cout);
        cout<<endl;
    }
    
    else if( userChoice == 8)
    {
        exit(0);
    }
    
    menu();
}
    
int main(int argc, const char * argv[]) {
    AVLtree <int> tree;
    menu();
//    tree.insertRec(3);
//    tree.insertRec(4);
//    tree.insertRec(5);
//    tree.insertRec(2);
//    tree.insertRec(1);
//    tree.inorder(cout);
//    tree.graph(cout);
//    tree.removeRec(3);
    
    //cout << "Hello, World!\n";
    return 0;
}
