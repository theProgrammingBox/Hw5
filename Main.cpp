/*
1.  What is the STL? What is a vector? 
Answer: STL is a C++ library that provides a collection of
functions and classes that can be used to solve problems.
The vector container is a data structure that can be used to
store a collection of elements in a contiguous memory location.

2. Which vector operations change the size of a vector 
after its construction? 
Answer: The vector operations that change the size of a vector
after its construction are: push_back, pop_back, insert, erase,
resize, and clear.

3. What is the STL array container and how does it 
differ from the built-in array and from a vector? 
Answer: The STL array container is a data structure that can be
used to store a collection of elements in a contiguous memory
location. The STL array container differs from the built-in array
and from a vector because it has more features than the built-in
array but is not as flexible as the vector container because it
is not dynamic.

4. How does the vector member function resize() 
differ from reserve()? 
Answer: The vector member function resize() changes the size of
a vector to exactly the size specified by the argument. The vector
member function reserve() changes the size of a vector if it is 
greater than the current size.

5. What should begin() and end() do for a container? 
Answer: begin() returns an iterator to the first element in the
container. end() returns an iterator to the element after the
last element in the container.

6. Give an example of using the vector push_back() 
modifier. 
Answer: 
vector<int> v;
v.push_back(1);
*/

#include "Header.h"

vector<int> Lotto(int numSpots, int numSelected)
{
    vector<int> v;
    for (int i = 1; i <= numSpots; i++)
    {
        v.push_back(i);
    }
    random_shuffle(v.begin(), v.end());
    vector<int> winners;
    for (int i = 0; i < numSelected; i++)
    {
        winners.push_back(v[i]);
    }
    sort(winners.begin(), winners.end());
    return winners;
}

int main() 
{
    srand (time(0));
    vector<int> winners;
    winners = Lotto(51,6);

    for (int i = 0; i < winners.size(); i++)
    {
        cout << "Winner " << i + 1 << ": " << winners[i] << endl;
    }

    return 0;
}