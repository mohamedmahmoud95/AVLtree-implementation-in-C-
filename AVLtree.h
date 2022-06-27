//
//  AVLtree.h
//  AVLtree.. update June27 with ui
//
//  Created by Mohamed Mahmoud on 27/06/2022.
//


/* AVLtree.h contains the declaration of class template AVLtree.
 BST operations:
 Constructor: Constructs an empty BST
 empty:       Checks if a AVLtree is empty
 search:      Searchs a AVLtree for a given item
 insert:      Inserts a new value into a BST
 remove:      Removes an existing value from a AVLtree
 inorder:     Inorder traversal of a BST -- output the data values
 preorder:    preorder traversal of a BST -- output the data values
 postorder:   postorder traversal of a BST -- output the data values

 graph:       Output a grapical representation of a BST
 Private utility helper operations:
 search2:     Used by delete
 inorderAux:  Used by inorder
 graphAux:    Used by graph
 destructor
 balance
 rotate
 ---------------------------------------------------------------------------*/
#ifndef AVLtree_h
#define AVLtree_h

#include <iomanip>  //used in graphAux()
#include <iostream>
using namespace std;

template <typename DataType>
class AVLtree
{
public:
//public member functions:
     AVLtree();
    /*------------------------------------------------------------------------
     Construct an instance of AVL tree.
     
     Precondition:  None.
     Postcondition: An empty AVL tree has been constructed.
     -----------------------------------------------------------------------*/
    
    AVLtree(DataType value);
   /*------------------------------------------------------------------------
    Construct an instance of AVL tree with a given value as the root value.
    
    Precondition:  None.
    Postcondition: A new AVL tree has been constructed
                   with the root data = the given value.
    -----------------------------------------------------------------------*/
   
    
    
    AVLtree(const AVLtree & original);
    /*--------------------------------------------------------------------------
     Copy constructor
     Precondition: None.
     Postcondition: original AVL tree is copied and returned
     -------------------------------------------------------------------------*/

    
    
    ~AVLtree();
   /*------------------------------------------------------------------------
    Destruct the constructed instance of AVL tree.
    
    Precondition:  None.
    Postcondition: Instance of AVL tree has been constructed.
    Helper function: destructorAux()
    -----------------------------------------------------------------------*/
   
    
    
    bool empty() const ;
    /*--------------------------------------------------------------------------
     Check if AVL tree is empty.
     
     Precondition:  None.
     Postcondition: Returns true if AVL tree is empty and false otherwise.
     -------------------------------------------------------------------------*/
    

    bool search(DataType item);
     /*--------------------------------------------------------------------------
      Check if a given item exists in the AVLtree.
      
      Precondition:  None.
      Postcondition: Returns true if item exists in the AVL tree
                    and false otherwise.
      Helper functions: searchAux()
     -------------------------------------------------------------------------*/
    
    
    
    void insertRec(const DataType & newValue);
    /*--------------------------------------------------------------------------
     Insert a new item into AVLtree.
     uses recursion to insert into the proper position
     
     Precondition:  None.
     Postcondition: item is inserted successfully in the proper position
            (rotation may be applied if needed to maintain AVL tree properties)
     Helper functions: insertAux()
     -------------------------------------------------------------------------*/
   

    
    void insertIterative(const DataType & new_value);
    /*--------------------------------------------------------------------------
     Insert a new item into AVLtree.
     uses a locator pointer to get to the proper position
     
     Precondition:  None.
     Postcondition: item is inserted successfully in the proper position
            (rotation may be applied if needed to maintain AVL tree properties)
     -------------------------------------------------------------------------*/
    
    
    
    void removeRec(const DataType & item);         //recursive deletiion
    /*--------------------------------------------------------------------------
     delete an item from AVLtree.
     
     Precondition:  None.
     Postcondition: item is deleted successfully from the AVL tree
            (rotation may be applied if needed to maintain AVL tree properties)
     Helper functions: removeAux()
     -------------------------------------------------------------------------*/
    
    
    
    void removeIterative(const DataType & item);   //Iterative deletion
    /*--------------------------------------------------------------------------
     delete an item from AVLtree.
     
     Precondition:  None.
     Postcondition: item is deleted successfully from the AVL tree
            (rotation may be applied if needed to maintain AVL tree properties)
     Helper functions: locateNodeToBeDeleted()
             locates the item to be deleted and its parent
     -------------------------------------------------------------------------*/
    
    
    
   
    void inorder(ostream & out) const;
    /*--------------------------------------------------------------------------
     Inorder traversal of BST.
     
     Precondition:  ostream out is open.
     Postcondition: AVL tree been inorder traversed and values in nodes
     have been output to out.
     Helper functions: inorderAux().
     -------------------------------------------------------------------------*/
    
    
    
    void preorder(ostream & out) const;
    /*--------------------------------------------------------------------------
     Preorder traversal of BST.
     
     Precondition:  ostream out is open.
     Postcondition: AVL tree has been Preorder traversed and values in nodes
     have been output to out.
     Helper functions: preorderAux().
     -------------------------------------------------------------------------*/
    
    
    void postorder(ostream & out) const;
    /*--------------------------------------------------------------------------
     Postorder traversal of BST.
     
     Precondition:  ostream out is open.
     Postcondition: AVL tree has been postorder traversed and values in nodes
     have been output to out.
     Helper functions: postorderAux().
     -------------------------------------------------------------------------*/
    
    
    
    void graph(ostream & out) const;
    /*--------------------------------------------------------------------------
     Graphic representation output of AVL tree.
     
     Precondition:  ostream out is open.
     Postcondition: Graphical representation of AVL tree has been output to out.
     Helper functions: graphAux().
     -------------------------------------------------------------------------*/
    
    
    
    DataType max(DataType a, DataType b);
    /*--------------------------------------------------------------------------
     find the maximum between two variable
     used as a helper function for remove()
     
     Precondition:  None.
     Postcondition: return maximum variable between the two givens
     -------------------------------------------------------------------------*/
    
     

     
    
    
    
 
    /*-------------------------------*******----------------------------------*/
    /*-------------------------------*******----------------------------------*/
    /*-------------------------------*******----------------------------------*/
    /*-------------------------------*******----------------------------------*/
    /*-------------------------------*******----------------------------------*/
    /*-------------------------------*******----------------------------------*/
    /*-------------------------------*******----------------------------------*/

    

    
    
    
    
    
private:
    
//----------------------------------
//definition of class Node
    class Node
    {
    public:
        DataType data;      //Node data
        Node* left;         //left child
        Node* right;        //right child
        int height;
        
        //--------------------------
        //Node constructor (with no initial value):
        //both childs are NULL
        Node()
        :left(0), right(0)
        {}
        //--------------------------//

        
        //--------------------------
        //Node constructor (with a given value as Node data):
        //both childs are NULL
        Node(DataType value)
        :data(value), left(0), right(0)
        {}
        //--------------------------//

    };
    
//----------------------------------//
    //private data member/s
    Node* treeRoot;
  
    typedef Node* NodePtr;


    
    
    
    
    
    /*-------------------------------*******----------------------------------*/
    /*-------------------------------*******----------------------------------*/
    /*-------------------------------*******----------------------------------*/
    /*-------------------------------*******----------------------------------*/
    /*-------------------------------*******----------------------------------*/
    /*-------------------------------*******----------------------------------*/
    /*-------------------------------*******----------------------------------*/

    
    
    
    
    
//----------------------------------
//private member functions:
    
//--------------------------------------------------------------//
//-----------------------Helper functions-----------------------//
    
    //--------------------------------//
    // helper function to get
    //the height of the tree
    int height(Node * nodePtr);
    //--------------------------------//

    
    //----------------------------------
    //Destructor Helper function
    void destructorAux(Node* subtreeRoot)
    {
        if (subtreeRoot == NULL)
            return;
     //  destructorAux(subtreeRoot->left);
     //   destructorAux(subtreeRoot->right);
        delete subtreeRoot;
    }
    //--------------------------------//
    
    
   
   
    
    //--------------------------------//
    // Helper function for search()
    bool searchAux(Node* subTreeRoot,  DataType item);
    //--------------------------------//
    
    
    //--------------------------------//
    // Helper function remove()
    int getMaxOfSubTreeHelper(Node* temp)
    {
                if (temp->right == NULL)
                    return temp->data;
                else
                    return getMaxOfSubTreeHelper(temp->right);
    }
    //--------------------------------//

    
    
    //--------------------------------//
    //get Node with minimum value
    Node *nodeWithMimumValue(Node *node) {
      Node *current = node;
      while (current->left != NULL)
        current = current->left;
      return current;
    }
    //--------------------------------//
    
    
    
    //--------------------------------//
    //helper function for remove()
    Node*  removeRecAux(Node* subTreeRoot, DataType itemToBeDeleted)
    {
        if (subTreeRoot == NULL) return subTreeRoot;
        //search for the item to be deleted
        else if (itemToBeDeleted < subTreeRoot->data)
        {
            subTreeRoot->left = removeRecAux(subTreeRoot->left, itemToBeDeleted);
            subTreeRoot = balance(subTreeRoot);
        }
            
        else if (itemToBeDeleted > subTreeRoot->data)
        {
            subTreeRoot->right = removeRecAux(subTreeRoot->right, itemToBeDeleted);
            subTreeRoot = balance(subTreeRoot);
        }
        //case 2 -- 1 child left.
        //here we have found the data to be removed
        else{
            if (subTreeRoot->left == NULL){
                Node* temp = subTreeRoot->right;
                subTreeRoot = balance(subTreeRoot);
                delete subTreeRoot;
                return temp;
            }
            //case 2 -- 1 child right
            else if (subTreeRoot->right == NULL){
                Node* temp = subTreeRoot->left;
                subTreeRoot = balance(subTreeRoot);
                delete subTreeRoot;
                return temp;
            }
            //case 3 -- 2 childern
            else{
                int maxValue = this->getMaxOfSubTreeHelper(subTreeRoot->left);
                subTreeRoot->data = maxValue;
                subTreeRoot->left = removeRecAux(subTreeRoot->left, maxValue);
                subTreeRoot = balance(subTreeRoot);
            }

        }
        
        cout<<endl<<itemToBeDeleted<<" deleted successfully"<<endl;

         return subTreeRoot;
    }
    
    
    
    
    Node* getMaxOfSubTree(Node* subTreeRoot);
    /*-----------------------------
     gets the greatest (right most)
     Helper function for remove()
    -----------------------------*/

    
    
    void locateNodeToBeDeleted(const DataType & item, bool & found,
                 Node*  locatorPtr, Node* parent) const;
    /*------------------------------------------------------------------------
     Locate a node containing a given item and its parent.
     
     Precondition:  None.
     Postcondition: locatorPtr points to node containing item or is null if
     not found, and parent points to its parent.
     ------------------------------------------------------------------------*/

    
    
    void inorderTraverse(ostream & out,
                         Node* subtreePtr) const;
    /*------------------------------------------------------------------------
     Inorder traversal auxiliary function.
     
     Precondition:  ostream out is open; subtreePtr points to a subtree
     of this AVL tree.
     Postcondition: Subtree with root pointed to by subtreePtr has been
     output to out.
     ------------------------------------------------------------------------*/

    
    
    void preorderTraverse(ostream & out,
                    Node* subtreePtr) const;
    /*------------------------------------------------------------------------
     Preorder traversal auxiliary function.
     
     Precondition:  ostream out is open; subtreePtr points to a subtree
     of this AVL tree.
     Postcondition: Subtree with root pointed to by subtreePtr has been
     output to out.
     ------------------------------------------------------------------------*/

    
    
    void postorderTraverse(ostream & out,
                    Node* subtreePtr) const;
    /*------------------------------------------------------------------------
     Postorder traversal auxiliary function.
     
     Precondition:  ostream out is open; subtreePtr points to a subtree
     of this AVL tree.
     Postcondition: Subtree with root pointed to by subtreePtr has been
     output to out.
     ------------------------------------------------------------------------*/

    
    
    void graphAux(ostream & out, int indentation,
                  Node* subtreeRoot) const;
    /*------------------------------------------------------------------------
     Graph auxiliary helper function.
     
     Precondition:  ostream out is open; subtreePtr points to a subtree
     of this AVL tree.
     Postcondition: Graphical representation of subtree with root pointed
     to by subtreePtr has been output to out, indented indent spaces.
     ------------------------------------------------------------------------*/
    
    
    
    
    int CountNodesGreaterThanAux(Node* &subTreeRoot, int count, DataType value) const;
    /*------------------------------------------------------------------------
    auxiliary helper function for CountNodesGreaterThan().
     ------------------------------------------------------------------------*/


    //----------------------------------------
    // Recursive function to insert a new item
    // returns the new root of the subtree.
    Node* insertRecAux(Node* &subTreeRoot, const DataType & newValue )
    {
        
        if (subTreeRoot == NULL)  //if empty
            return (subTreeRoot = (new Node(newValue)));
        
        if ((subTreeRoot -> data) > newValue)
        {
            subTreeRoot->left = insertRecAux(subTreeRoot->left, newValue);
             subTreeRoot = balance(subTreeRoot);
        }
        
        else if ((subTreeRoot -> data) < newValue)
        {
            subTreeRoot->right =  insertRecAux(subTreeRoot->right, newValue);
             subTreeRoot = balance(subTreeRoot);

        }
        else
        {
            cerr<<endl<<newValue<<" is already in the tree"<<endl;
            return subTreeRoot;
        }

        cout<<endl<<newValue<<" inserted successfully"<<endl;
        return subTreeRoot ;
    }
    //--------------------------------//

    
    
    
    
    
    
    
    
    //--------------------------------//
    //calc the difference L & R heights
    int difference(Node* node) {
       int l_height = height(node->left);
       int r_height = height(node->right);
       int b_factor = l_height - r_height;
       return b_factor;
    }
    //--------------------------------//

    
    //--------------------------------//
    //rotations
        Node*  rr_rotat(Node* parent)
        {
            Node* node;
            node = parent->right;
            parent->right = node->left;
            node->left = parent;
            cout<<"Right-Right Rotation";
            return node;
        }
    
    
        Node*  ll_rotat(Node* parent)
        {
            Node* node;
            node = parent->left;
            parent->left = node->right;
            node->right = parent;
            cout<<"Right-Right Rotation";
            return node;
        }
    
    
        Node* lr_rotat(Node* parent)
        {
            Node* node;
            node = parent->left;
            parent->left = rr_rotat(node);
            cout<<"left-right Rotation";
            return ll_rotat(parent);
        }
    
    
        Node* rl_rotat(Node* parent)
        {
            Node* node;
            node = parent->right;
            parent->right = ll_rotat(node);
            cout<<"left-right Rotation";
            return rr_rotat(parent);
        }
    //--------------------------------//

    
    
    //--------------------------------//
    //check balance and
    //performe required rotation if needed
        Node*  balance(Node* node)
        {
            int bal_factor = difference(node);
               if (bal_factor > 1) {
                  if (difference(node->left) > 0)
                     node = ll_rotat(node);
                  else
                     node = lr_rotat(node);
               } else if (bal_factor < -1) {
                  if (difference(node->right) > 0)
                     node = rl_rotat(node);
                  else
                     node = rr_rotat(node);
               }
               return node;
        }
    //--------------------------------//

    
  };//end of class AVLtree









/*-------------------------------*******----------------------------------*/
/*-------------------------------*******----------------------------------*/
/*-------------------------------*******----------------------------------*/
/*-------------------------------*******----------------------------------*/
/*-------------------------------*******----------------------------------*/
/*-------------------------------*******----------------------------------*/
/*-------------------------------*******----------------------------------*/













//function definitions:
//----------------------------------//
//definition of AVLtree constructor
template <typename DataType>
inline AVLtree <DataType> :: AVLtree()
:treeRoot(0)
{}
//----------------------------------//


//----------------------------------//
//definition of AVLtree constructor
//with given value
template <typename DataType>
AVLtree <DataType> :: AVLtree(DataType value)
:treeRoot(value)
{}
//----------------------------------//




//----------------------------------//
//definition of AVLtree destructor
template <typename DataType>
AVLtree<DataType> :: ~AVLtree()
{
    destructorAux(treeRoot);
}
//----------------------------------//




//----------------------------------//
//definition of empty()
template <typename DataType>
bool AVLtree<DataType> :: empty() const
{
    return treeRoot == NULL;
    //tree is empty if root is NULL
}
//----------------------------------//





//----------------------------------//
//definition of search()
template <typename DataType>
bool AVLtree<DataType> :: search(DataType item)
{
    return searchAux(treeRoot, item);
}
//----------------------------------//


//----------------------------------//
//definition of search helper function
template <typename DataType>
bool AVLtree<DataType> :: searchAux(Node* subTreeRoot,  DataType item)
{
    if (subTreeRoot == NULL)   //if empty
        return false;
    else if ((subTreeRoot -> data) > item)
        return searchAux(subTreeRoot->left , item);
        //search the left subtree
    
    else if ((subTreeRoot -> data) < item)
        return searchAux(subTreeRoot->right , item);
    //search the left subtree

    else //if equal/found
        return true;
}
//----------------------------------//




//----------------------------------//
//Definition of remove()
template <typename DataType>
void AVLtree<DataType> :: removeIterative(const DataType & item)
{
    bool found = false;                       // signals if item is found
    NodePtr NodeToBeDeleted = NULL;           // points to node to be deleted
    NodePtr parent = NULL;                    //pointer to parent of node to be deleted
    locateNodeToBeDeleted(item, found, NodeToBeDeleted, parent); //update parameters
    
    if (!found)
    {
        cout << endl<<item<<" does not exist in this tree\n";
        return;
    }
    
    //else (if found)
    //else
    if (NodeToBeDeleted->left != NULL && NodeToBeDeleted->right != NULL)
    {   // node with 2 children
        // Find the right most
        NodePtr successor = NodeToBeDeleted->right;
        parent = NodeToBeDeleted;
        while (successor->left != NULL)       // descend left
        {
            parent = successor;
            successor = successor->left;
        }
        
        // Move contents of xSucc to x and change x
        // to point to successor, which will be removed.
        NodeToBeDeleted->data = successor->data;
        NodeToBeDeleted = successor;
    } // end if node has 2 children
    
    // Now proceed with case where node has 0 or 2 child
    Node*
    subtree = NodeToBeDeleted->left;             // pointer to a subtree of x
    if (subtree == NULL)
        subtree = NodeToBeDeleted->right;
    if (parent == NULL)                  // root being removed
        treeRoot = subtree;
    else if (parent->left == NodeToBeDeleted)       // left child of parent
        parent->left = subtree;
    else                              // right child of parent
        parent->right = subtree;
    delete NodeToBeDeleted;
    subtree = balance(subtree);
}
//----------------------------------//


//----------------------------------//
//definition of locateNodeToBeDeleted()
//helper function of remove()
template <typename DataType>
void AVLtree<DataType> :: locateNodeToBeDeleted(const DataType & item, bool & found, NodePtr  locatorPtr, NodePtr parent) const
{
    locatorPtr = treeRoot;  //traversing pointer to locate the node to be deleted
    parent = NULL;          //pointer to parent of node to be deleted
    found = false;
    while (!found && locatorPtr != 0)
    {
        if (item < locatorPtr->data)       // descend left
        {
            parent = locatorPtr;
            locatorPtr = locatorPtr->left;
        }
        else if (locatorPtr->data < item)  // descend right
        {
            parent = locatorPtr;
            locatorPtr = locatorPtr->right;
        }
        else                           // item found
            found = true;
    }
}


//----------------------------------//



//----------------------------------//
//definition of insert() recursive fn
template <typename DataType>
void AVLtree<DataType> :: insertRec(const DataType & newValue)
{
     insertRecAux(treeRoot, newValue );
}
//----------------------------------//




//----------------------------------//
//definition of insert()
template <typename DataType>
void AVLtree<DataType> :: insertIterative(const DataType & new_value)
{
    //first, assign the new value to a Node pointer
    //for code-readability
    Node* new_node = new Node(new_value);
    
    //if the tree is empty, insert the new_value into treeRoot
    if (empty())
    {
        treeRoot = new_node;
        return;
    }
    
    //if not empty, search for the new_value in the tree
    //as duplicates are not allowed in AVLtree
    //if not found, locate the proper position to insert
    bool found = false;
    Node* locatorPtr = treeRoot;    //start searching from root
    Node* parent = nullptr;         //parent of current node
                                    //initialized by null for safety
    
    while (locatorPtr != NULL)
    {
        parent = locatorPtr;
        if (locatorPtr->data > new_value)
        {
            locatorPtr = locatorPtr->left;
        }
        else if (locatorPtr->data < new_value)
        {
            locatorPtr = locatorPtr->right;
        }
        else //if equal (found)
        {
            found = true;
            break;
        }
    }
    
    if (found)
    {
        cerr<< endl <<new_value <<" is already in the tree!"<<endl;
        return;
    }
    
    else  //insert
    {
        if (parent->data > new_value)
        {
            parent->left  = new_node;  //insert to the left
            treeRoot = balance(treeRoot);
        }
        else
        {
            parent->right = new_node;  //insert to the right
            treeRoot = balance(treeRoot);
        }
    }
    
    //if not found:
    if (treeRoot -> data > new_value)
    {
        if (treeRoot-> left == NULL)
        {
            treeRoot-> left = new Node(new_value);
            treeRoot = balance(treeRoot);

        }
    }
    else if (treeRoot -> data < new_value)
    {
        if (treeRoot-> right == NULL)
        {
            treeRoot-> right = new Node(new_value);
            treeRoot = balance(treeRoot);
        }
    }
}

//----------------------------------//







//--------------------------------------------------------------------//
//----------------------------------//
//definition of remove()
template <typename DataType>
void AVLtree<DataType> :: removeRec(const DataType & item)
{
     removeRecAux(treeRoot, item);
}
//----------------------------------//





//--------------------------------------------------------------------//
//----------------------------------//
//definition of inorder()    //LNR
template <typename DataType>
void AVLtree<DataType> :: inorder(ostream & out) const
{
    return inorderTraverse(out, treeRoot);
}
//----------------------------------//



//----------------------------------//
//definition of inorderTraverse()
//Helper function of inorder()
template <typename DataType>
void AVLtree<DataType>::inorderTraverse(ostream & out,
                                        AVLtree<DataType>::Node* subtreeRoot) const
{
    //LNR
    if (subtreeRoot != 0)
    {
        inorderTraverse(out, subtreeRoot->left);
        out << subtreeRoot->data << "  ";
        inorderTraverse(out, subtreeRoot->right);
    }
}
//----------------------------------//
//--------------------------------------------------------------------//


//--------------------------------------------------------------------//
//----------------------------------//
//definition of postorder()    //RNL
template <typename DataType>
void AVLtree<DataType> :: postorder(ostream & out) const
{
    return postorderTraverse(out, treeRoot);
}
//----------------------------------//


//----------------------------------//
//definition of postorderTraverse()
//Helper function of postorder()
template <typename DataType>
void AVLtree<DataType>::postorderTraverse(ostream & out,
                                          AVLtree<DataType>::Node* subtreeRoot) const
{
    if (subtreeRoot != 0)
    {
        //RNL
        postorderTraverse(out, subtreeRoot->right);
        out << subtreeRoot->data << "  ";
        postorderTraverse(out, subtreeRoot->left);
    }
}
//----------------------------------//
//--------------------------------------------------------------------//



//--------------------------------------------------------------------//
//----------------------------------//
//definition of preorder()    //NLR
template <typename DataType>
void AVLtree<DataType> :: preorder(ostream & out) const
{
    return preorderTraverse(out, treeRoot);
}
//----------------------------------//


//----------------------------------//
//definition of preorderTraverse()
//Helper function of preorder()
template <typename DataType>
void AVLtree<DataType>::preorderTraverse(ostream & out,
                               AVLtree<DataType>::Node* subtreeRoot) const
{
    //NLR
    if (subtreeRoot != 0)
    {
        out << subtreeRoot->data << "  ";
        preorderTraverse(out, subtreeRoot->left);
        preorderTraverse(out, subtreeRoot->right);
    }
}
//----------------------------------//
//--------------------------------------------------------------------//







//--------------------------------------------------------------------//
//----------------------------------//
//definition of graph()
template <typename DataType>
void AVLtree<DataType> :: graph(ostream & out) const{
    out<<endl;
    graphAux(out, 0, treeRoot);
    out<<endl;
}
//----------------------------------//



//----------------------------------//
//definition of graphAux()
//Helper function of graph
//graphically represents the AVLtree
template <typename DataType>
void AVLtree<DataType> :: graphAux(ostream & out , int indentation,
              Node* subtreeRoot) const
{
    if (subtreeRoot != 0)
    {
        graphAux(out , indentation+ 8,  subtreeRoot->right);
        out<<setw(indentation)<< subtreeRoot->data << endl;
        graphAux(out ,indentation + 8,  subtreeRoot->left);
    }
}
//--------------------------------------------------------------------//




template <typename DataType>
int AVLtree<DataType> :: height(Node * node)
{
    int h = 0;
      if (node != NULL) {
         int l_height = height(node->left);
         int r_height = height(node->right);
         int max_height = max(l_height, r_height);
         h = max_height + 1;
      }
      return h;
}
 
// A utility function to get maximum
// of two integers
template <typename DataType>
DataType AVLtree<DataType> :: max(DataType a, DataType b)
{
    return (a > b)? a : b;
}
//-------------


#endif /* AVLtree_h */






