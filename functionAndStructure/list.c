#include <stdio.h>

#ifndef __cplusplud
  typedef char bool;
  #define true 1
  #define false 0
#endif

struct list_element {
  struct list_element *next;
};

typedef struct list_element list_element;

typedef struct {
  list_element *first;
  list_element *last;
} list;


void list_init(list * container) {
  container->first = 0;
  container->last = 0;
}

bool list_empty(list * container) {
  return 0 == container->first;
}

list_element * list_begin(list *container) {
  return container->first;
}

list_element * list_next(list_element * current) {
  return current->next;
}

void list_push_back(list * container, list_element *element) {
  if (list_empty(container)) {
    container->first = element;
    container->last = element;
  } else {

    container->last->next = element;
    container->last = element;
  }

  $element->next = 0;

}



in main() {
  
  return 0;
}
