#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"


class RTABMapOdomLiteNode : public rclcpp::Node
{
    public:
     RTABMapOdomLiteNode();
    
    private:
        void timer_callback();    
        rclcpp::TimerBase::SharedPtr timer_;
        rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
        size_t count_;
};