#include <iostream>

// Define the node structure
struct Node 
{
    int data;
    Node* next;
    
    // Constructor to initialize data and next pointer
    Node(int val) : data(val), next(nullptr) {}
};

// Function to find the length of the linked list
int findLength(Node* head) 
{
    int length = 0;
    Node* current = head;
    
    // Iterate through the linked list and fetching node count
    while (current != nullptr) 
    {
        length++;
        current = current->next;
    }    
    return length; //return lenght of list
}

int main() 
{
    // Sample linked list: 1 -> 2 -> 3 -> 4 -> nullptr
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    
    // Call findLength function to find the length of the linked list
    int length = findLength(head);
    std::cout << "Length of the linked list: " << length << std::endl;
    
    // Release memory allocated to the linked list
    Node* temp;
    while (head != nullptr) 
    {
        temp = head;
        head = head->next;
        delete temp;
    }    
    return 0;
}