#include<ros/ros.h>

int main(int argc, char** argv)
{
	ros::init(argc, argv, "greetings_server");
	ros::NodeHandle nh;
	int parameter1, parameter2, parameter3, parameter4, parameter5;

	//获取参数
	ros::param::get("param1", parameter1);   //取得param1这个键的值并赋给parameter1
	nh.getParam("param2", parameter2);
	nh.param("param3", parameter3, 123);   //第三个参数表示若没有找到param3的值，就把默认值123赋给parameter3

	//设置参数
	ros::param::set("param4", parameter4);
	nh.setParam("param5", parameter5);

	//检查参数是否存在
	ros::param::has("param5");
	nh.hasParam("param6");

	//删除参数
	ros::param::del("param5");
	nh.deleteParam("param6");

	return 0;
}