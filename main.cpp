#include <iostream>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Weffc++"
#pragma GCC diagnostic ignored "-Wnon-virtual-dtor"
#include <chaiscript/chaiscript.hpp>
#pragma GCC diagnostic pop

// C++14
auto f() noexcept 
{
  return "Hello world\n";
}


double g(const double x)
{
  return std::sin(x);
}

int main()
{
  chaiscript::ChaiScript chai;
  chai.add(chaiscript::fun(&g), "g");
  double d = chai.eval<double>("g(0.5);");
  std::cout << d << '\n' << f() << '\n';
}
