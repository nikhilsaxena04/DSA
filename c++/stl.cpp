#include<bits/stdc++.h>
using namespace std;


/*pairs
When to Use pair?
Returning multiple values from a function.
Storing key-value pairs in data structures like maps.
Handling competitive programming problems involving coordinate pairs, edges in graphs, etc.
*/
int explainPair(){

  pair<int, string> p1 = {1, "abc"};
  cout << p1.first << " " << p1.second << endl;

  pair<int, pair<int, int>> p2 = {1, {4, 5}};
  cout << p2.first << " " << p2.second.second << " " << p2.second.first << endl;

  pair<int, int> arr[] = {{1, 2}, {2, 3}, {4, 5}};
  cout << arr[1].first << " " << arr[1].second << endl;

  //p1.swap(p2);

  return 0;
}


void explainVector(){

  vector<int> v1;
  v1.push_back(1); //add elements in prebuilt container, temp files are used
  v1.emplace_back(2); //faster, use to initalize the container

  vector<pair<int, int>> v2;
  v2.push_back({1, 2});
  v2.emplace_back(3, 4);

  vector<int> v3(5, 20); //5 elements of 20
  vector<int> v4(5); //5 elements of 0
  vector<int> v5(v1); //copy elements- v1 to v5



  vector<int> u;
  u.assign({15, 25, 35, 45, 55});
  vector<int> ::iterator iteratorName = u.begin(); //points at memory address of first element

  iteratorName++; //points at memory address of second element
  cout << *iteratorName << endl;
  
  iteratorName += 2; //points at memory address of third element
  cout << *iteratorName << endl;

  vector<int> :: iterator it = u.end(); //points at memory address of (last element + 1), u.back points at last element
  // auto it === vector<int> :: iterator it...
  for (auto it : u){
    cout << it << " ";
  }

  
  // erase
      // {15, 25, 35, 45, 55}
      u.erase(u.begin() + 2); 
      //erase 3rd element, {15, 25, 45, 55}

      // {15, 25, 35, 45, 55}
      u.erase(u.begin() + 1, u.begin() + 4); 
      //erase 2nd to 4th element, {15, 55}
      //.erase(start, end) - end is exclusive

      

  // insert
      vector<int>x(2, 100): // {100, 100}
      x.insert(x.begin(), 2, 200); // {200, 200, 100, 100}

      vector<int>copy(2, 100); // {250, 250}
      x.insert(x.begin()+1, copy.begin(), copy.end()); // {200, 250, 250, 200, 100, 100}
          //insert(pos, first, last) inserts elements from range [first, last) before pos.

      
      z.assign({70, 80});
      cout << z.size(); // size of vector = 2

      z.pop_back(); // removes last element, {70}

   // v1.swap(v2); // swaps elements of v1 and v2 vectors

       z.clear(); // clears all elements, size = 0

       cout << z.empty(); // returns true if vector is empty, false otherwise
}


void explainList(){
  list<int>ls;
  ls.push_back(1); //{1}
  ls.emplace_back(2); //{1, 2}

  ls.push_front(3); //{3, 1, 2}
  ls.emplace_front(4); //{4, 3, 1, 2}
  //list is doubly linked list so operations are faster than vector, insertions and deletions are O(1) at both ends
  //vector is array based so operations are O(n) at both ends, very expensive

  //rest func are same as vector,
}

void explainDeque(){

  deque<int>dq:
  dq.push_back(1); //{1}
  dq.emplace_back(2); //{1, 2}

  dq.push_front(3); //{3, 1, 2}
  dq.emplace_front(4); //{4, 3, 1, 2}
  //deque is double ended queue, it is like a list but it is not a linked list, it is a dynamic array, so it has O(1) time complexity for insertions and deletions at both ends, but O(n) for insertions and deletions in the middle.
  //it is faster than vector for insertions and deletions at both ends, but slower than vector for random access 


  dq.pop_back(); //{4, 3, 1}
  dq.pop_front(); //{3, 1}

  dq.back(); //returns last element, 1
  dq.front(); //returns first element, 3

  //rest func are same as  vector, like insert, erase, clear, size, empty, swap, begin, end, rbegin, rend, at, []
}


void explainStack(){
  stack<int>st;
  st.push(1); //{1}
  st.push(2); //{2, 1}
  st.push(3); //{3, 2, 1}
  st.emplace(5); //{5, 3, 2, 1}
  //stack is LIFO, last in first out, so the last element added is the first element to be removed
  
  cout << st.top(); //returns top element, 5
  st.pop(); //removes top element, {3, 2, 1}
  cout << st.size(); //returns size of stack, 3
  cout << st.empty(); //returns true if stack is empty, false otherwise,

  stack<int>st1, st2;
  st1.swap(st2); //swaps elements of st1 and st2 stacks
  //everything happens in constant time, no extra space is used, so it is very efficient
}


void explainQueue(){
  queue<int> q;
  q.push(1); //{1}
  q.push(2); //{1, 2}
  q.emplace(7); //{1, 2, 7}
  //queue is FIFO, first in first out, so the first element added is the first element to be removed

  q.back() += 5 //adds 5 to last element, {1, 2, 12}
  q.front() += 10 //adds 10 to first element, {11, 2, 12}
  cout << q.front(); //returns first element, 11
  cout << q.back(); //returns last element, 12

  q.pop(); //removes first element, {2, 12}
  q.front(); //returns first element, 2

  //size swap same as stack, queue/stack is not a container, it is an adapter,
  //A container is a data structure that stores elements directly. Examples include: vector/list/deque/set/map
}

void explainPQ(){
  //left=top
  //max heap
  //priority queue is a max heap, so the largest element is always at the top //tree
  priority_queue<int>pq;

  pq.push(5); //{5}
  pq.push(4); //{5, 4}
  pq.push(7); //{7, 5, 4}
  pq.emplace(6); //{7, 6, 5, 4}

  cout << pq.top(); //returns top element, 7
  pq.pop(); //removes top element, {6, 5, 4}
  cout << pq.size(); //returns size of priority queue, 3
  //size swap empty functions same as others



  //minminum heap
  priority_queue<int, vector<int>, greater<int>>pq1; 
  pq1.push(5); //{5}
  pq1.push(4); //{4, 5}
  pq1.push(7); //{4, 5, 7}

  cout << pq1.top(); //returns top element, 4
}

void explainSet(){
  set<int>st;
  st.insert(1); //{1}
  st.emplace(2); //{1, 2}
  st.insert(4); //{1, 2, 4}
  st.insert(3); //{1, 2, 3, 4}
  st.insert(4); //{1, 2, 3, 4} //no duplicates allowed
  //unique and sorted, begin end size empty swap func same as vectors
  //hash table is used to store elements, so it is very fast for insertions and deletions, O(log n) time complexity for all operations

  //{1, 2, 3, 4}
  auto it = st.find(3); //returns iterator to 3, if not found returns end iterator
  auto it1 = st.find(5); //not found, returns end iterator(4)

  st.erase(it); //removes 3, {1, 2, 4}
  st.erase(it1); //does nothing, {1, 2, 4}

  int cnt = st.count(2); //returns 1 if 2 is present, 0 if not, {1, 2, 4}

  auto it2 = st.find(1); //
  auto it3 = st.find(2); //{1, 2, 4}
  st.erase(it2, it3);
  //erase(first, last) removes all elements in the range [first, last), first is inclusive and last is exclusive
  //{2, 4}

  //syntax
  auto it = st.lower_bound(2);
  auto it = st.Upper_bound(8);
}


void explainMultiSet(){
  // everything is same as set, but it allows duplicates
  multiset<int>ms;
  ms.insert(1); //{1}
  ms.insert(1); //{1, 1}
  ms.insert(1); //{1, 1, 1}

  ms.erase(1); //removes all 1s, {}
  ms.erase(find(1)); //removes one 1, {1, 1}

  //{1, 1, 1, 1}
  ms.erase(find(1), find(2)); // {1, 1, 1}
  //erase(first, last) removes all elements in the range [first, last), first is inclusive and last is exclusive
  int cnt = ms.count(1); //returns 3
}


void explainUSet(){
  unordered_set<int>us;
  //unsorted, upper bound and lower bound not allowed, no duplicates allowed
  //it is a hash table, so it is very fast for insertions and deletions, O(1) time complexity for all operations
}


void explainMap(){
  //key sorted as set data stru, no duplicates
  map<int, int>mp;
  map<int, pair<int, int>>mp1; //key, value pair
  map<pair<int, int>, int>mp2;

  mp[1] = 2; //{1, 2}
  mp.emplace({3, 7}); //{1, 2}, {3, 7}
  mp.insert({2, 4}); //{1, 2}, {2, 4}, {3, 7}

  mp2[{2, 3}]=10; //{2, 3} = 10

  for(auto it: mp){
    cout << it.first << " " << it.second << endl; 
    //{1, 2}, 
    //{2, 4}, 
    //{3, 7}
  }

  cout << mp[2]; //returns 4, if not found returns 0

  auto it = mp.find(2);
  cout << *it.second; //returns 4

  auto it = mp.lower_bound(2);
  auto it = mp.upper_bound(3);
  //erase swap same
}

void explainMultiMap(){
  //everything is same as map, but it allows duplicates
  //only mp[key] cannot be used here
}


void explainUnorderedMap(){
  //same as set and unoredered set
}


void explainExtra(){
  sort(a, a+n); //sorts the array in ascending order
  sort(v.begin(), v.end()); //sorts the vector in ascending order
  sort(a, a+n, greater<int>); //sorts the array in descending order


  pair<int, int>arr[] = {{1, 2}, {2, 1}, {4, 1}};
  /*sort it acc to second element
  if second is same then sort it acc to first element but in decreasing*/

  sort(a, a+n, comp);
  //{4, 1}, {2, 1}, {1, 2}
  bool comp(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    //for false, swap p1 and p2

    //if both are same then sort it acc to first element but in decreasing order
    if(p1.first < p2.first) return true;
    return false; 
  }


  int num=6; //110
  int cnt = _builtin_popcount(num); //returns 2, number of set bits in num
  //_builtin_popcountll(num); //for long long int



  //print all permutations of a string
  string s = "123";
  sort(s.begin(), s.end()); //sort the string in ascending order
    //3!=6 combinations stored like in dictionary,1-2-3, 1-3-2, 2-1-3, 2-3-1, 3-1-2, 3-2-1

  do {
    cout << s << endl;
  } while(next_permutation(s.begin(), s.end()));

  int max= *max_element(a, a+n); //returns max element in array
  int min= *min_element(a, a+n); //returns min element in array
}

int main(){
    explainVector();
    return 0;
}