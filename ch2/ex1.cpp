#include <complex>
#include <iostream>

typedef std::complex<double> complex;

// ===== exercise 3 in chapter 2 =====

/// @brief the square of triangle ABC.
double square(complex a, complex b, complex c) {
  double h = (conj(b - a) * (c - a)).imag() / abs(b - a) / abs(c - a);
  return h * abs(b - a);
}

// ===== exercise 4 in chapter 2 =====

/// @brief computes the location of the point of closest approach (in the plane)
/// of segment AC to point B
complex foot(complex a, complex b, complex c) {
  complex ac = c - a, ab = b - a;
  double foo = (ac * conj(ab)).real() / abs(ac);
  return foo * ac / abs(ac) + a;
}

// ===== exercise 5 in chapter 2 =====

/// @brief calculate the first point be rotated by +755 degree about the second
/// point.
complex trans(complex c, complex o) {
  complex r = exp(complex(0, 35. / 180. * M_PI));
  complex oc = c - o;
  return oc * r + o;
}

int main(int argc, char const *argv[]) {
  complex a(3, 7), b(3, 2), c(10, 2);
  std::cout << "A = " << a << ", B = " << b << ", C = " << c << std::endl;

  // ===== exercise 3 =====

  // double s = square(a, b, c);
  // std::cout << s << std::endl;

  // translation
  // complex t(4, 5);
  // complex a1 = a + t, b1 = b + t, c1 = c + t;
  // std::cout << "A' = " << a1 << ", B' = " << b1 << ", C' = " << c1 <<
  // std::endl; double s1 = square(a1, b1, c1); std::cout << s1 << std::endl;

  // rotation
  // complex r = exp(complex(0, -M_PI / 4));
  // complex a2 = a1 * r, b2 = b1 * r, c2 = c1 * r;
  // std::cout << "A'' = " << a2 << ", B'' = " << b2 << ", C'' = " << c2
  //           << std::endl;
  // double s2 = square(a2, b2, c2);
  // std::cout << s2 << std::endl;

  // ===== exercise 4 =====

  // complex f = foot(a, b, c);
  // std::cout << "F = " << f << std::endl;
  // std::cout << "BF = " << abs(b - f) << std::endl;
  // complex f1 = foot(a1, b1, c1);
  // std::cout << "F' = " << f1 << std::endl;
  // std::cout << "B'F' = " << abs(b1 - f1) << std::endl;
  // complex f2 = foot(a2, b2, c2);
  // std::cout << "F'' = " << f2 << std::endl;
  // std::cout << "B''F'' = " << abs(b2 - f2) << std::endl;

  // ===== exercise 5 =====

  complex o(4, 5);
  std::cout << "A rotated 755 degree by O: " << trans(a, o) << std::endl;
  std::cout << "B rotated 755 degree by O: " << trans(b, o) << std::endl;
  std::cout << "A rotated 755 degree by O: " << trans(c, o) << std::endl;

  return 0;
}
