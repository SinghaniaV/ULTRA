#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include "../DataStructures/Graph/Utils/IO.h"
#include "../DataStructures/Graph/Graph.h"


int main() {
    // reading the file
    FILE* file = IO::openFile("./DIMACS-Graph/USA-road-d.FLA.gr");

    // TODO: convert the file to a graph
    // TODO: use the function fromDimacs in IO.h to convert to custom binary format

    const int num_pairs = 200; // Number of random source-destination pairs
    double total_runtime = 0.0;

    // TODO: run dijkstra for 200 source-target pairs
    Dijkstra<DimacsGraph> dijkstra();

    // total runtime for the 200 random Dijkstra runs
    std::cout << "Total runtime in seconds for " << num_pairs << " random Dijkstra: " << total_runtime << std::endl;

    return 0;
}

