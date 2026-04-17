struct Node {
    int data;
    struct Node* next;
};
int new_node();
int size_of_list(struct Node* head);
int get_data(struct Node* head,int index);
int add_node(struct Node** head, int data,int index);
int delete_node(struct Node** head,int index);