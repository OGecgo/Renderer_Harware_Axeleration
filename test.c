#include <stdio.h>
#include <stdlib.h>

#include "arrayList.h"
#include "vector.h"


int main(){

    ArrayList* list = arrayList_init(sizeof(Vec2), 10);

    Vec2 v[5] = {vec2_init(5, 2), vec2_init(5, 2), vec2_init(5, 2), vec2_init(5, 2), vec2_init(5, 2)};
    if (!arrayList_push_back(list, v, 2)) return 1;
    if (!arrayList_push_back(list, v + 2, 3)) return 1;
    Vec2* array_v = (Vec2*)arrayList_return_data(list);

    for (int i = 0; i < 5; i++){
        printf("%f %f\n", (*(array_v + i)).x, array_v[i].y);
        printf("%f %f\n", (*(v + i)).x, v[i].y);
        printf("---\n");
    }

    free(array_v);
    arrayList_destroy(list);
    return 0;
}