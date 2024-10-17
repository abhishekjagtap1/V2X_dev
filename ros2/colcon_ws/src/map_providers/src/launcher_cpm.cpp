#include "cpm_provider.hpp"
#include <rclcpp/rclcpp.hpp>
#include "ublox_provider.hpp"

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    
    auto node_options = rclcpp::NodeOptions();
    auto node = std::make_shared<CPMReceiver>(node_options);
    //auto node = std::make_shared<UbloxReceiver>(node_options);


    rclcpp::spin(node);
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
