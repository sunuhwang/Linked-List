#linked List
It is Linked List.
Let’s cut to the chase.
#how to use
node.h is just interface.
body is node.c.
but, what you include is node.h.
#what function in node.h
**new_node**
it made new linked list.
**size_of_node**
it measure and return the linked list's size.
**get_data**
it return data of node.
**add_node**
it add node in the list.
**delete_node**
it remove node.you don't call free() function because this function also free that node.
#warning
size_of_list and get_data need just pointer,
but add(delete)_node need double pointer.
#how to compile
**compile to .so(dynamic libaray)**
**compile**
```bash
gcc -fPIC -c node.c -o node.o
```
**make .so**
```bash
gcc -shared -o libnode.so node.o
```
**Linking**
```bash
gcc main.c -L. -lnode -o main
```
**compile to .a(static library)**
**compile**
```bash
gcc -c node.c -o node.o
```
**make to .a**
```bash
ar rcs libnode.a node.o
```
**Linking**
```bash
gcc main.c -L. -lnode -o main
```
