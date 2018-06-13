//
//  HGSimClusters.hpp
//
//  Created by Jeremi Niedziela on 07/06/2018.
//

#ifndef HGSimClusters_hpp
#define HGSimClusters_hpp

#include <TTree.h>

class SimClusters {
public:
  SimClusters(TTree *_tree);
  ~SimClusters();
  
  int N(){return (int)eta->size();}
  
  std::vector<float> *eta;
  std::vector<float> *phi;
  std::vector<float> *energy;
  std::vector<std::vector<unsigned int>> *hits;
  
private:
//  TTree *tree;
  
};

#endif /* HGSimClusters_hpp */