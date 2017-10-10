
typedef struct node node;
struct node {
  int value;
  node* prev;
  node* next;
};

void list_insert_after( node* element, node* NodeToAdd,int nodevalue);
void list_insert_before( node* element, node* NodeToAdd,int nodevalue);
void printNode (node * const nodetoprint);
struct node* CreateNode (int nodevalue);
void DestroyNode(node* target);
struct node * list_get_first (node* const element);
struct node * list_get_end (node*  const element);
int CountNode (node* const element);
void list_remove(node *element);
void list_print (node* const element);
void list_free (node *element);
struct node* list_get_node (int const index,node * element);
