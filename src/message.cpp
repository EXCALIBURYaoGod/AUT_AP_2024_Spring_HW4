#include "../include/message.h"
#include <iostream>

Message::Message(std::string type, std::string sender, std::string receiver)
{
    this->type = type;
    this->sender = sender;
    this->receiver = receiver;
    std::time_t t = std::time(nullptr);
    this->time = time;
    this->time.erase(time.find_last_not_of(" \n\r\t") + 1);
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
    os <<"*************************\n"<<
    this->get_sender()<<" -> "<<this->receiver<<"\n"<<
    "message type: "<<this->type<<"\n"<<
    "message time: "<<this->time<<"\n"<<
    "*************************\n";
}

std::ostream &operator<<(std::ostream &os, const Message &msg)
{
    msg.print(os);
    return os;
}