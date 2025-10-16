
#include "./arrayList.h"

#include <stdlib.h>
#include <string.h>

ArrayList* arrayList_init(int item_size, int capacity){
    ArrayList* list = malloc(sizeof(ArrayList));
    list->data = malloc(item_size * capacity);
    list->count = 0;
    list->capacity = capacity;
    list->item_size = item_size;

    return list;
}

void arrayList_destroy(ArrayList* list){
    if (list == NULL) return;
    if (list->data != NULL) free(list->data);
    free(list);
}

bool arrayList_push_back(ArrayList* list, void* data, int count){
    if (list == NULL) return false;

    if (count >= list->capacity - list->count){ 
        void* temp = realloc(list->data, list->item_size * list->capacity * 2);
        free(list->data);
        list->data = temp;
    }
    
    void* p_new_data = list->data + (list->item_size * list->count);
    memcpy(p_new_data, data, (count * list->item_size));
    list->count += count;
    
    return true;
}

void* arrayList_return_data(ArrayList* list){
    void* p = malloc(list->item_size * list->count); 
    memcpy(p, list->data, list->item_size * list->count);
    
    return p;
}