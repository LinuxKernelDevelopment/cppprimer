
#ifndef STRVEC_H
#define STRVEC_H

#include <string>
#include <memory>  // allocator, uninitialized_copy
#include <initializer_list>

template<typename type>
class Vec {
public:
  typedef size_t size_type;
  Vec<type>() : first_elem(nullptr), first_free(nullptr), cap(nullptr) { }
  Vec<type>(std::initializer_list<type>);

  Vec<type>(const Vec &);
  ~Vec<type>();
  Vec<type> &operator=(const Vec &);

  void push_back(const type &s);
  void pop_back();

  void reserve(size_type);
  void resize(size_type, const type & = type());
  // default value for parameter put in declaration

  bool empty() const { return cbegin() == cend(); }
  size_type size() const { return first_free - first_elem; }
  size_type capacity() const { return cap - first_elem; }

  type *begin() { return first_elem; }
  type *end() { return first_free; }
  const type *begin() const { return first_elem; }
  const type *end() const { return first_free; }
  const type *cbegin() const { return begin(); }
  const type *cend() const { return end(); }

private:
  static std::allocator<type> alloc;

  type *first_elem;
  type *first_free;
  type *cap;

  void chk_n_alloc() { if (size() == capacity()) reallocate(); }
  std::pair<type *, type *>
  alloc_n_copy(const type *, const type *);
  void reallocate();
  void free();
};

template<typename type>
std::allocator<type> Vec<type>::alloc;

template<typename type>
Vec<type>::Vec(std::initializer_list<type> il) : Vec<type>() {
  for (const auto &s : il)
    push_back(s);
}

template<typename type>
std::pair<type *, type *>
Vec<type>::alloc_n_copy(const type *b, const type *e) {
  auto b2 = alloc.allocate(e - b);
  return {b2, std::uninitialized_copy(b, e, b2)};
}

template<typename type>
void Vec<type>::reallocate() {
  auto new_cap_sz = size() ? 2 * size() : 1;
  auto new_first_elem = alloc.allocate(new_cap_sz);
  auto new_first_free = new_first_elem;
  auto old_first_elem = first_elem;
  for (size_type i = 0; i != size(); ++i)
    alloc.construct(new_first_free++, std::move(*old_first_elem++));
  free();
  first_elem = new_first_elem;
  first_free = new_first_free;
  cap = first_elem + new_cap_sz;
}

template<typename type>
void Vec<type>::free() {
  if (first_elem) {
    for (auto p = first_free; p != first_elem; alloc.destroy(--p)) { }
    alloc.deallocate(first_elem, cap - first_elem);
    //first_elem = first_free = cap = nullptr;
  }
}

template<typename type>
Vec<type>::Vec(const Vec<type> &rhs) {
  auto data = alloc_n_copy(rhs.begin(), rhs.end());
  first_elem = data.first;
  first_free = cap = data.second;
}

template<typename type>
Vec<type>::~Vec() {
  free();
}

template<typename type>
Vec<type> &Vec<type>::operator=(const Vec<type> &rhs) {
  auto data = alloc_n_copy(rhs.begin(), rhs.end());
  free();
  first_elem = data.first;
  first_free = cap = data.second;
  return *this;
}


template<typename type>
void Vec<type>::push_back(const type &s) {
  chk_n_alloc();
  alloc.construct(first_free++, s);
}

template<typename type>
void Vec<type>::pop_back() {
  if (size() > 0)
    alloc.destroy(--first_free);
}

template<typename type>
void Vec<type>::reserve(size_type n) {
  if (n > capacity()) {
    auto new_first_elem = alloc.allocate(n);
    auto new_first_free = new_first_elem;
    auto old_first_elem = first_elem;
    for (size_type i = 0; i != size(); ++i)
      alloc.construct(new_first_free++, std::move(*old_first_elem++));
    free();
    first_elem = new_first_elem;
    first_free = new_first_free;
    cap = first_elem + n;
  }
}

template<typename type>
void Vec<type>::resize(size_type n, const type &s) {
  if (n > size()) {
    for (int i = n - size(); i != 0; --i)
      push_back(s);
  } else if (n < size()) {
    for (int i = size() - n; i != 0; --i)
      pop_back();
  }
}
#endif
