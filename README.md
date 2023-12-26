
# minitalk

## Name

minitalk - communication between a client and server with UNIX signals.

## **Synopsis**

**server** - prints server's PID in stdout.
**client** [*server's_pid*] [*string*].

## Description

minitalk creates two programs - a **client** and a **server** - and establishes a communication between then. This data exchange is made using UNIX signals. The server must be started first, and it prints in stdout (standard output) his PID (process ID). The client has to be started with two arguments: [*server’s PID*] and a [*string*] with the message that will be send by the client. It can be a single word or multiple words between double quotes. After that, server should print the received message in stdout.

## **Download**

You can download the source code [here](https://github.com/dmatavel/minitalk/archive/refs/heads/main.zip) or click the "Code" button at the upper-right corner of this repository, selecting "Download Zip".

Alternatively, you can clone this repository in your machine. Simple copy and paste or write the following command in your terminal:

    cd ~/Downloads/ && git clone https://github.com/dmatavel/minitalk.git

It assumes that you have [Git](https://git-scm.com/) installed and a **Downloads** folder in your **Home** directory. If you face any error, check this requirements.

## Compilation and execution

1. Skip this step if you have **[gcc](https://gcc.gnu.org/)** installed.

Assuming that you are using Ubuntu 22.04 or 20.04, update your system executing in your terminal:

    sudo apt update

followed by

    sudo apt upgrade

Install **gcc** with:

    sudo apt install build-essential

2. If you downloaded the zip file, extract it and enter the **minitalk-main** folder. With a right click on your file browser, select the option **Open in Terminal** or something like that.

If you've cloned the repository, simple go inside the program's directory. Copy and paste or write in your terminal:

    make minitalk

Two executable will be created: **server** and **client**. After that, run the server's program with:

	  ./server
  
  And the client's program with:

	./client [server's_pid] [message]

## Bugs and contribution

Report bugs sending an email for matavelidanilo@gmail.com or opening an issue on the project's GitHub repository. Pull requests with fixes, features or any other upgrades are highly welcome.  

## Supported OSs

file_editor was developed and tested in a GNU/Linux Debian based system (Ubuntu 22.04 LTS). 

## 42 cursus students

minitalk was first developed as a 42 cursus project. If you are a student at 42, please be aware that this project may have been modified in relation to the project that was submitted for evaluation during the course. You can take it as a reference for your studies, but not as a parameter for correcting your project.

## License

This is a free work delivered for educational purposes during the main course
at 42 <42.rio>.

Feel free to use it, change it, give advices, send me a pull request or
just mail me if you want to share some thoughts.

In jurisdictions that recognize copyright laws, the author or authors
of this software dedicate any and all copyright interest in the
software to the public domain. We make this dedication for the benefit
of the public at large and to the detriment of our heirs and
successors. We intend this dedication to be an overt act of
relinquishment in perpetuity of all present and future rights to this
software under copyright law.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.
