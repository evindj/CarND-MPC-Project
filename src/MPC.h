#ifndef MPC_H
#define MPC_H

#include <vector>
#include "Eigen/Dense"

using namespace std;

class MPC {
 private:
  double cost;
 public:
  vector<double> mpc_points_x;
  vector<double> mpc_points_y;
  MPC();

  virtual ~MPC();

  // Solve the model given an initial state and polynomial coefficients.
  // Return the first actuatotions.
  vector<double> Solve(Eigen::VectorXd state, Eigen::VectorXd coeffs);

};

#endif /* MPC_H */
