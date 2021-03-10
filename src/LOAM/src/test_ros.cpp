#include <ros/ros.h>

int main(int argc, char** argv) {
  ros::init(argc, argv, "test_ros");
  std::cout << "test ros!" << std::endl;
  return 0;
}