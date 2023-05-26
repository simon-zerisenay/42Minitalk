##42 Minitalk Project
#Introduction
Welcome to the 42 Minitalk project! This project is designed to showcase your understanding of interprocess communication using signals in C programming. Minitalk is a simple client-server communication system that allows the transfer of text messages between two processes using signal handling.

#Objective
The main objective of this project is to implement a client and server program that can communicate with each other using signals. The client program will take a string message as input and send it to the server program. The server program will receive the message and display it on the standard output.

#Features
Signal-based communication: The client and server will communicate with each other using signals. Signals provide a simple and efficient way to transmit data between processes.
Reliable message transmission: The implementation ensures that messages are reliably transmitted from the client to the server. It handles potential signal losses and guarantees the integrity of the transmitted data.
ASCII encoding: The messages are encoded using ASCII characters, allowing for the transmission of various text-based content.
Bonus feature: The project includes a bonus feature that enhances the communication system. This feature involves implementing an acknowledgement mechanism to ensure that each message is received successfully by the server.
Installation
To use the Minitalk project, follow these steps:

Clone the repository: git clone https://github.com/your_username/42-minitalk.git
Navigate to the project directory: cd 42-minitalk
Compile the client and server programs: make
Run the server program in one terminal window: ./server
Run the client program in another terminal window: ./client [server_pid] [message], where [server_pid] is the process ID of the server and [message] is the text message to be sent.
#Usage
Start the server program by running ./server. It will display its process ID, which you will need for the client.
Open a new terminal window and run the client program using the command ./client [server_pid] [message], replacing [server_pid] with the process ID of the server and [message] with the desired text message.
The client will transmit the message to the server using signal communication.
The server will receive the message and display it on the standard output.
#Conclusion
The 42 Minitalk project provides a practical and hands-on experience with interprocess communication using signals. By implementing a reliable client-server communication system, you will gain a deeper understanding of signal handling and data transmission techniques. Have fun exploring the project and don't forget to try out the bonus feature for an added challenge!

#For more detailed information, please refer to the project's documentation and source code. Happy coding!
