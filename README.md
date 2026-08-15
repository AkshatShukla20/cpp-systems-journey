# C++ Systems Journey: Bare-Metal to AI Infrastructure 

> "From learning basic syntax to engineering the performance layers that power modern AI infrastructure."

This repository documents my journey of mastering Modern C++ as a systems tool. The objective is to move past high-level abstractions and understand how software directly interacts with memory layouts, cache hierarchies, hardware registers, operating systems, and parallel processing engines.

Unlike standard tutorial repositories, every component here focuses on **low-level execution, systems optimization, and performance predictability.**

---

## 🎯 Core Engineering Goals

- **Master Modern C++ Foundations:** Write clean, safe, and zero-overhead RAII/move-semantic code.
- **Understand Hardware & Memory Limits:** Bridge the gap between CPU cache lines, SIMD registers, and software execution.
- **Implement Concurrency & Parallelism:** Build thread-safe, low-latency primitives from scratch.
- **De-abstract AI Frameworks:** Write native C++ components that explain exactly how Python-side AI/ML frameworks execute heavy workloads behind the scenes.
- **Prepare for the Hardware Stack:** Build the prerequisite low-level fluency for CUDA, Embedded C (ESP32), and Edge AI.

---

## 🛠️ Repository Roadmap

### 1. Advanced C++ & Hardware-Aware Basics
- [ ] **Resource Management:** RAII, Custom Allocators, Smart Pointer Internals (`std::unique_ptr`, `std::shared_ptr`).
- [ ] **Value Categories:** Move Semantics (`std::move`, rvalue references) to eliminate unnecessary deep copying.
- [ ] **Compile-Time Engineering:** Templates, Metaprogramming, `constexpr`, and Type Traits for zero-cost abstractions.
- [ ] **Data Locality:** Understanding contiguous layout in STL containers (`std::vector`, `std::array`) and why cache misses kill performance.

### 2. Systems Programming & Multi-Threading
- [ ] **Memory Mapping & File I/O:** Custom file parsers using OS-level system calls (`mmap`).
- [ ] **Concurrency Foundations:** `std::thread`, `std::async`, futures/promises, and managing the OS thread lifecycle.
- [ ] **Synchronization Primitives:** Data races, Mutexes, `std::lock_guard`, Condition Variables, and building deadlock-free applications.
- [ ] **Lock-Free Concepts:** Atomic operations (`std::atomic`) and understanding cache coherency.

### 3. High-Performance Parallel Computing (The AI Bridge)
- [ ] **Vectorization (SIMD):** Writing data-parallel execution loops utilizing AVX/NEON instructions.
- [ ] **Multicore Parallelism:** Utilizing OpenMP for looping optimization and building thread pools.
- [ ] **Cache Optimization:** Row-major vs. Column-major matrix transformations, loop unrolling, and cache blocking.

---

## 🚀 Key Projects Pipeline

*As this repository matures, standalone utilities evolve into highly performant infrastructure components:*

### 📂 Phase 1: The Memory & Thread Essentials
- **`custom_allocator/`** – A custom arena allocator designed to completely bypass standard `malloc/free` overhead for frequent memory allocations.
- **`thread_pool/`** – A production-grade task-stealing Thread Pool utilizing synchronized work-queues to manage parallel compute tasks.

### 📂 Phase 2: The High-Performance Computing (HPC) Engine
- **`vectorized_blas/`** – A micro-library for Matrix Multiplication ($C = A \times B$). It progresses from a naive $O(n^3)$ loop to a Cache-Blocked, SIMD-vectorized, and OpenMP-parallelized matrix engine showcasing a $100\times$ speedup.

### 📂 Phase 3: AI Infrastructure Primitives
- **`custom_tensor_runtime/`** – A raw C++ Tensor engine managing contiguous memory blocks, strides, shapes, and broadcasting layouts entirely from scratch—mirroring PyTorch's internal C++ backend (`ATen`).

---

## 📑 Notes & Engineering Logbook

This repository doubles as my personal system-engineering journal. Every implementation includes a deep-dive markdown analysis focusing on:
- 📊 **Profiling & Benchmarking:** Real performance metrics captured via `perf`, Google Benchmark, or Valgrind/Kcachegrind.
- 📐 **Architectural Diagrams:** Clear documentation of memory alignments and data flow pipelines.
- 🔍 **Assembly Transformations:** Observations on how compiler optimization flags (`-O3`, `-march=native`) convert clean C++ code into specialized hardware instructions.

---

## 🗺️ Long-Term Vision
This repository anchors the foundational phase of my long-term AI Systems Engineering Roadmap:
