Introduction
============

This Dashboard is a fully responsive demonstration. Based on **[Bootstrap 4.4](https://getbootstrap.com)** framework and also the JS/jQuery plugin.
Highly customizable and easy to use. Fits many screen resolutions from small mobile devices to large desktops.


Usage
------------

#### Host this dashboard:

This dashboard it's actually a website. To assure that everything works you have to host it.
You can to it locally using some tools. One of them is called **[XAMPP](https://www.apachefriends.org/)**

Currently the site is hosted with AWS EC2 on a Ubuntu image using Apache2 server.

To host this website you create a EC2 instance and then add what Ubuntu image you want to use.
To find the offical ubuntu image for your zone in AWS you can search for the ID on this webpage
https://cloud-images.ubuntu.com/locator/ec2/

You then select the Ubuntu image and start running the server instance. You then need to log into the server via an SSH connection with a key you get for the instance, this key can only be fetched when you first create then instance and can never be retrived at a later time. 

After connecting to the SSH you will need to install Apache2 using the following command
sudo apt install apache2
After installing it you need to clone this project /project_dashboard. Apache will host from a directory named /var/www/html. After cloning the project you need to remove the html directory and place this project in the var/www/ directory. Then remove the html directory and rename this to html to replace the directory.
After these steps the website is up and running


Browser Support
---------------
- IE 10+
- Firefox (latest)
- Chrome (latest)
- Safari (latest)
- Opera (latest)
- Microsoft Edge (latest)

License
-------
This dashboard is an open source project by students of MDH Mälardalens högskola
(course of Software Engineering 2: Team Project).
This dashboard is licensed under [MIT](http://opensource.org/licenses/MIT).
