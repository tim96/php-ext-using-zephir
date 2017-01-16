FROM ubuntu:latest

RUN apt-get update
RUN apt-get upgrade --yes

RUN apt-get install --quiet --yes python-software-properties

# Install necessary libraries
RUN apt-get install --quiet --yes mc htop aptitude subversion git mercurial

# Install necessary tools
RUN apt-get install -y nano wget dialog net-tools

# Download and Install Nginx
RUN apt-get install -y nginx
