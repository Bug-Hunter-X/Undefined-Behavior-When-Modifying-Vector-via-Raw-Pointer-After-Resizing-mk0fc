std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}
vec.push_back(10);
vec[0] = 100; // Correct way to modify the first element