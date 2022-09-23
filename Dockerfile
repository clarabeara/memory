FROM ubuntu:20.04
SHELL ["/bin/bash","-c"]
RUN apt update
RUN apt install make vim -y
RUN apt-get install g++ -y
RUN apt install wamerican -y
