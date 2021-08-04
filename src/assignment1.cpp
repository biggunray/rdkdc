/**
   EN.601.463/663
   Assignment #1 

   Cartesian trajectory generation
   
 */
#include "assignment1.hpp"

// Compute the forward kinematics (position and orientation)
// input: the joints angles
// output: the 4x4 homogeneous transformation
void ForwardKinematics( double q1, double q2, double q3, double E[4][4] ){
  
  // TODO
  // Fill the values of the forward kinematics (homogeneous matrix E)
  
}

// Compute the inverse of the forward kinematics (position and orientation)
// input: the joints angles
// output: the 4x4 homogeneous transformation
void ForwardKinematicsInverse( double q1, double q2, double q3, double E[4][4] ){

  // TODO
  // Fill the values of the inverse of the forward kinematics (homogeneous matrix E)
      
}

// Compute the Adjoint transformation inverse matrix
// input E: the rotation/translation between the base and the hand frame
//          (as computed by the forward kinematics)
// output Ad: the 6x6 adjoint transformation inverse matrix
void AdjointTransformationInverse( double E[4][4], double Ad[6][6] ){

  // TODO
  // Compute the Adjoint Transformation Inverse A^-1
  
}

// Compute and return the Jacobian of the robot given the current joint 
// positions
// input: the joints angles
// output: the 6x3 Jacobian (position only)
void Jacobian( double q1, double q2, double q3, double J[6][3] ){
  
  // TODO
  // Fill the values of the Jacobian matrix J

}

