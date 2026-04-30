#include "optitrack_multiplexer.h"

int main(int argc, char *argv[]) {
  rclcpp::init(argc, argv);
  try {
    rclcpp::spin(std::make_shared<optitrack_multiplexer::OptitrackMultiplexer>());
  } catch (const std::runtime_error& e) {
    RCLCPP_ERROR(rclcpp::get_logger("multiplexer_node"), "Initialization failed: %s", e.what());
  }
  rclcpp::shutdown();
}
