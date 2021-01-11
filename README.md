Introduction
============

This is a project of Mälardalens högskola MDH, course of Software Engineering 2: Team Project.

Our project connects a client we have created (simulating the device installed in a vehicle) with a cloud service (in this case Amazon Web Services) in order to visualize data coming from the vehicles.

The communication is developed using the **[MQTT](https://mqtt.org/)** protocol.

The Web Dashboard is developed using HTML, CSS and JavaScript (read the README file on the project_dashboard folder to see more).



Usage
------------
#### To use the client feature
For the client feature we followed [this](https://www.qt.io/blog/2019/08/29/cloud-providers-telemetry-via-qt-mqtt) blog post that was very helpful.
Since we only needed to connect to AWS we did not use all of the suggestions for the rest of the cloud services.
In order to use the client feature simply clone the "dva313-aws" files and run the code.

Credits : [here](https://github.com/mauricek/qtmqtt_cloud_connectors)
#### To visualize the Dashboard

The dashboard it's actually a website. To assure that everything works you have to host it.
You can to it locally using some tools. One of them is called **[XAMPP](https://www.apachefriends.org/)**.



License
-------
This dashboard is an open source project by students of MDH Mälardalens högskola
(course of Software Engineering 2: Team Project).
This dashboard is licensed under [MIT](http://opensource.org/licenses/MIT).
