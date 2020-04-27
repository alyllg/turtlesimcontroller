<launch>
	<node pkg="turtlebot_control" type="spawn_jim.sh" name="spawn_jim" output="screen"/>
	<node pkg="turtlebot_control" type="spawn_carl.sh" name="spawn_carl" output="screen"/>
</launch>

