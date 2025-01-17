#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"


class RTABMapLiteNode : public rclcpp::Node
{
    public:
     RTABMapLiteNode();
    
    private:
        void timer_callback();    
        rclcpp::TimerBase::SharedPtr timer_;
        rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
        size_t count_;
        rclcpp::CallbackGroup::SharedPtr dataCallbackGroup_;
};