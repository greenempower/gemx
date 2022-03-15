/*
 *
 */

#include <stdint.h>

typedef uint64_t id_type;

struct Object {
    id_type id;

    id_type getId() {
        return id;
    }
}
