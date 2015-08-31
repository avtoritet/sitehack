# sitehack
Small Windows program that will block a website

Execute this program as a prank on your friend's computer.
It will block www.google.com but it's possible to add more sites to the list.

The program changes Windows hosts file by making www.google.com resolve to
127.0.0.2 which is not routable. 
To add more sites, make additional entries, incrementing the IP address
127.0.0.3, 127.0.0.4 and so on.

To fix simply find the hosts file, delete created entries and save the file.
