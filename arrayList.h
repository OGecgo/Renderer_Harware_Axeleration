#pragma once
#include <stdbool.h>


typedef struct {
    void* data;      // array data
    int   count;     // count of elements
    int   capacity;  // allocated capacity
    int   item_size; // bytes a single item
} ArrayList;

// constractor
ArrayList* arrayList_init(int item_size, int capacity);

// destructor
void arrayList_destroy(ArrayList* list);

// void* data     pointer to array of data
// int   count    count of data
// return:
//   1 if data add to arrayList
//   0 if data not add to arrayList - error
bool arrayList_push_back(ArrayList* list, void* data, int count);


// return pointer to new allocated array with data from ArrayList
void* arrayList_return_data(ArrayList* list);

