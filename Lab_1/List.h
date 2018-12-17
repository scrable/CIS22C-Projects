#include <cstddef>

class List
{

private:
    struct Node
    {
        Node* next;
        int data;

        Node(): next(NULL) {} //define our own default constructor
        Node(int data): next(NULL), data(data) {}
    };

    typedef struct Node* Nodeptr;

    unsigned int length;
    Nodeptr head;
    Nodeptr tail;
    Nodeptr cursor; //the iterator


public:
    /**Constructors and Destructors*/

    List();
    //Default constructor; initializes and empty list
    //Postcondition: all values must be initialized

    ~List();
    //Destructor. Frees memory allocated to the list
    //Postcondition: memory previously allocated is free

    List(const List &list);
    //Copy construcor. Initializes list to have the same elements as another list
    //Postcondition: a copy of a list is created

    /**Accessors*/


    int get_head();
    //Returns the first element in the list
    //Precondition: list must not be empty



    int get_tail();
    //Returns the last element in the list
    //Precondition: list must not be empty


    int get_cursor();
    //Returns the element pointed to by the iterator
    //Precondition: list must not be empty


    bool is_empty();
    //Determines whether a list is empty.



    bool off_end();
    //Determines if the iterator is off the end of the list (i.e. whether cursor is NULL)


    int get_length();
    //Returns the length of the list


    /**Manipulation Procedures*/

    void start_cursor();
    //Moves the iterator to point to the first element in the list
    //If the list is empty, the iterator remains NULL
    //Postcondition: cursor either points to NULL or the first element


    void insert_cursor(int data);
    //Inserts a new element into the list in the position after the iterator
    //Precondition: list must not be empty
    //Postcondition: list contains one new item placed after the cursor

    void delete_tail();
    //Removes the value of the last element in the list
    //Precondition: list must not be empty
    //Postcondition: last element is deleted

    void delete_head();
    //Removes the value of the first element in the list
    //Precondition: list must not be empty
    //Postcondition: first element is deleted

    void insert_tail(int data);
    //Inserts a new element at the end of the list
    //If the list is empty, the new element becomes both head and tail
    //Postcondition: the nes element added is last in the list

    void insert_head(int data);
    //Inserts a new element at the front of the list
    //If the list is empty, the new element becomes both head and tail
    //Postcondition:


    void delete_cursor();
    //Removes the element after the element pointed at by the iterator
    //Precondition:
    //Postcondition:

    void move_cursor();
    //Moves the iterator forward by one element in the list
    //Has no effect if the iterator is offend or the list is empty
    //Postcondition:


    /**Additional List Operations*/

    void print();
    //Prints to the console the value of each element in the list sequentially
    //and separated by a blank space
    //Prints nothing if the list is empty


};
