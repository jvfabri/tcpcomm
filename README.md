# tcpcomm
Hello! You are using TCPComm, your favorite file transfering utility.
To set up your application, you need to have QT 5.12 or above installed,
as well as the latest QMake. 
To run the application, open up a terminal located in the folder of the 
project files and run the following commands:

  qmake
  
  make
  
  ./tcpcomm
  
To run another stance of the same application to send/receive files 
locally, open another terminal and do the same steps again.

If you wish to send a file:
- Select Send from the drop down menu File.
- Select the file you wish to send using the file dialog.
- When everything is fired up, click Set up to configure your server.
- TCPComm automatically chooses the best IP and port to send
your file.
- Wait for the Connected! message to show up, and click Send.

If you wish to receive a file:
- Select Receive from the drop down menu File.
- Select the IP and port of the server you wish to receive the file
from. A list of local IPs are also shown in the IP drop down.
- Click Connect to connect to the server and wait for the server
to send the file to you.
- When you receive the file, a pop up will appear asking for you 
to save the file received. Name it and open it up! Congrats!
