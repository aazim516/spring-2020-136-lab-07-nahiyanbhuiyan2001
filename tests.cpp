#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "shapes.h"

TEST_CASE("removeLeadingSpaces"){
  CHECK(removeLeadingSpaces("   int main(){\n   int x =1; \n}") == "int main(){\nint x =1; \n}");
  CHECK(removeLeadingSpaces("   int main(){\n}") == "int main(){\n}");
}

TEST_CASE("inserttab"){
  CHECK(inserttab("   int main(){\n   for(int i = 0; i < length.();i++){\n  int x =1;\n}\n}") == "int main(){\n\tfor(int i = 0; i < length.();i++){\n\t\tint x =1;\n\t}\n}");
  CHECK(inserttab("  int main(){\n  bool after = true;\n  while(after){\n     int x = 1;\n  }\n}") == "int main(){\n\tbool after = true;\n\twhile(after){\n\t\tint x = 1;\n\t}\n}");
}
