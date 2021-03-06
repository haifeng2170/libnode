// Copyright (c) 2013 Plenluno All rights reserved.

#ifndef LIBNODE_DETAIL_HTTP_INCOMING_MESSAGE_LIST_H_
#define LIBNODE_DETAIL_HTTP_INCOMING_MESSAGE_LIST_H_

#include <libnode/detail/free_list.h>
#include <libnode/detail/http/incoming_message.h>

namespace libj {
namespace node {
namespace detail {
namespace http {

inline FreeList<IncomingMessage::Ptr>* incomingMessageList() {
#ifdef LIBJ_USE_SP
    static FreeList<IncomingMessage::Ptr> list(100);
#else
    static FreeList<IncomingMessage::Ptr> list(0);
#endif
    return &list;
}

}  // namespace http
}  // namespace detail
}  // namespace node
}  // namespace libj

#endif  // LIBNODE_DETAIL_HTTP_INCOMING_MESSAGE_LIST_H_
