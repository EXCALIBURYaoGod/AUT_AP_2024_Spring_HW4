#include "../include/message.h"
#include <iostream>

Message::Message(std::string type, std::string sender, std::string receiver, std::string time)
{
    this->type = type;
    this->sender = sender;
    this->receiver = receiver;
    this->time = time;
}

Message::~Message()
{
}

std::string Message::get_type() const
{
    return this->type;
}

std::string Message::get_sender() const
{
    return this->sender;
}

std::string Message::get_receiver() const
{
    return this->receiver;
}

std::string Message::get_time() const
{
    return this->time;
}

void Message::print(std::ostream &os) const
{
    
}

std::ostream &operator<<(std::ostream &os, const Message &msg)
{
    os <<"*************************\n"<<
    msg.sender<<" -> "<<msg.receiver<<"\n"<<
    "message type: "<<msg.type<<"\n"<<
    "message time: "<<msg.time<<"\n"<<
    "*************************\n";
    return os;
}