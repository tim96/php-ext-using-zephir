FROM ubuntu:latest

RUN apt-get update
RUN apt-get upgrade --yes

RUN apt-get install --quiet --yes python-software-properties
RUN apt-get install --quiet --yes mc htop aptitude subversion git mercurial
