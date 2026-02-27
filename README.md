# circularqueue_clone
# Generic Circular Queue in C++ (Template-Based, Dynamic & Efficient)

##Circular Queue

A Circular Queue is a linear data structure that follows the FIFO principle by logically connecting the last position back to the first, forming a continuous circle. It uses modulo arithmetic to wrap pointers around the array, effectively reclaiming empty spaces left by deleted elements. This design eliminates the "false overflow" issue of linear queues, ensuring maximum memory efficiency for buffering data streams.

## Overview
This repository implements a **generic circular queue** in **modern C++** using templates.  
The implementation follows **professional C++ design principles** including:

- Dynamic memory management
- Circular indexing
- Rule of Five (copy & move semantics)
- Amortized time complexity
- Exception-safe access

This project is suitable for:
- Data Structures & Algorithms learning
- College assignments and viva
- Interview preparation
- Understanding STL-like container design

---

## Features

- Template-based (works with any data type)
- Circular queue implementation
- Dynamic resizing (capacity doubles automatically)
- Efficient circular indexing
- Rule of Five implemented
- Copy & move semantics
- Amortized O(1) operations
- Exception handling
- STL-style design

---

## Class Design

```cpp
template<typename T>
class cqueue;
