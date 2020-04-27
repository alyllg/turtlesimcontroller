<launch>

	<node pkg="turtlesim" type="turtlesim_node" name="turtlesim" output="screen"/>

	<node pkg="turtlebot_control" type="basic_controller" name="controller_1" output="screen">
		<remap from="cmd_vel" to="turtle1/cmd_vel"/>
		<param name="linear_speed" value="5.0"/>
		<param name="angular_speed" value="5.0"/>
	</node>

	<node pkg="turtlebot_control" type="basic_controller" name="controller_2" output="screen">
		<remap from="cmd_vel" to="turtle2/cmd_vel"/>
		<param name="linear_speed" value="5.0"/>
		<param name="angular_speed" value="5.0"/>
		<param name="spawn_turtle_name" value="turtle2"/>
	</node>

</launch>
