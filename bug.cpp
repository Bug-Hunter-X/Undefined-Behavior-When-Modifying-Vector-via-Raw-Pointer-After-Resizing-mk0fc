std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}
int* ptr = &vec[0]; 
vec.push_back(10); 
*ptr = 100; // Modifies the first element of the vector