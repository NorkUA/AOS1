# Get the base Ubuntu image from Docker Hub
FROM ubuntu:latest

RUN apt-get -y update && apt-get install -y

RUN apt-get -y install clang


WORKDIR /usr/src/dockertest1

RUN clang++ -o main main.cpp

CMD ["./main"]
