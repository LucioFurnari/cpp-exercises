#include <iostream>
using namespace std;

// Write a short program to simulate a ball being dropped off of a tower. To start, the user should be asked for the height of the tower in meters.
// Assume normal gravity (9.8 m/s2), and that the ball has no initial velocity (the ball is not moving to start).
// Have the program output the height of the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds. The ball should not go underneath the ground (height 0).

double height_of_the_ball(double height, int second) {
  return height - (9.8 * (second*second) / 2);
}

int main() {

  double height = 100;
  double result = height_of_the_ball(height, 2);

  cout << "At 2 seconds, the ball is at height: " << result << " meters" << endl;
  return 0;
}