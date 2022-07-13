#include <iostream>
#include <vector>
#include <benchmark/benchmark.h>
#include "point/Point.h"


void BM_call(benchmark::State& state) {
    
    for (auto _ : state) {
        Point p1{1, 2};
        Point p2{3, 4};
        Point& p3 = p1.Add(p2);

        std::cout << "Hello World\n";
        std::cout << p3.x << " " << p3.y << "\n";
    }
    
}

BENCHMARK(BM_call);

int main(int argc, char** argv) {
  benchmark::Initialize(&argc, argv);
  benchmark::RunSpecifiedBenchmarks();
  benchmark::Shutdown();
  return 0;
}

