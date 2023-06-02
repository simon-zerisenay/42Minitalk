<h1> 42 Minitalk Project </h1>
<br/>
<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/simon-zerisenay/42Minitalk?color=lightblue" />
	<img alt="Number of lines of code" src="https://img.shields.io/tokei/lines/github/simon-zerisenay/42Minitalk?color=critical" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/simon-zerisenay/42Minitalk?color=yellow" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/simon-zerisenay/42Minitalk?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/simon-zerisenay/42Minitalk?color=green" />
</p>
<br/>  
<h2>Introduction</h2> 
<br/>  
Welcome to the 42 Minitalk project! This project aims to demonstrate your understanding of interprocess communication using signals in C programming. Minitalk is a simple client-server communication system that enables the transmission of text messages between two processes through signal handling.

<h2>Objective</h2> 
The primary objective of this project is to implement a client and server program that can effectively communicate with each other using signals. The client program will take a string message as input and send it to the server program, which will receive the message and display it on the standard output.

<h2>Features<h2>    
  <h3>Signal-Based Communication</h3> 
The Minitalk project leverages signal-based communication for exchanging data between the client and server. Signals provide a lightweight and efficient mechanism for interprocess communication, making them well-suited for this task. The project demonstrates the handling of specific signals, such as SIGUSR1 and SIGUSR2, to transmit information.
 
<h3>Reliable Message Transmission</h3>
To ensure reliable message transmission, the implementation accounts for potential signal losses. The client program employs a bit-by-bit approach to send each character of the message, allowing the server to reconstruct the complete message accurately. Additionally, the server acknowledges successful message reception by sending a specific signal back to the client.

<h3>ASCII Encoding</h3> 
The Minitalk project utilizes ASCII encoding to represent text messages. ASCII characters are widely supported and can represent various alphanumeric characters, symbols, and control characters. By using ASCII encoding, the project enables the transmission of diverse text-based content.
  
<h3>Bonus Feature: Acknowledgement Mechanism</h3>  
As a bonus feature, the project includes an acknowledgement mechanism to enhance the communication system. After receiving each message, the server sends a signal back to the client to indicate successful reception. This mechanism provides additional reliability and allows for the implementation of error handling strategies.

<h3>Installation and Usage</h3>
To use the Minitalk project, follow these steps:
<div align="center">
  <p>Clone the repository:<p> 
                                          git clone https://github.com/simon-zerisenay/42Minitalk.git
<br/>
   <br> 
  Navigate to the project directory: 
  <br/>
   <br> 
  <i>             cd 42-minitalk </i> 
  <br/>
   <br>
Compile the client and server programs: 
  <br/>
   <br>
  <i>make </i>
  </br>
   <br>
Run the server program in one terminal window: 
     <br>
  ./server
     <br/>
In another terminal window, run the client program:
     <br/>
  ./client [server_pid] [message]
   <br>
  Replace [server_pid] with the process ID of the server.
Replace [message] with the desired text message to be sent.
How it Works
The Minitalk project consists of two main components: the client and the server.
 <br>
   <br>
  </div>
  <br/>
<h2>Client</h2>
 <br>
   <br>
  The client program is responsible for sending the text message to the server. It takes the process ID of the server and the message as command-line arguments. The client sends the message to the server by converting each character into its binary representation and transmitting it bit by bit using signals. It handles the signal responses from the server and keeps track of the number of bits received. Once the entire message is transmitted, the client terminates.
<br>
   <br>
  <h2>Server</h2>
  <br>
The server program waits for incoming signals from the client. It sets up signal handlers for SIGUSR1 and SIGUSR2 to process the incoming signals. The server reconstructs the message by accumulating the bits received from the client and decoding them back into characters. It displays the received message on the standard output. The server continues to listen for incoming signals indefinitely.
<br>
  <h2>Example Run</h2>
To illustrate the Minitalk project in action, let's consider an example run:

Start the server program in one terminal window:
  <br/>
  <br>
  <div align="center"> ./server </div>
  <br/>
  <br>
The server process identification (PID) will be displayed on the screen.
Open another terminal window and run the client program: 
  <br/>
  <br/>
  <div align="center"> ./client [server_pid] [message] </div>
<br/>
  <br/>
  Replace [server_pid] with the PID of the server obtained in the previous step.
Replace [message] with the desired text message to be sent.
The client will transmit the message to the server using signal-based communication.
The server will receive the message and display it on the standard output.
The client program will terminate once the message transmission is complete.
  <h1> Conclusion </h1>
The 42 Minitalk project provides an immersive learning experience in interprocess communication and signal handling within the context of C programming. By implementing a robust client-server communication system, you will gain valuable insights into signal-based communication, reliable message transmission, and ASCII encoding. Additionally, the bonus feature of an acknowledgement mechanism adds an extra layer of sophistication to the project.
<br/>
  <br/>
For more detailed information and to explore the source code, please refer to the project's documentation and code files. Enjoy delving into the intricacies of interprocess communication through the Minitalk project!
<br/>
