#include <iostream>
#include <vector>
#include <cassert>

// void print_vector(const std::vector<int>& v) {
//   std::cout << " [ ";
//   for (const auto& elem : v) {
//     std::cout << elem << " ";
//   }
//   std::cout << "]" << std::endl;
// }

// void print_matrix(const std::vector<std::vector<int>>& A) {
//   std::cout << "[" << std::endl;
//   for (const auto& row : A) {
//     for (const auto& elem : row) {
//       std::cout << elem << " ";
//     }
//     std::cout << std::endl;
//   }
//   std::cout << "]" << std::endl;
// }




// void print_vector(const std::vector<double>& v) {
//   std::cout << " [ ";
//   for (const auto& elem : v) {
//     std::cout << elem << " ";
//   }
//   std::cout << "]" << std::endl;
// }

// void print_matrix(const std::vector<std::vector<double>>& A) {
//   std::cout << "[" << std::endl;
//   for (const auto& row : A) {
//     for (const auto& elem : row) {
//       std::cout << elem << " ";
//     }
//     std::cout << std::endl;
//   }
//   std::cout << "]" << std::endl;
// }

template  <typename T>
void print_vector(const std::vector<T>& v) {
  std::cout << " [ ";
  for (const auto& elem : v) {
    std::cout << elem << " ";
  }
  std::cout << "]" << std::endl;
}


template  <typename T>
void print_matrix(const std::vector<std::vector<T>>& A) {
  std::cout << "[" << std::endl;
  for (const auto& row : A) {
    for (const auto& elem : row) {
      std::cout << elem << " ";
    }
    std::cout << std::endl;
  }
  std::cout << "]" << std::endl;
}


template <typename T>
std::vector<T> operator* (std::vector<std::vector<T>> M, std::vector<T> v){
  assert (v.size() == M[0].size()); // make sure matrix multiplication is possible in terms of size
  int N = v.size();
  std::vector<T> m;

  for (auto i = 0u; i < N; ++i)
  {
    T sum = static_cast<T>(0);
  for (auto j = 0u; j < N; ++j) 
    {
      sum += M[i][j] * v[j];
    }
    m.push_back(sum);
  }

  return m;

}



int main() {

  // Get the vector elements from the user
  std::vector<float> v{};
  std::cout << "Give elements to the vector v\n";
  float x;
  while (std::cin >> x) {
    v.push_back(x);
  }
  std::cin.clear();
  std::cin.ignore();

  // Print the vector v
  std::cout << "Vector v is:\n";
  print_vector(v);

  // Get a square matrix A
  const auto N = v.size();
  std::cout << "Give the " << N * N << " elements of matrix A (row-first)\n";
  std::vector<std::vector<float>> A(N); // We define just the lines for now
  for (auto i = 0u; i < N; ++i) {     //  0u means 0 of unsigned integer type - to avoid a conversion warning
    for (auto j = 0u; j < N; ++j) {
      float y;
      std::cin >> y;
      A[i].push_back(y);
    }
  }

  // Print the matrix A
  std::cout << "Matrix A is:" << std::endl;
  print_matrix(A);

  // Multiply A * v and store it to a vector m
  // std::vector<float> m(N, 0);
  // for (auto i = 0u; i < N; ++i) {
  //   for (auto j = 0u; j < N; ++j) {
  //     m[i] += A[i][j] * v[j];
  //   }
  // }

  std::vector<float> output;
  output  = A*v;

  // Print the vector m
  std::cout << "Vector m = A * v is:" << std::endl;
  print_vector(output);

  return 0;
}
