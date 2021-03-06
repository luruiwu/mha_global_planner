#pragma once

#include <sbpl/headers.h>

namespace mha_global_planner {

class EuclideanDistanceHeuristic : public EmbeddedHeuristic {
 public:
  EuclideanDistanceHeuristic(EnvironmentNAVXYTHETALAT* environment);

  int GetGoalHeuristic(int state_id);
  int GetStartHeuristic(int state_id);
  int GetFromToHeuristic(int from_id, int to_id);

 private:
  EnvironmentNAVXYTHETALAT* environment_;
};
}
