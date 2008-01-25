#include <giapi/giapi.h>

#include "JmsStatusSender.h"


namespace giapi {

log4cxx::LoggerPtr JmsStatusSender::logger(log4cxx::Logger::getLogger("giapi.JmsStatusSender"));

JmsStatusSender::JmsStatusSender() {
}

JmsStatusSender::~JmsStatusSender() {
}

int JmsStatusSender::postStatus(const char* name) const throw (PostException) {
	LOG4CXX_ERROR(logger, "JmsStatusSender::postStatus unimplemented");
	return status::GIAPI_NOK;
}

int JmsStatusSender::postStatus() const throw (PostException) {
	LOG4CXX_ERROR(logger, "JmsStatusSender::postStatus unimplemented");
	return status::GIAPI_NOK;
}

}
