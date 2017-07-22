namespace p0061r1 {

#if __has_include("notFound.hpp")
#include "notFound.hpp"
#define VALUE 0
#elif __has_include("found.hpp")
#define VALUE 1
#else
#define VALUE 2
#endif

}

int main() {
	static_assert(VALUE == 1, "Value should equal 1");
}