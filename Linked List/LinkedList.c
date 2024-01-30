/* Define the Node Structure */
typedef struct Node {
    void *data; // Pointer to the data
    struct Node *next; // 
} Node;



/* Define the linked list structure */
typedef struct LinkedList {
    Node *head; // Pointer to the first node
    int length; // Keep track of the numbers of nodes
} LinkedList;



/* Linked List Implementation */
LinkedList *linkedListInitize() {
    LinkedList *list = malloc(sizeof(LinkedList));
    if(list) {
        list->head = NULL; // Set the head to 'null'
        list->length = 0;
    }
    return list;
}