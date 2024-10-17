#include "rclcpp/rclcpp.hpp"
#include "ublox_provider.hpp" // Include the header for your Ublox provider

int main(int argc, char **argv)
{
    // Initialize the ROS 2 C++ library
    rclcpp::init(argc, argv);

    // Create the node with options
    rclcpp::NodeOptions options;
    auto ublox_node = std::make_shared<UbloxReceiver>(options); // Instantiate your Ublox node

    // Spin the node to process callbacks
    rclcpp::spin(ublox_node);

    // Shutdown the ROS 2 C++ library
    rclcpp::shutdown();
    return 0;
}

// #include "cpm_provider.hpp"
// #include "ublox_provider.hpp" // Make sure this is included
// #include <rclcpp/rclcpp.hpp>

// class ProvidersLauncher : public rclcpp::Node {
// public:
//     ProvidersLauncher() : Node("providers_launcher") {
//         // Create the CPMReceiver instance
//         cpmReceiver_ = std::make_shared<CPMReceiver>(this->get_node_options());

//         // Create the UbloxReceiver instance
//         ubloxReceiver_ = std::make_shared<UbloxReceiver>(this->get_node_options());
//     }

// private:
//     std::shared_ptr<CPMReceiver> cpmReceiver_;
//     std::shared_ptr<UbloxReceiver> ubloxReceiver_;
// };

// int main(int argc, char **argv) {
//     rclcpp::init(argc, argv);

//     auto node = std::make_shared<ProvidersLauncher>();

//     rclcpp::spin(node);
//     rclcpp::shutdown();

//     return 0;
// }
