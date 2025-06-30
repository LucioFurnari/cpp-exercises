#include <iostream>
using namespace std;

// Write a short program to simulate a ball being dropped off of a tower. To start, the user should be asked for the height of the tower in meters.
// Assume normal gravity (9.8 m/s2), and that the ball has no initial velocity (the ball is not moving to start).
// Have the program output the height of the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds. The ball should not go underneath the ground (height 0).

double height_of_the_ball(double height, int second) {
  double heightOfBall = height - (9.8 * (second*second) / 2);

  if (heightOfBall > 0) {
    return heightOfBall;
  } else {
    return 0;
  }
}

void show_height_of_the_ball(int second, double height) {
  if(height > 0)  {
    cout << "At " << second << " seconds, the ball is at height: " << height << " meters" << endl;
  } else {
    cout << "At " << second << " the ball is on the ground." << endl;
  }
}

int main() {

  double height;

  cout << "Enter the height of the tower: ";
  cin >> height;
  for(int i=0; i <= 5; i++) {
    double result = height_of_the_ball(height, i);
    show_height_of_the_ball(i, result);
  }
  return 0;
}